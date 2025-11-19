#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
  int res,n;
  char buffer[100];
  //res=open("pipe",O_RDONLY);
  res=open("pipe",O_NONBLOCK,O_RDONLY);
  n=read(res,buffer,100);
  printf("Reader process %d started\n",getpid());
  printf("Data received by receiver %d is: %s\n",getpid(), buffer);
        }
