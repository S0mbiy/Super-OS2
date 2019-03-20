#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
void signalHandler(int signum){
	printf("recibi senal %d\n", signum);
}
int main(int argc, char **argv){
	struct sigaction sa;

    sa.sa_handler = signalHandler;
    sa.sa_flags = 0; // or SA_RESTART
    sigemptyset(&sa.sa_mask);

    if (sigaction(SIGINT, &sa, NULL) == -1) {
        perror("sigaction");
        exit(1);
    }
	for(;;){
		continue;
	}
}


