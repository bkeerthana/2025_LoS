#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>        
int main()
        {
               int res;
               res = mkfifo("cys",0777); //creates a named pipe with the cys
               printf("named pipe created\n");
        }
        
        
/* 
Method to execute 
1. First create a named pipe
2. create object file sender and receiver
3. execute 



bk@ubuntu:~/LCYS/os/np$ gcc -o s sender.c 
bk@ubuntu:~/LCYS/os/np$ gcc -o r receiver.c 
bk@ubuntu:~/LCYS/os/np$ ./s & ./r
*/
