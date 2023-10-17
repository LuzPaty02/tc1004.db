#include <pthread.h>
#include <stdio.h>

int saldo;
void * holaHilo(){
    printf("hola desde un hilo\n");  
    
    pthread_exit(NULL);
}

void * incrementaSaldo(){
    printf("el saldo actual es %d\n", saldo);
    saldo++;
}

int main(){
    pthread_t t;
    saldo=1;
    for (int i=0; i<100;i++){
        pthread_create(&t,NULL,holaHilo,NULL);
        incrementaSaldo();
    }
    
    pthread_exit(NULL);
    return 0;
}