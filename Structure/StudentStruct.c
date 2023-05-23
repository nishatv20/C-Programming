#include<stdio.h>
struct student {
int rollno;
char name[50];
char course[50];
int age;
};
void printStudent(struct student s1[]) {
for(int i=0; i<3; i++) {
    printf("%d  ",s1[i].rollno);
    printf("  %s  ",s1[i].name);
    printf("  %s  ",s1[i].course);
    printf("  %d  ",s1[i].age);
    printf("\n");
}
}
int main() {
    struct student s1[3];
    for(int i=0; i<3; i++) {
        printf("ENTER ROLL NO :\n");
        scanf("%d",&s1[i].rollno);
        printf("ENTER NAME : \n");
        scanf(" ");
        gets(s1[i].name);
        printf("ENTER COURSE : \n");
        scanf(" ");
        gets(s1[i].course);
        printf("ENTER AGE : \n");
        scanf("%d",&s1[i].age);
        printf("\n+++++++++++++++++++++++++++++++++++++++++\n");
    }
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++\n");
    printStudent(s1);
return 0;
}
