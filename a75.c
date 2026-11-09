//Q75> Add matrices//
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
    int a1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the value for (%d,%d) position:",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%d ",a1[i][j]);
        }
    }printf("\n");
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=a[i][j]+a1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }
    }

    return 0;
}

    
    