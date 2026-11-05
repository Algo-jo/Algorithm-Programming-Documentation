#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc, n;
    char str[100][1001] = {0};
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%d\n", &n);
        fscanf(fp, "%[^\n]\n", str[i]);
        printf("Case #%d: ", i + 1);
        int len = strlen(str[i]);

        for(int j = 0; j < len; j++){
            if(str[i][j] == '0') str[i][j] = 'O';
            else if(str[i][j] == '1') str[i][j] = 'I';
            else if(str[i][j] == '3') str[i][j] = 'E';
            else if(str[i][j] == '4') str[i][j] = 'A';
            else if(str[i][j] == '5') str[i][j] = 'S';
            else if(str[i][j] == '6') str[i][j] = 'G';
            else if(str[i][j] == '7') str[i][j] = 'T';
            else if(str[i][j] == '8') str[i][j] = 'B';

            if(str[i][j] == ' ') printf(" ");
            else if(str[i][j] - n < 'A') printf("%c", str[i][j] - n + 26);
            else printf("%c", str[i][j] - n);       
        }
        printf("\n");
    }
    return 0;
}