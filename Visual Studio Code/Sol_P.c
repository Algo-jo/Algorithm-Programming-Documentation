#include <stdio.h>
int main(){

   int ID, Num;
   int Name[101];
   char Class;

   scanf("%d", &ID); getchar();
   scanf("%[^\n]", &Name); getchar();
   scanf("%c %d", &Class, &Num); getchar();

   printf("Id    : %d\n", ID);
   printf("Name  : %s\n", Name);
   printf("Class : %c\n", Class);
   printf("Num   : %d\n", Num);
   
    return 0;
}