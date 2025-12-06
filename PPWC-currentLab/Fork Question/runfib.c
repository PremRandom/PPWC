#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
	pid_t pid = fork();
	
	if(pid == 0){
		printf("Child process running fibonacci series pid= %d.\n", getpid());
		execl("./fib", "fib", NULL);
		
		perror("execl failure");
		exit(EXIT_FAILURE);

	
	} else {
		printf("parent waiting... pid = %d\n", getpid());
		int status;
		waitpid(pid, &status, 0);
		printf("Child process completed printing fibonacci series \n");
	
	}
	


}
