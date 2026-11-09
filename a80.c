//Q80>Multiply two matrices.//
#include <stdio.h>
int main(){
 int m,n,n_1,m_1;
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
    }
    printf("enter the rows:");
    scanf("%d",&n_1);
    printf("enter the columns:");
    scanf("%d",&m_1);
    int a1[n_1][m_1];
    for(int i=0;i<n_1;i++){
        for(int j=0;j<m_1;j++){
            printf("enter the value for (%d,%d) position:",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<n_1;i++){
        printf("\n");
        for(int j=0;j<m_1;j++){
            printf("%d ",a1[i][j]);
        }
    }
    int prod,sum[n][m_1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m_1;j++){
            prod=0;
            for(int k=0;k<n_1;k++){
                prod+=a[i][k]*a1[k][j];
                sum[i][j]=prod;
            }

        }
    }
    printf("Multiplied matrix\n");
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m_1;j++){
            printf("%d ",sum[i][j]);
        }
    }
    
    return 0;
}        