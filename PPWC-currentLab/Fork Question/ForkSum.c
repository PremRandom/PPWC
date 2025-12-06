#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
	pid_t pid = fork();
	
	if(pid == 0){
		printf("Child process running SumArray pid= %d.\n", getpid());
		execl("./SumArray", "SumArray", NULL);
		
		perror("execl failure");
		exit(EXIT_FAILURE);

	
	} else {
		printf("parent waiting... pid = %d\n", getpid());
		int status;
		waitpid(pid, &status, 0);
		printf("Child process completed \n");
	
	}
	


}
