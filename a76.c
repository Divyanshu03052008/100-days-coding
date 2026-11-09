//Q76> Check if the matrix is symmetric.//
#include <stdio.h>
int main(){
    int m,n;
    printf("enter the rows:");
    scanf("%d",&n);
    printf("enter the columns:");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
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
    }printf("\n");
    if(n==m){
        int is_sy=0;
        for(int i=0;i<n;i++){
            printf("\n");
            for(int j=0;j<m;j++){
                printf("%d ",a[j][i]);
                if(a[j][i]==a[i][j]){
                    is_sy=1;
                }
            }
        }
        if(is_sy==1){
        printf("this is a symmetric matrix");
        }
    } 
    else{
        printf("This is not symmetric matrix");
    }

    return 0;
}    