#include <stdio.h>
#include <string.h>

struct data{ // Struct Rumah untuk menampung semua data dari .csv
char location[30];
char city[30];
int price;
int room;
int bathroom;
int carpark;
char type[20];
char furnish[20];
} rumah[4000];

void Header(){ // Function untuk tampilan Title / Header
    printf("%-26s", "Location");
    printf("%-20s", "City");
    printf("%-10s", "Price");
    printf("%-10s", "Rooms");
    printf("%-10s", "Bathroom");
    printf("%-10s", "Carpark");
    printf("%-12s", "Type");
    printf("%-12s\n", "Furnish");
}

void readFile(int row){ // Function untuk membaca file bernama "file.csv"
    FILE *file;
    file = fopen("file.csv", "r");
    char title[256]; 
    fgets(title, sizeof(title), file);
    
    // Baca sampai row yang diinginkan
    for(int i = 0; i < row; i++){
        if(fscanf(file, "%[^;]; %[^;]; %d; %d; %d; %d; %[^;]; %[^\n]\n",
        rumah[i].location, rumah[i].city, &rumah[i].price, &rumah[i].room, 
        &rumah[i].bathroom, &rumah[i].carpark, rumah[i].type, rumah[i].furnish) == 8){
            // Baca data
        }
    }
    fclose(file);
}

void display(){ // Function untuk menampilkan row sebanyak N (Opsi 1)
    int row = 0;
    printf("Number of rows: ");
    scanf("%d", &row);
    if(row > 3940) row = 3939;
    readFile(row);

    Header();
    // Tampilkan row yang diinginkan
    for(int i = 0; i < row; i++){
        printf("%-*s", 26, rumah[i].location);
        printf("%-*s", 20, rumah[i].city);
        printf("%-*d", 10, rumah[i].price);
        printf("%-*d", 10, rumah[i].room);
        printf("%-*d", 10, rumah[i].bathroom);
        printf("%-*d", 10, rumah[i].carpark);
        printf("%-*s", 12, rumah[i].type);
        printf("%-*s\n", 12, rumah[i].furnish);
    }
    puts("");
}

// Semua function di bawah ini untuk menampilkan inputan dari void selectRow();
//======================================================
void Location(char Data[]){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(strcmp(Data, rumah[j].location) == 0){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void City(char Data[]){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(strcmp(Data, rumah[j].city) == 0){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Price(int Data){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(Data == rumah[j].price){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Rooms(int Data){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(Data == rumah[j].room){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Bathroom(int Data){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(Data == rumah[j].bathroom){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Carpark(int Data){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(Data == rumah[j].carpark){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Type(char Data[]){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(strcmp(Data, rumah[j].type) == 0){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
void Furnish(char Data[]){
    int manggil = 1;
    for(int j = 0; j < 3939; j++){
        if(strcmp(Data, rumah[j].furnish) == 0){
            if(manggil == 1){
                Header();
                manggil = -1;
            }
            printf("%-*s", 26, rumah[j].location);
            printf("%-*s", 20, rumah[j].city);
            printf("%-*d", 10, rumah[j].price);
            printf("%-*d", 10, rumah[j].room);
            printf("%-*d", 10, rumah[j].bathroom);
            printf("%-*d", 10, rumah[j].carpark);
            printf("%-*s", 12, rumah[j].type);
            printf("%-*s\n", 12, rumah[j].furnish);
        }
    }
    if(manggil == 1) printf("Data not found!\n");
}
//======================================================

void selectRow(){ // Function untuk input column dan data (Opsi 2)
    readFile(3939);
    char column[10] = {0};
    char DataString[20] = {0};
    int DataInteger = 0;
    printf("Choose column: ");
    scanf("%[^\n]", column); getchar();

    // Selection tergantung Column yang diinput
    if(strcmp(column, "Location") == 0){
        printf("What do you want to find?: ");
        scanf("%[^\n]", DataString);
        printf("Data found! Here's the details:\n");
        Location(DataString);
    }
    else if(strcmp(column, "City") == 0){
        printf("What do you want to find?: ");
        scanf("%[^\n]", DataString);
        printf("Data found! Here's the details:\n");
        City(DataString);
    }
    else if(strcmp(column, "Price") == 0){
        printf("What do you want to find?: ");
        scanf("%d", &DataInteger);
        printf("Data found! Here's the details:\n");
        Price(DataInteger);
    }
    else if(strcmp(column, "Rooms") == 0){
        printf("What do you want to find?: ");
        scanf("%d", &DataInteger);
        printf("Data found! Here's the details:\n");
        Rooms(DataInteger);
    }
    else if(strcmp(column, "Bathroom") == 0){
        printf("What do you want to find?: ");
        scanf("%d", &DataInteger);
        printf("Data found! Here's the details:\n");
        Bathroom(DataInteger);
    }
    else if(strcmp(column, "Carpark") == 0){
        printf("What do you want to find?: ");
        scanf("%d", &DataInteger);
        printf("Data found! Here's the details:\n");
        Carpark(DataInteger);
    }
    else if(strcmp(column, "Type") == 0){
        printf("What do you want to find?: ");
        scanf("%[^\n]", DataString);
        printf("Data found! Here's the details:\n");
        Type(DataString); 
    }
    else if(strcmp(column, "Furnish") == 0){
        printf("What do you want to find?: ");
        scanf("%[^\n]", DataString);
        printf("Data found! Here's the details:\n");
        Furnish(DataString);
    }
    else printf("Data not found!\n");
}
//======================================================
void urut(int j){
    char temp[30] = {0};
    strcpy(temp, rumah[j].location);
    strcpy(rumah[j].location, rumah[j-1].location);
    strcpy(rumah[j-1].location, temp);
    char temp1[30] = {0};
    strcpy(temp1, rumah[j].location);
    strcpy(rumah[j].location, rumah[j-1].location);
    strcpy(rumah[j-1].location, temp1);

}

void sortLokasi(char sorting[]){
    if(strcmp(sorting, "asc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(strcmp(rumah[j].location, rumah[j-1].location) < 0){
                    char temp[30] = {0};
                    strcpy(temp, rumah[j].location);
                    strcpy(rumah[j].location, rumah[j-1].location);
                    strcpy(rumah[j-1].location, temp);
                }
            }
        }
    }
    else if(strcmp(sorting, "desc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(strcmp(rumah[j].location, rumah[j-1].location) > 0){
                    char temp[30] = {0};
                    strcpy(temp, rumah[j].location);
                    strcpy(rumah[j].location, rumah[j-1].location);
                    strcpy(rumah[j-1].location, temp);
                }
            }
        }
    }
}
void sortCity(char sorting[]){
    if(strcmp(sorting, "asc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(strcmp(rumah[j].city, rumah[j-1].city) < 0){
                    char temp[30] = {0};
                    strcpy(temp, rumah[j].city);
                    strcpy(rumah[j].city, rumah[j-1].city);
                    strcpy(rumah[j-1].city, temp);
                }
            }
        }
    }
    else if(strcmp(sorting, "desc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(strcmp(rumah[j].city, rumah[j-1].city) > 0){
                    char temp[30] = {0};
                    strcpy(temp, rumah[j].city);
                    strcpy(rumah[j].city, rumah[j-1].city);
                    strcpy(rumah[j-1].city, temp);
                }
            }
        }
    }
}
void sortPrice(char sorting[]){
    if(strcmp(sorting, "asc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(rumah[j].price < rumah[j-1].price){
                    int temp = rumah[j].price;
                    rumah[j].price = rumah[j - 1].price;
                    rumah[j - 1].price = temp;
                }
            }
        }
    }
    else if(strcmp(sorting, "desc") == 0){
        for(int i = 0; i < 3939; i++){
            for(int j = 3939 - 1; j > i; j--){
                if(rumah[j].price > rumah[j-1].price){
                    int temp = rumah[j].price;
                    rumah[j].price = rumah[j - 1].price;
                    rumah[j - 1].price = temp;
                }
            }
        }
    }
}


void tampilkan(){
    for(int x = 0; x < 10; x++){
            printf("%-*s", 26, rumah[x].location);
            printf("%-*s", 20, rumah[x].city);
            printf("%-*d", 10, rumah[x].price);
            printf("%-*d", 10, rumah[x].room);
            printf("%-*d", 10, rumah[x].bathroom);
            printf("%-*d", 10, rumah[x].carpark);
            printf("%-*s", 12, rumah[x].type);
            printf("%-*s\n", 12, rumah[x].furnish);
    }
}
//======================================================
void sortBy(){
    readFile(3939);
    char kolom[20] = {0};
    char sorting[5] = {0};
    printf("Choose column: ");
    scanf("%[^\n]", kolom); getchar();

    // Pengecekan apakah kolom sesuai dengan data
    if(strcmp(kolom, "Location") == 0 || strcmp(kolom, "City") == 0
    || strcmp(kolom, "Price") == 0 || strcmp(kolom, "Rooms") == 0
    || strcmp(kolom, "Bathroom") == 0 || strcmp(kolom, "Carpark") == 0
    || strcmp(kolom, "Type") == 0 || strcmp(kolom, "Furnish") == 0){

        printf("Sort ascending or descending? (asc / desc): ");
        scanf("%s", sorting);
    }
    else{
        printf("Data not found!\n");
        return;
    }
    // Pemanggilan function berdasarkan kolom yang diinginkan
    if(strcmp(kolom, "Location") == 0){
        sortLokasi(sorting);
        Header();
        tampilkan();
    }
    else if(strcmp(kolom, "City") == 0){
        sortCity(sorting);
        Header();
        tampilkan();
    }
    else if(strcmp(kolom, "Price") == 0){
        sortPrice(sorting);
        Header();
        tampilkan();
    }
    // else if(strcmp(kolom, "Rooms") == 0){
    //     sortRoom(sorting);
    // }
    // else if(strcmp(kolom, "Bathroom") == 0){
    //     sortBath(sorting);
    // }
    // else if(strcmp(kolom, "Carpark") == 0){
    //     sortCar(sorting);
    // }
    // else if(strcmp(kolom, "Type") == 0){
    //     sortType(sorting);
    // }
    // else if(strcmp(kolom, "Furnish") == 0){
    //     sortFurnish(sorting);
    // }

}

// INT MAIN
//======================================================
int main(){
    int choice = 0;
    do{
        // Tampilan menu utama yang akan looping sampai EXIT
        printf("\nWhat do you want to do?\n");
        printf("1. Display Data\n");
        printf("2. Search Data\n");
        printf("3. Sort Data\n");
        printf("4. Export Data\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice); getchar();
        // Memanggil function sesuai yang diminta
        switch(choice){
            case 1:{
                display();
                break;
            }
            case 2:{
                selectRow();
                break;
            }
            case 3:{
                sortBy();
            }
        }

    }while(choice != 5);

    return 0;
}