/* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
# include <stdio.h>
int main() {
    float l;
    printf("enter the length of rectangle:");
    scanf("%f",&l);
    float b;
    printf("enter the breadth of rectangle:");
    scanf("%f",&b);
    printf("perimeter of rectangle:%f\n",2*(l+b));
    printf("area of rectangle:%f\n",l*b);

    return 0;
    
}