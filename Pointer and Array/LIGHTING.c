#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        int temen, ruangan, visit;
        scanf("%d %d %d", &temen, &ruangan, &visit);

        int pattern[temen][ruangan];
        int lampu[ruangan];
        for(int i = 0; i < ruangan; i++){
            lampu[i] = 0;
        }

        for(int i = 0; i < temen; i++){
            for(int j = 0; j < ruangan; j++){
                scanf("%d", &pattern[i][j]);
            }
        }

        for(int i = 0; i < visit; i++){
            int index;
            scanf("%d", &index);
            index--;

            for(int j = 0; j < ruangan; j++){
                if(pattern[index][j] == 1){
                    lampu[j] = 1 - lampu[j];
                }
            }
        }
    for(int i = 0; i < ruangan; i++){
        if(lampu[i] == 1)printf("YES\n");
        else printf("NO\n");
    }

    }
    return 0;
}