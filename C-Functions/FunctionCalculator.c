#include<stdio.h>
void getcalculator(int x, int y) {
    int res;
    printf("Press 1 For ADD \n");
    printf("Press 2 For SUBTRACT \n");
    printf("Press 3 For MULTIPLY \n");
    printf("Press 4 For DIVIDE \n");
int op;
 printf("Enter Operation You want : \n");
 scanf("%d",&op);

 switch(op) {
 case 1 :
     res  = x+y;
     printf("ADDITION IS : %d", res);
     break;

 case 2 :
    res = x-y;
    printf("SUBTRACTION IS : %d", res);
    break;

 case 3 :
    res= x*y;
    printf("MULTIPLICATION IS : %d", res);
    break;

 case 4 :
    res = x/y;
    printf("DIVISION IS : %d", res);
    break;
 }
}
int main() {
int num1,num2;
printf("Enter Two Numbers :");
scanf("%d %d", &num1, &num2);
getcalculator(num1,num2);
return 0;
}
