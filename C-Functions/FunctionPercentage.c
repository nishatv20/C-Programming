#include<stdio.h>
int getGrade(int x, int y, int z, int i, int j) {
int per = (x+y+z+i+j)/5 ;

if(per >=90) {
    printf("Grade A");
}
else if(per>=80 && per<90){
    printf("Grade B");
}
else if(per>=70 && per<80){
    printf("Grade C");
}
else if(per>=60 && per<70){
    printf("Grade D");
}
else if(per>=40 && per<60){
    printf("Grade E");
}
else {
    printf("Grade F");
}
}
main() {
int phy,chem,bio,math,comp;
printf("Enter Marks of Subjects :");
scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
getGrade(phy,chem,bio,math,comp);
}

