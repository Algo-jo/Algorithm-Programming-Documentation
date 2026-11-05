#include <stdio.h>
int main(){
    char course1[11], course2[11], course3[11], course4[11], course5[11];
    int start_hour1, start_hour2, start_hour3, start_hour4, start_hour5;
    int start_minute1, start_minute2, start_minute3, start_minute4, start_minute5;
    int end_hour1, end_hour2, end_hour3, end_hour4, end_hour5;
    int end_minute1, end_minute2, end_minute3, end_minute4, end_minute5; 
    int sh1, sh2, sh3, sh4, sh5, eh1, eh2, eh3, eh4, eh5;

    scanf("%s %d:%d-%d:%d", &course1, &start_hour1, &start_minute1, &end_hour1, &end_minute1); getchar();
    scanf("%s %d:%d-%d:%d", &course2, &start_hour2, &start_minute2, &end_hour2, &end_minute2); getchar();
    scanf("%s %d:%d-%d:%d", &course3, &start_hour3, &start_minute3, &end_hour3, &end_minute3); getchar();
    scanf("%s %d:%d-%d:%d", &course4, &start_hour4, &start_minute4, &end_hour4, &end_minute4); getchar();
    scanf("%s %d:%d-%d:%d", &course5, &start_hour5, &start_minute5, &end_hour5, &end_minute5); getchar();

    sh1 = start_hour1 - 1;sh2 = start_hour2 - 1;sh3 = start_hour3 - 1;sh4 = start_hour4 - 1;sh5 = start_hour5 - 1;
    eh1= end_hour1 - 1;eh2 = end_hour2 - 1;eh3 = end_hour3 - 1;eh4 = end_hour4 - 1;eh5 = end_hour5 - 1;

    printf("%s %02d:%02d-%02d:%02d\n", course1, sh1, start_minute1, eh1, end_minute1);
    printf("%s %02d:%02d-%02d:%02d\n", course2, sh2, start_minute2, eh2, end_minute2);
    printf("%s %02d:%02d-%02d:%02d\n", course3, sh3, start_minute3, eh3, end_minute3);
    printf("%s %02d:%02d-%02d:%02d\n", course4, sh4, start_minute4, eh4, end_minute4);
    printf("%s %02d:%02d-%02d:%02d\n", course5, sh5, start_minute5, eh5, end_minute5);

    return 0;
}