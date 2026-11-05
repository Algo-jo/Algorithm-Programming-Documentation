#include <stdio.h>
#include <string.h>

int main(){
    char merk[25];
    int year = 0;
    long long int price;
    int mainProgram = -1;

    // Tampilan utama
    printf("Blue's Car Company\n");
    printf("Welcome to Blue's Car Company Simulator!\n");
    printf("Today's date is October 31th 2016\n\n");

    printf("Please input your car type [2 - 20]: ");
    scanf("%[^\n]", &merk); getchar();

    int merkLength = strlen(merk);
    // Pengecekan apakah merk valid
    if(merkLength >= 2 && merkLength <= 20){
        printf("Please input the purchasing year of your car [2000 - 2014]: ");
        scanf("%d", &year);
        
        // Pengecekan tahun
        if(year >= 2000 && year <= 2014){
            printf("Please input the price of your car when purchased in %d\n", year);
            printf("(The price must be between Rp100.000.000 - Rp300.000.000): ");
            scanf("%lld", &price);

            // Pengecekan harga
            if(price >= 100000000 && price <= 300000000){
                // Jika semua valid maka MAIN dapat dijalankan
                mainProgram = 1;
            }
            else printf("The price that you input is not valid\n");
        }
        else printf("The input of your car's year must be between 2000 and 2014\n");
    }
    else printf("The input of your car's type must be between 2 and 20 characters\n");

    // MAIN
    int yearAwal = year;
    if(mainProgram == 1){
        printf("\nThese are the info of your %s car when purchased in %d with Rp%d price\n", merk, year, price);
        int count = 2016 - year;
        int reduction = 10;
        for(int i = 1; i <= count; i++){
            price = price - (price * reduction / 100);
            year++; 
            printf("In %d, your car price is Rp%d, because of the %d%% price reduction\n", year, price, reduction);
            if(reduction > 4){ 
                reduction = reduction - 2;
            }
        }
        printf("\n");
        // Kalimat terakhir
        if(yearAwal <= 2010) printf("Before selling, your car needs maintenance\n");
        else if(yearAwal >= 2011) printf("Your car condition is okay\n");
        printf("Thank You :)\n");
    }

    return 0;
}