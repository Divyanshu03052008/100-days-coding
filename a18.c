/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include <stdio.h>
int main(){
    int per;
    printf("enter your percentage:");
    scanf("%d",&per);
    if(per<=100 && per>=90){
        printf("GRADE A");
    }
    else if(per<=89 && per>=80){
        printf("GRADE B");
    }
    else if(per<=79 && per>=70){
        printf("GRADE C");
    }
    else if(per<=69 && per>=60){
        printf("GRADE D");
    }else{
        printf("GRADE F");
    }
        return 0;
}
