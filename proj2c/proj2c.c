#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <ctype.h>
#include <sched.h>


char **arg; //for argv
int total_arg; // total number of arguments
int word_counter = 0; //initializing 

void* vowthr(void* argument);  //function protoype
void* conthr(void* argument);

int main (int argc, char *argv[]) {

pthread_t vows;    //thread for vowels
pthread_t cons;    //thread for constants

arg = &argv[1]; //done to ignore program name exec.
total_arg = argc -1; //capping the number of arguments used

pthread_create(&vows, NULL, vowthr, NULL);
pthread_create(&cons, NULL, conthr, NULL);

pthread_join(vows, NULL);
pthread_join(cons, NULL);


}

void* vowthr(void* argument) {
//remember to use '' instead of "" for characters
while (word_counter < total_arg) {

char fletter = toupper(arg[word_counter][0]);  // upper casing first letter of current word for simplification
                                              // for later check
if (fletter == 'A' || fletter == 'E' || fletter == 'I' || fletter == 'O' || fletter == 'U') {
      printf("1st_Vowel:%s\n", arg[word_counter]); //if fletter is any of vowels prints word and keeps incrementing
      word_counter++;
    } else {
      sched_yield(); //yield to other thread present
    }
   

  }

 pthread_exit(NULL);

}
//the exact clone of previous function but changed a bit for consonants 
void* conthr(void* argument) {

while (word_counter < total_arg) {

char fletter = toupper(arg[word_counter][0]);
                                              
if (!(fletter == 'A' || fletter == 'E' || fletter == 'I' || fletter == 'O' || fletter == 'U')) {
      printf("1st_notVowel:%s\n", arg[word_counter]); 
      word_counter++;
    } else {
      sched_yield();
    }
   

  }

 pthread_exit(NULL);

}


