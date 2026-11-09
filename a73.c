//  Q73> Sum of each row of a matrix and store it in an array.//
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
    int a1[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a1[j]=sum;
            sum=0;
            for(int k=0;k<m;k++){
                sum+=a[i][k];

            }


        }

    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a1[i]);
    }
    return 0;
}    