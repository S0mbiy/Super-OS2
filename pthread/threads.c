#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS	20

int deposito = 100;
pthread_mutex_t lock;
void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
	int localdeposito;
	pthread_mutex_lock(&lock);
	localdeposito = deposito;
   printf("Hello World! It's me, thread #%ld!\n", tid);
	deposito = localdeposito+100;
	pthread_mutex_unlock(&lock);
   pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0;t<NUM_THREADS;t++){
     printf("In main: creating thread %ld\n", t);
     rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
     if (rc){
       printf("ERROR; return code from pthread_create() is %d\n", rc);
       exit(-1);
       }
     }
	
   for(t=0; t<NUM_THREADS; t++) {
      rc = pthread_join(threads[t], NULL);
      if (rc) {
         printf("ERROR; return code from pthread_join() is %d\n", rc);
         exit(-1);
         }
      }
	printf("Valor deposito = %d\n", deposito);

   /* Last thing that main() should do */
   pthread_exit(NULL);

}