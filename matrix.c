#include <stdio.h>
int main(){
    int i,j;
    int A[3][3]={{5, 10, 15},{20, 25, 30},{35, 40, 45}};
    int B[3][3]={{50, 55, 60},{65, 70, 75},{80, 85, 90}};
    printf("A + B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    printf("A - B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]-B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
