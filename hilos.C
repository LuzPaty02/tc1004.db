#include <pthread.h>
#include <stdio.h>

int saldo;
void * holaHilo(void *thid){
    printf("hola desde un hilo -> %d\n", *((int *)thid));  
    
    pthread_exit(NULL);
}


/* void * incrementaSaldo(){
    printf("el saldo actual es %d\n", saldo);
    saldo++;
} */

int main(){
    pthread_t t;
    //saldo=1;
    int thid=3;
    for (int thid=0; thid<100;thid++){
        pthread_create(&t,NULL,holaHilo,&thid);
        
       // incrementaSaldo();
    }
    
    pthread_exit(NULL);
    return 0;
}