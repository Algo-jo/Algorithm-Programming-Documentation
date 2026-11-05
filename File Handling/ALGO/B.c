#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    int testcase;
    file = fopen("testdata.in", "r");
    fscanf(file, "%d\n", &testcase);
    
    for(int i = 0; i < testcase; i++){
        int mundurin = 0;
        char array[1050] = {0};
        int length = 0;

        fscanf(file, "%d\n", &mundurin);
        fscanf(file, "%[^\n]\n", &array);

        printf("Case #%d: ", i + 1);
        
        length = strlen(array);
        for(int k = 0; k < length; k++){
            if(array[k] == '0') array[k] = 'O';
            if(array[k] == '1') array[k] = 'I';
            if(array[k] == '3') array[k] = 'E';
            if(array[k] == '4') array[k] = 'A';
            if(array[k] == '5') array[k] = 'S';
            if(array[k] == '6') array[k] = 'G';
            if(array[k] == '7') array[k] = 'T';
            if(array[k] == '8') array[k] = 'B';
        }

        for(int j = 0; j < length; j++){
            if(array[j] == ' '){
                printf(" ");
            }
            else{
                if(array[j] - mundurin >= 'A'){
                    printf("%c", array[j] - mundurin);
                }
                else if(array[j] - mundurin < 'A'){
                    printf("%c", array[j] - mundurin + 'A');
                }
            }
        }
        printf("\n");
    }

    fclose(file);
    return 0;
}