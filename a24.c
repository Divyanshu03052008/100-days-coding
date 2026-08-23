
/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250
Input 2:
150
Output 2:
Bill: ₹850
Input 3:
250
Output 3:
Bill: ₹1700
*/
# include <stdio.h>
int main(){
    int unit;
    printf("enter your electricity usage in units:");
    scanf("%d",&unit);
    if(unit<=100){
        printf("Bill rupees:%d",5*unit);
    }
    else if(unit>100 && unit<=200){
        printf("Bill:%d rupees",5*100+7*unit-100*7);
    }
    else if(unit>200 && unit<=300){
        printf("Bill:%d rupees",5*100+7*100+unit*10-200*10);
    }
    else if(unit>300){
        printf("Bill:%d rupees",5*100+7*100+10*100+unit*12-300*12);
    }else{
        printf("invalid syntax");
    }
    return 0;

}