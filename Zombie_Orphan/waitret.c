#include  <stdio.h>
#include  <unistd.h>
#include  <stdlib.h>
#include  <sys/types.h>
#include  <sys/wait.h>



int main()
{	
	pid_t cpid;
	cpid = fork();
	if(cpid == 0){
		printf("cpid= %d  \n", getpid());
		
	}
	
	if(cpid != wait(NULL)){
		printf("%ld  \n", (long)cpid);
		printf("%ld  \n", (long)getpid());
	
	}
	
	
	

	return 0;

}
