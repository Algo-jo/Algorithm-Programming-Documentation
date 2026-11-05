#include <stdio.h>

int main(){
    int tc, arr[120] = {0};
    scanf("%d", &tc);
    int susah = -1;
    for(int i = 0; i < tc; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 1){
            susah = 1;
            break;
        }
    }
    if(susah == 1) printf("not easy\n");
    else printf("easy\n");
    return 0;
}