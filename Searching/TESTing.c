#include <stdio.h>
#include <string.h>

struct data{
char location[20];
char city[20];
int price;
int room;
int bathroom;
int carpark;
char type[20];
char furnish[20];
} rumah[4000];

void readFile_Display(int row){
    FILE *file;
    file = fopen("file.csv", "r");

    char title[256]; 
    fgets(title, sizeof(title), file);
   
    for(int i = 0; i < row; i++){
        if(fscanf(file, "%[^;]; %[^;]; %d; %d; %d; %d; %[^;]; %[^\n]\n",
        rumah[i].location, rumah[i].city, &rumah[i].price, &rumah[i].room, 
        &rumah[i].bathroom, &rumah[i].carpark, rumah[i].type, rumah[i].furnish) == 8){
            // READ FILE
        }
    }
    fclose(file);
}

void display(){
    int row = 0;
    printf("Number of rows: ");
    scanf("%d", &row);
    if(row > 3940) row = 3939;
    readFile_Display(row);

    // Header untuk tampilan display
    printf("%-18s", "Location");
    printf("%-16s", "City");
    printf("%-10s", "Price");
    printf("%-10s", "Rooms");
    printf("%-10s", "Bathroom");
    printf("%-10s", "Carpark");
    printf("%-12s", "Type");
    printf("%-12s\n", "Furnish");
    
    // Tampilkan row yang diinginkan (disertai spasi untuk tempat kosong)
    for(int i = 0; i < row; i++){
        printf("%-*s", 18, rumah[i].location);
        printf("%-*s", 16, rumah[i].city);
        printf("%-*d", 10, rumah[i].price);
        printf("%-*d", 10, rumah[i].room);
        printf("%-*d", 10, rumah[i].bathroom);
        printf("%-*d", 10, rumah[i].carpark);
        printf("%-*s", 12, rumah[i].type);
        printf("%-*s\n", 12, rumah[i].furnish);
    }
    puts("");
}

int main(){
    int choice = 0;
    do{
        // Tampilan menu utama yang akan looping sampai EXIT
        printf("What do you want to do?\n");
        printf("1. Display Data\n");
        printf("2. Search Data\n");
        printf("3. Sort Data\n");
        printf("4. Export Data\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        // Memanggil function sesuai yang diminta
        switch(choice){
            case 1:{
                display();
                break;
            }
        }

    }while(choice != 5);

    return 0;
}