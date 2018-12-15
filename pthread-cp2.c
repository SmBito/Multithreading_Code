
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

volatile long int a = 0;

void threadFun(void *arg)
{
    int i;
    long int localA =0;
    
    for(i = 1; i < 500000; i++)
    {
        a = a + i;
    }
}

void threadFun2(void *arg)
{
    int i;
    long int localA =0;
    
    for(i = 500000; i < 1000000; i++)
    {
        a = a + i;
    }
}

int main(int argc, char **argv)
{
    pthread_t one, two;
    int i;
    a = 0;

    /*
    pthread_create(&one, NULL, (void*)&threadFun, NULL);
    pthread_create(&two, NULL, (void*)&threadFun2, NULL);

    pthread_join(one, NULL;
    pthread_join(two, NULL);
    */

   for (i = 1; i <= 1000000; i++)
   {
       a = a + i; 
   }
    printf("%ld\n", a);

}