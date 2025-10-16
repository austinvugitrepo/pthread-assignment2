#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

char **arg; //for argv
int total_arg; // total number of arguments


int main (int argc, char *argv[]) {

pthread_t vows;    //thread for vowels
pthread_t cons;    //thread for constants

arg = &argv[1]; //done to ignore program name exec.
total_arg = argc -1; //capping the number of arguments used

pthread_create(&vows, NULL, NULL, NULL);
pthread_create(&cons, NULL, NULL, NULL);

pthread_join(vows, NULL);
pthread_join(cons, NULL);





}
