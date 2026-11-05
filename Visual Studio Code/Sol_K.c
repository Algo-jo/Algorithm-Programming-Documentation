#include <stdio.h>
int main(){

    char name[120], nis[20];
    int age;
    scanf("%[^\n]\n%s\n%d", &name, &nis, &age); getchar();
    

    printf("Name: %s\n", name);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);
    
    return 0;
}