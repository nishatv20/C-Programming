#include<stdio.h>
struct movie {
char name[50];
float length;
char type[50];
float income;

};
void printMovie(struct movie m1[]) {
    printf(" NAME | LENGTH | TYPE | INCOME \n");
for(int i=0; i<3; i++) {
    printf(" %s ",m1[i].name);
    printf(" %.2f ",m1[i].length);
    printf(" %s ",m1[i].type);
    printf(" %.2f ",m1[i].income);
    printf("\n");
}
}
int main() {
struct movie m1[3];
for(int i=0; i<3; i++) {
    printf("ENTER NAME OF MOVIE :\n");
    scanf(" ");
    gets(m1[i].name);
    printf("ENTER LENGTH OF MOVIE IN HRS :\n");
    scanf("%f",&m1[i].length);
    printf("ENTRE TYPE OF MOVIE : \n");
    scanf(" ");
    gets(m1[i].type);
    printf("ENTER INCOME OF MOVIE IN CRORES:\n");
    scanf("%f",&m1[i].income);

    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++\n");

}
printMovie(m1);
return 0;
}
