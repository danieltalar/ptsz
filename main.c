/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>

int S=54;
int K=3;
int N=5;
int i,w,x,j;
 int findMatrices(int array [N][N], int K, int N){
        int count=0;
        for (i=0;i<N;i++){
            for(j=0;j<N;j++){
                int matrix[K][K];
                int suma=0;
                if (i+K<=N & j+K<=N){
                    for (w=0;w<K;w++){
                        for (x=0;x<K;x++){
                            matrix[w][x]= array[i+w][i+x];
                            suma+=matrix[w][x];
                        }
                    }
                    printf("Suma: %d \n", suma);
                    if (suma==S){
                      printf("Znaleziono podmacierz!\n");
                        for (w=0;w<K;w++){
                            for (x=0;x<K;x++){
                                printf("i: %d j: %d Wartoœæ %d\n" ,w,x, matrix[w][x]);
                            }
                        }
                        count++;
                    }
                }
            }
        }
         return count;
    }

int main()
{
    int i,j;
    printf("Hello World\n");
    int matrix [N][N] ;
        for (i=0;i<N;i++){
            for(j=0;j<N;j++){
                matrix[i][j]=i*3;
               // printf("%d\n", matrix[i][j]);
            }
        }
    int s = findMatrices(matrix, K, N);
    printf("%d\n", s);

    return 0;
}
