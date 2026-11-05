#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    int susah = -1;
    for(int i = 0; i < testcase; i++){
        int array = 0;
        scanf("%d", &array);

        if(array == 1){
            susah = 1;
        }
    }

    if(susah == 1)printf("not easy\n");
    else printf("easy\n");
    return 0;
}