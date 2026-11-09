// Q78>
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
    int sum=0;

    if(n==m){
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                if(a[i][j]==a[i][i]){

                    sum+=a[i][j];
                }
            }
        }
    }
    print("\n");
    printf("%d",sum);
    return 0;
}        