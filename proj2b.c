#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//pointer is array
int *Y; //resultant vector
int **A; //matrix   
int *X; //vector
	// Y = AX where A is m*n, X is n (n*1), Y is m (m*1) 
int m; //rows
int n; //columns

int main() {

printf("Enter the amount of rows: ");
scanf("%d", &m);
printf("Enter the amount of columns: ");
scanf("%d", &n);

Y = malloc(m * sizeof(int)); //allocating memory for result vector (Y)

A = malloc(m * sizeof(int*)); //allocating memory for matrix (A)
for( int i = 0; i < m; i++){

A[i] = malloc(n * sizeof(int)); //allocating memory for columns of matrix

}

X = malloc(n * sizeof(int)); //allocating memory for vector (X)

srand(time(NULL)); // seeding with epoch time

for( int i = 0; i < m; i++){

for( int j = 0; j < n; j++){
A[i][j] = rand() % 100;      // filling matrix (A) with random num
}

}

for( int i = 0; i < n; i++){
X[i] = rand() % 100;           // filling vector (x) with random num
}

printf("Matrix:\n");
printf("-----------------------\n");
for( int i = 0; i < m; i++){           //printing the matrix

for( int j = 0; j < n; j++){
printf("%3d ", A[i][j]);
}
printf("\n\n"); //space to break up output
}

printf("Vector:\n");
printf("-----------------------\n");
for( int i = 0; i < n; i++){
printf("%3d ", X[i]);             //printing the vector
}
printf("\n\n");

for( int i = 0; i < m; i++){

free(A[i]);  //releasing column from a after completion

}
free(A);
free(Y);  // releasing memory after completion
free(X);






}
