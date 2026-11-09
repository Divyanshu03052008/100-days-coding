//Q77>Check if the elements on the diagonal of matrix is distinct.//
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
    }
    int istrue=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][i]==a[j][j]){
                printf("False");
                istrue=0;
                break;
            }
        }
        if(istrue==0){
        break;
        }
    }
    if(istrue==1){
        printf("true");
    }
    
    return 0;
}    