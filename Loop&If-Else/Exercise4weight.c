#include<stdio.h>
main() {
int weight;
printf("Enter Weight of Boxer in Pounds : \n");
scanf("%d",&weight);

printf("-------------------------------\n");
if(weight<115) {
    printf("Boxer Category : Flyweight");
}

else if(weight>=115 && weight<=121) {
    printf("Boxer category : Bantamweight");
}

else if(weight>=122 && weight<=153) {
    printf("Boxer category : Featherweight");
}

else if(weight>=154 && weight<=189) {
    printf("Boxer category : Middleweight");
}

else {
    printf("Boxer category : Heavyweight");
}
printf("\n-------------------------------");
}
