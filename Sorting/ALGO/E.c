#include <stdio.h>
#include <string.h>

struct weather{
    char city[1050];
    double temperature;
    char degree[5];
};

int main(){

    FILE *file;
    file = fopen("testdata.in", "r");
    struct weather data[150];
    if(file == NULL){
        return 1;
    }

    int i = 0;
    while(fscanf(file, "%[^#]#%lf#%s\n", data[i].city, &data[i].temperature, &data[i].degree) == 3){
        i++;
    }

    int max = i;
    for(int j = 0; j < max; j++){
        if(strcmp(data[j].degree, "F") == 0){
            data[j].temperature = (data[j].temperature - 32) * 5 / 9;
        }
    }
    
    for(int i = 0; i < max; i++){
        int min = i;
        for(int j = max - 1; j > i; j--){
            if(data[j].temperature < data[min].temperature){
                min = j;
            }
            else if(data[j].temperature == data[min].temperature){
                if(strcmp(data[j].city, data[min].city) < 0){
                    min = j;
                }
            }
        }
        if(min != i){
            double temp = data[min].temperature;
            data[min].temperature = data[i].temperature;
            data[i].temperature = temp;

            char tempo[105];
            strcpy(tempo, data[min].city);
            strcpy(data[min].city, data[i].city);
            strcpy(data[i].city, tempo);

            char tempA[105];
            strcpy(tempA, data[min].degree);
            strcpy(data[min].degree, data[i].degree);
            strcpy(data[i].degree, tempA);
        }
    }

    for(int i = 0; i < max; i++){
        if(strcmp(data[i].degree, "F") == 0){
            printf("%s is %.2lf%s\n", data[i].city, (data[i].temperature * 9 / 5) + 32, data[i].degree);
        }
        else printf("%s is %.2lf%s\n", data[i].city, data[i].temperature, data[i].degree);
    } 

    fclose(file);
    return 0;
}