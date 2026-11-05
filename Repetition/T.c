#include <stdio.h>
int main(){
    int testcase, count = 0;
    scanf("%d", &testcase);
        for(int i = 1; i <= testcase; i++){
            int sent = 0, solved = 0, viewed = 0;
            
            scanf("%d %d %d", &sent, &solved, &viewed);

            if(solved > viewed){
                count++;
            }
        }
        printf("%d\n", count);
        return 0;
}