#include<stdio.h>
struct student {
int rollno;
char name [50];
char dept [50];
char course [50];
int yoj ;
};

void printStudents(struct student s1){
printf("  %d      ",s1.rollno);
printf("  %s      ",s1.name);
printf("  %s      ",s1.dept);
printf("  %s      ",s1.course);
printf("  %d      ",s1.yoj);
}

void printAllStudents(struct student s1[]){
for(int i=0; i<5; i++) {
    printf("  %d ",s1[i].rollno);
    printf("  %s ",s1[i].name);
    printf("  %s ",s1[i].dept);
    printf("  %s ",s1[i].course);
    printf("  %d ",s1[i].yoj);
    printf("\n");
}
}
int main() {
struct student s1[5];
for(int i=0; i<5; i++) {
    printf("Enter ROLL NO : \n");
    scanf("%d",&s1[i].rollno);
    printf("ENTER NAME :\n");
    scanf(" ");
    gets(s1[i].name);
    printf("ENTER DEPARTMENT : \n");
    scanf(" ");
    gets(s1[i].dept);
    printf("ENTER COURSE NAME: \n");
    scanf(" ");
    gets(s1[i].course);
    printf("ENTER YEAR OF JOINING : \n");
    scanf("%d",&s1[i].yoj);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("ROLL NO  |  NAME  |  DEPARTMENT  |  COURSE  |  YOJ |\n");
for(int i=0; i<5; i++) {
    printStudents(s1[i]);
    printf("\n");
}
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printAllStudents(s1);
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
};
