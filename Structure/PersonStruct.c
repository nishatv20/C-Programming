#include<stdio.h>
struct person {
char name[50];
int age;
int weight;
int height;
};

void printPerson(struct person p1[]) {

printf("NAME   |   AGE   |   WEIGHT   |   HEIGHT\n");
for(int i=0; i<3; i++) {
    printf("%s   ",p1[i].name);
    printf("   %d   ",p1[i].age);
    printf("   %d   ",p1[i].weight);
    printf("   %d   ",p1[i].height);
    printf("\n");
}
}
void getElder(struct person p1[]) {
    int i=0;
    if(p1[i].age > p1[i+1].age && p1[i].age > p1[i+2].age) {
        printf("%s   is ELDEST ", p1[i].name);
    }

    else if(p1[i+1].age > p1[i].age && p1[i+1].age > p1[i+2].age) {
        printf("%s   is ELDEST ", p1[i+1].name);
    }

    else {
        printf("%s   is ELDEST ", p1[i+2].name);
    }

}

int main() {
struct person p1[3];
for(int i=0; i<3; i++) {
    printf("ENTER NAME : \n");
    scanf(" ");
    gets(p1[i].name);
    printf("ENTER AGE : \n");
    scanf("%d",&p1[i].age);
    printf("ENTER WEIGHT : \n");
    scanf("%d",&p1[i].weight);
    printf("ENTER HEIGHT : \n");
    scanf("%d", &p1[i].height);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

printPerson(p1);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
getElder(p1);
return 0;
}
