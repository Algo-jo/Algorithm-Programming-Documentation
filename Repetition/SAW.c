#include <stdio.h>
int main(){

    int testcase, student, tscore = 1, score, highest = 0;

    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &student);
            for(int j = 1; j <= student; j++){
                scanf("%d", &score);

                if(score > highest){
                    highest = score;
                    tscore = 1;
                }
                else if(score == highest){
                    tscore++;
                }
            }
            printf("Case #%d: %d\n", i, tscore); 
            tscore = 0; highest = 0;
    }
    return 0;
}