#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid1,pid2,pid3;
	
	pid1=fork();
	if(pid1==0){
		printf("Child 1 : %d is running\n", getpid());
		sleep(3);
		printf("Child 1 is finished\n");
		exit(1);
	}
	
	pid2=fork();
	if(pid2==0){
		printf("Child 2: %d is running\n", getpid());
		sleep(5);
		printf("Child 2 is finished\n");
		exit(2);
	}
	pid3=fork();
	if(pid3==0){
		printf("Child 3 : %d is running\n", getpid());
		sleep(1);
		printf("Child 3 is finished\n");
		exit(3);
	}
	
	printf("Parent waiting for child 2: %d \n", pid2);
	int status;
	
	waitpid(pid2, &status, 0);
	
	if(WIFEXITED(status)){
		printf("Child 2 exited with status %d \n ", WEXITSTATUS(status));
	
	}
	
	printf("Parent executing another task\n");
	
	
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
