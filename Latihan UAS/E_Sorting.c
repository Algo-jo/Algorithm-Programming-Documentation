#include <stdio.h>
#include <string.h>

struct x{
    char city[1200];
    char degree;
    double temp;
    double tempStore;
}data[120];

void swap(int j){
    double tempDegree = data[j].tempStore;
    data[j].tempStore = data[j - 1].tempStore;
    data[j - 1].tempStore = tempDegree;

    char tempCity[1200];
    strcpy(tempCity, data[j].city);
    strcpy(data[j].city, data[j - 1].city);
    strcpy(data[j - 1].city, tempCity);

    char tempD = data[j].degree;
    data[j].degree = data[j - 1].degree;
    data[j - 1].degree = tempD;

    double tempReal = data[j].temp;
    data[j].temp = data[j - 1].temp;
    data[j - 1].temp = tempReal;
}

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int n = 0;
    while(fscanf(fp, "%[^#]#%lf#%c\n", data[n].city, &data[n].temp, &data[n].degree) == 3){
        n++;
    }
    for(int i = 0; i < n; i++){
        if(data[i].degree == 'F'){
            data[i].tempStore = (data[i].temp - 32) * 5.0/9.0;
        }else{
            data[i].tempStore = data[i].temp;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(data[j].tempStore < data[j - 1].tempStore) swap(j);
            else if(data[j].tempStore == data[j - 1].tempStore){
                if(strcmp(data[j].city, data[j - 1].city) < 0) swap(j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s is %.2lf%c\n", data[i].city, data[i].temp, data[i].degree);
    }
    fclose(fp);
    return 0;
}