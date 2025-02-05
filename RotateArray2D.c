#include <stdio.h>

void DisplayArray(int AB[2][3], int T){
    if(T == 0){
    for( int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", AB[i][j]);
        } printf("\n");
    }
    } else{
        for( int j=0; j<3; j++){
        for(int i=0; i<2; i++){
            printf("%d\t", AB[i][j]);
        } printf("\n");
    }
}
}

int main(){
    int A[2][3], B[3][2];
    printf("enter the element of the matrix: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\n \tA[%d][%d]\n", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n"); printf("(A) matrix is: \n");
    DisplayArray(A, 0);

    printf("\n"); printf("(B) matrix is: \n");
    DisplayArray(A, 1);
    

}