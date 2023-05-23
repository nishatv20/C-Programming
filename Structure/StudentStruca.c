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

void printNames(struct student s1[],int year) {
    printf("NAMES OF STUDENTS ARE :");
    for(int i=0; i<5; i++) {
        if(s1[i].yoj==year) {
    printf(" %s ", s1[i].name);
}
    }

}

void printData(struct student s1[], int roll) {
printf("DATA OF STUDENT IS :");
for(int i =0; i<5; i++) {
    if(s1[i].rollno == roll) {
        printf("%d ", s1[i].rollno);
        printf("%s ", s1[i].name);
        printf("%s ", s1[i].dept);
        printf("%s ", s1[i].course);
        printf("%s ", s1[i].yoj);
    }
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


int year;
printf("ENTER YEAR :");
scanf("%d",&year);

printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("ROLL NO  |  NAME  |  DEPARTMENT  |  COURSE  |  YOJ |\n");
for(int i=0; i<5; i++) {
    printStudents(s1[i]);
    printf("\n");
}
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printAllStudents(s1);
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printNames(s1,year);
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
int roll;
printf("ENTER ROLL NO :");
scanf("%d",&roll);
printData(s1,roll);
return 0;
};
