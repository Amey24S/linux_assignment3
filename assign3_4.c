#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void function(void *thread)
{
 int t1 =(int )(thread);
 printf("Getting access to thread and process\n");
 printf("Thread ID: %u\n", t1);

 int pid;
 pid = getpid();
 printf("Calling process PID: %d\n", pid);
}

int main()
{
pthread_t t1;

pthread_create(&t1, NULL, function, t1);

sleep(3);

printf("Exiting\n");

return 0;
}
