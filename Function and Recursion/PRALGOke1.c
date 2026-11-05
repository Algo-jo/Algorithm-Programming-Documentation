#include <stdio.h>
#include <string.h>

int main(){
    int choice = 0;

    // Variabel untuk choice 1
    char destinasi[20] = {0};
    int BAN = -1, BAL = -1, MED = -1, KL = -1, SG = -1, BGK = -1;
    int validBAN = 1, validBAL = -1, validMED = -1, validKL = 1, validSG = -1, validBGK = -1;

    // Variabel untuk choice 2
    int count = 0;
    char name[20][100] = {0};
    char PasDestination[20][20] = {0};
    char Pass[20][10] = {0};
    int XBAN = -1, XBAL = -1, XMED = -1, XKL = -1, XSG = -1, XBGK = -1;

    // Variabel untuk choice 3
    char PasDestination1[20][20] = {0};
    char PasDestination2[20][20] = {0};

    while (choice != 4){
        // TAMPILAN UTAMA
        printf("Our Scheduled Flight\n");
        printf("Domestic Flight\n");
        printf("=====================================\n");
        printf("From: Jakarta     To: Bandung\n");
        if(validBAL == 1) printf("From: Jakarta     To: Bali\n");
        if(validMED == 1) printf("From: Jakarta     To: Medan\n");

        printf("\nInternational Flight\n");
        printf("=====================================\n");
        printf("From: Jakarta     To: Kuala Lumpur\n");
        if(validSG == 1) printf("From: Jakarta     To: Singapore\n");
        if(validBGK == 1) printf("From: Jakarta     To: Bangkok\n");

        printf("\n");

    // MENU
    printf("Menu:\n");
    printf("=====================================\n");
    printf("1. Create New Flight\n");
    printf("2. Manage Booking\n");
    printf("3. See passenger\n");
    printf("4. Exit\n\n");

    printf("Choice: ");
    scanf("%d", &choice); getchar();

    // Opsi
    switch (choice){
        // CASE 1 untuk menambah jadwal ke tampilan utama
        case 1:
            printf("Create New Flight\n");
            printf("=====================================\n");
            printf("City Destination [Bandung / Bali / Medan / Kuala Lumpur / Singapore / Bangkok]: ");
            scanf("%[^\n]", destinasi);

            // Mengecek apakah destinasi yang diinput sesuai dengan opsi
            BAN = strcmp("Bandung", destinasi);
            BAL = strcmp("Bali", destinasi);
            MED = strcmp("Medan", destinasi);
            KL = strcmp("Kuala Lumpur", destinasi);
            SG = strcmp("Singapore", destinasi);
            BGK = strcmp("Bangkok", destinasi);

            if(BAN != 0 && BAL != 0 && MED != 0 && KL != 0 && SG != 0 && BGK != 0){
                printf("Invalid Destination\n\n");
                break;
            }
            
            // Pengecekan ulang jika user menginput destinasi yang sama
            if (BAN == 0) {
                printf("They are already flight from Jakarta to Bandung\n\n");
                break;
            }
            if (validBAL == 1 && BAL == 0) {
                printf("They are already flight from Jakarta to Bali\n\n");
                break;
            }
            if (validMED == 1 && MED == 0) {
                printf("They are already flight from Jakarta to Medan\n\n");
                break;
            }
            if (KL == 0) {
                printf("They are already flight from Jakarta to Kuala Lumpur\n\n");
                break;
            }
            if (validSG == 1 && SG == 0) {
                printf("They are already flight from Jakarta to Singapore\n\n");
                break;
            }
            if (validBGK == 1 && BGK == 0) {
                printf("They are already flight from Jakarta to Bangkok\n\n");
                break;
            }

            // Value jika sudah memilih destinasi
            if(BAL == 0) validBAL = 1; if(MED == 0) validMED = 1;
            if(SG == 0) validSG = 1; if(BGK == 0) validBGK = 1;

            if(validBAL == 1 || validMED == 1 || validKL == 1 || validSG == 1 || validBGK == 1){
                printf("Succesfully added flight\n\n");
            }
            break;
        
        // CASE 2 untuk menambah identitas + penerbangan
        case 2:
            printf("Passenger name [3 - 20]: ");
            scanf("%[^\n]", &name[count]); getchar();
            int NamLength = strlen(name[count]);

            if(NamLength >= 3 && NamLength <= 20){
            printf("City Destination [Bandung / Bali / Medan / Kuala Lumpur / Singapore / Bangkok]: ");
            scanf("%[^\n]", &PasDestination[count]); getchar();

            // Pengecekan destinasi dengan opsi yang ada
            XBAN = strcmp("Bandung", PasDestination[count]);
            XBAL = strcmp("Bali", PasDestination[count]);
            XMED = strcmp("Medan", PasDestination[count]);
            XKL = strcmp("Kuala Lumpur", PasDestination[count]);
            XSG = strcmp("Singapore", PasDestination[count]);
            XBGK = strcmp("Bangkok", PasDestination[count]);

            if(XBAN != 0 && XBAL != 0 && XMED != 0 && XKL != 0 && XSG != 0 && XBGK != 0){
                printf("Invalid Destination\n");
                break;
            }
            // COPY Tempat destinasi ke array
            if(XBAN == 0){
                strcpy(PasDestination1[count], "Bandung"); 
            }
            if(XBAL == 0){
                strcpy(PasDestination1[count], "Bali");
            }
            if(XMED == 0){
                strcpy(PasDestination1[count], "Medan");
            }
            if(XKL == 0){
                strcpy(PasDestination2[count], "Kuala Lumpur");
            }
            if(XSG == 0){
                strcpy(PasDestination2[count], "Singapore");
            }
            if(XBGK == 0){
                strcpy(PasDestination2[count], "Bangkok");
            }
            // Masukkan passport jika user ke luar negeri
            if(XSG == 0 || XKL == 0 || XBGK == 0){
                printf("Passport Number [6]: ");
                scanf("%s", &Pass[count]); getchar();
                }
            // Count ditambah untuk inputan array selanjutnya
            count++;
            printf("\n\n");
            break;
            }

        // CASE 3 untuk melihat identitas + penerbangan
        case 3:
            printf("Our Passenger\n");
            printf("Domestic Flight\n");
            printf("=====================================\n");
            for(int i = 0; i < count; i++){
                // Jika tempat destinasi1 sesuai dengan array
                if(strcmp(PasDestination1[i], "Bandung") == 0 ||
                strcmp(PasDestination1[i], "Bali") == 0 ||
                strcmp(PasDestination1[i], "Medan") == 0){

                    printf("Name: %s\n", name[i]);
                    printf("From: Jakarta\n");
                    printf("To:   %s\n\n", PasDestination1[i]);
                }
            }
            printf("\nInternational Flight\n");
            printf("=====================================\n");
            for(int i = 0; i < count; i++){
                // Jika tempat destinasi2 sesuai dengan array
                if(strcmp(PasDestination2[i], "Kuala Lumpur") == 0 ||
                strcmp(PasDestination2[i], "Singapore") == 0 ||
                strcmp(PasDestination2[i], "Bangkok") == 0){

                printf("Name: %s\n", name[i]);
                printf("From: Jakarta\n");
                printf("To:   %s\n", PasDestination2[i]);
                printf("Pass: %s\n\n", Pass[i]);
                }
            }
            printf("\n");
            break;

        case 4:
            // Break switch case
            break;
        }  
    }
    printf("Thank you for visiting!\n");
    return 0;
}