#include <stdio.h>
int main(){

    char d, s, t;
    scanf("%c %c %c", &d, &s, &t); getchar();

    if(d > s && s > t){
        printf("3\n2\n1\n");
    }
    else if(d > t && t > s){
        printf("3\n1\n2\n");
    }
    else if(t > d && d > s){
        printf("1\n3\n2\n");
    }
    else if(t > s && s > d){
        printf("1\n2\n3\n");
    }
    else if(s > t && t > d){
        printf("2\n1\n3\n");
    }
    else if(s > d && d > t){
        printf("2\n3\n1\n");
    }
    return 0;
}