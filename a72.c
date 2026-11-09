//Q72> print the sum of elements of matrix.//
#include <stdio.h>
int main(){
    int m,n;
    printf("enter the rows:");
    scanf("%d",&n);
    printf("enter the columns:");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        int j=0;
        for(int j=0;j<m;j++){
            printf("enter the value for (%d,%d) position:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];

        }printf("\n");
    printf("sum of all elment:%d",sum);    
    }
    return 0;
}
