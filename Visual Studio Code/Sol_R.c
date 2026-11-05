#include <stdio.h>
int main(){

   char ID[11];
   char Name[101];
   char Kelaz;
   int Num;

   scanf("%s\n%[^\n]\n%c %d", ID, Name, &Kelaz, &Num);

   printf("Id    : %s\n", ID);
   printf("Name  : %s\n", Name);
   printf("Class : %c\n", Kelaz);
   printf("Num   : %d\n", Num);
   return 0;
}