#include  <stdio.h>
#include  <unistd.h>
#include  <stdlib.h>
#include  <sys/types.h>
#include  <sys/wait.h>



int main()
{	
	pid_t id;
	int status;
	printf("parent process : %d \n", getpid());
	
	id = fork();
	if (id==0){
		printf("child sleep 30s pid: %d \n", getpid());
		sleep(30);
		exit(3);
	
	}
	printf("before waiting - parent");
	pid_t waitr = wait(&status);
	printf("parent executed wait, return %d \n", waitr);
	
	printf("status = %d \n", status);
	

	return 0;

}
