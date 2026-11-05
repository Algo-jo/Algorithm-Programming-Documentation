#include <stdio.h>
#include <string.h>

struct data{ //untuk menyimpan data
	char location[105];
	char city[105];
	int price;
	int room;
	int bathroom;
	int carPark;
	char type[55];
	char furnish[55];
}Jadwal[10000];

void countLines(int* count){ // Menghitung jumlah baris dari file file(in).csv
	FILE* filepointer;
	filepointer = fopen("file(in).csv", "r");
	
	char line[1000];
    
    while (fgets(line, sizeof(line), filepointer)) {
        *count = *count + 1;
    }
    
    fclose(filepointer);
}

void bacaFile(){ //untuk membaca file
	int i;
	int rows = 0;
	countLines(&rows);
	
	FILE* filepointer;
	filepointer = fopen("file(in).csv", "r");
	
	fscanf(filepointer, "%*[^\n]\n"); //Untuk membaca data dari baris kedua
	
	for(i = 0; i < rows; i++){ 
		//mengambil data dari file ke dalam struct
		fscanf(filepointer, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", Jadwal[i].location, Jadwal[i].city, &Jadwal[i].price, &Jadwal[i].room, &Jadwal[i].bathroom, &Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
	}
	
	fclose(filepointer);
}

void displayData(){ //Untuk pilihan no 1
	int rows;
	int maxrows = 0;
	int i;
	
	printf("Number of rows: ");
	scanf("%d", &rows); getchar();
	
	FILE* filepointer;
	filepointer = fopen("file(in).csv", "r");
	
	countLines(&maxrows); //Panggil function countLines untuk menghitung jumlah data
	maxrows--;
		
	printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	
	if(rows > maxrows){ // Untuk print semua data jika n > total data
		rows = maxrows;
	}
	
	for(i = 0; i < rows; i++){ // print data ke dalam terminal
		printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
	}
	
	fclose(filepointer);
	
	printf("\n\nPress Enter to Continue");
	getchar();
}

void selectRow(){ // untuk pilihan no 2
	
	char column[155];
	char name[155];
	int num;
	int isFound = 0, isPrinted = 0; // isFound untuk menentukan apakah data ketemu atau tidak, isprinted untuk menentukan apakah baris pertama telah terprint atau belum
	int i;
	int banyakData = 0;
	countLines(&banyakData);
	banyakData -= 1;
	
	printf("Choose column: ");
	scanf("%[^\n]", column); getchar();
	
	// Cek apakah kolom yang diminta bernilai karakter/integer
	if(strcmp(column, "Location") == 0 || strcmp(column, "City") == 0 || strcmp(column, "Type") == 0 || strcmp(column, "Furnish") == 0){ 
		printf("What data do you want to find? ");
		scanf("%[^\n]", name); getchar();
	}else if(strcmp(column, "Price") == 0 || strcmp(column, "Rooms") == 0 || strcmp(column, "Bathroom") == 0 || strcmp(column, "CarPark") == 0){
		printf("What data do you want to find? ");
		scanf("%d", &num); getchar();
	}
	
	if(strcmp(column, "Location") == 0){// jika sama dengan "Location" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if(strcmp(name, Jadwal[i].location) == 0){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	
	}
	
	else if(strcmp(column, "City") == 0){// jika sama dengan "City" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if(strcmp(name, Jadwal[i].city) == 0){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "Price") == 0){// jika sama dengan "Price" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if(Jadwal[i].price == num && (strlen(Jadwal[i].location) != 0)){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "Rooms") == 0){// jika sama dengan "Rooms" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if((Jadwal[i].room == num) && (strlen(Jadwal[i].location) != 0)){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "Bathroom") == 0){// jika sama dengan "Bathroom" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if((Jadwal[i].bathroom == num) && (strlen(Jadwal[i].location) != 0)){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "CarPark") == 0){// jika sama dengan "CarPark" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if((Jadwal[i].carPark == num) && (strlen(Jadwal[i].location) != 0)){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "Type") == 0){// jika sama dengan "Type" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if(strcmp(name, Jadwal[i].type) == 0){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	else if(strcmp(column, "Furnish") == 0){// jika sama dengan "Furnish" lakukan pengecekan
		for(i = 0; i < banyakData; i++){
			if(strcmp(name, Jadwal[i].furnish) == 0){// Pengecekan data yang dicari dengan yang ada di file
				isFound = 1;
				if(isPrinted == 0){
					printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
					isPrinted = 1;
				}
				printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
			}
		}
	}
	
	if(isFound == 0){
		printf("Data not found!\n");
	}
	
	printf("\n\nPress Enter to Continue");
	getchar();

}

void sortData(){ //untuk pilihan no 3
	char column[105];
	char command[10];
	int i,j;
	
	int jumlahBaris = 0;
	countLines(&jumlahBaris);
	jumlahBaris--;
	
	printf("Choose column [Location | Price | Rooms | Bathroom]: ");
	scanf("%[^\n]", column); getchar();
	printf("Sort ascending or descending? [asc | desc]: ");
	scanf("%[^\n]", command); getchar();
	
	// Jika user memilih kolom Location
	if(strcmp(column, "Location") == 0){ 
		if(strcmp(command, "asc") == 0){ // jika user memilih ascending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(strcmp(Jadwal[j].location, Jadwal[j-1].location) < 0){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}else if(strcmp(command, "desc") == 0){// jika user memilih descending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(strcmp(Jadwal[j].location, Jadwal[j-1].location) > 0){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
	}
	
	//Jika user memilih kolom Price
	else if(strcmp(column, "Price") == 0){ 
		if(strcmp(command, "asc") == 0){// jika user memilih ascending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].price < Jadwal[j-1].price){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
		else if(strcmp(command, "desc") == 0){// jika user memilih descending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].price > Jadwal[j-1].price){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
	}
	
	// Jika user memilih kolom Rooms
	else if(strcmp(column, "Rooms") == 0){
		if(strcmp(command, "asc") == 0){// jika user memilih ascending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].room < Jadwal[j-1].room){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
		else if(strcmp(command, "desc") == 0){// jika user memilih descending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].room > Jadwal[j-1].room){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
	}
	
	// Jika user memilih kolom Bathroom
	else if(strcmp(column, "Bathroom") == 0){
		if(strcmp(command, "asc") == 0){// jika user memilih ascending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].bathroom < Jadwal[j-1].bathroom){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
		else if(strcmp(command, "desc") == 0){// jika user memilih descending
			for(i = 0; i < jumlahBaris; i++){
				for(j = jumlahBaris-1; j > i; j--){
					if(Jadwal[j].bathroom > Jadwal[j-1].bathroom){
						struct data temp = Jadwal[j];
						Jadwal[j] = Jadwal[j-1];
						Jadwal[j-1] = temp;
					}
				}
			}
		}
	}else{ // Jika user memilih kolom yang tidak tersedia
		printf("Try again!\n");
		return; //fungsi akan berhenti
	}
	
	printf("Data found. Detail of data:\n");
	printf("%-25s %-20s %-10s %-10s %-10s %-10s %-10s %s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	
	for(i = 0; i < 5; i++){
		printf("%-25s %-20s %-10d %-10d %-10d %-10d %-10s %s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
	}
	
	printf("\n\nPress Enter to Continue");
	getchar();
}

void exportData(){
	
	char fileName[105];
	int i;
	int jumlahData = 0;
	
	//menghitung banyak data yang ada di struct
	for(i = 0; i < 10000; i++){
		if(strlen(Jadwal[i].location) != 0){
			jumlahData++;
		}else{
			break;
		}
	}
	
	printf("File name [Don't use exclusive symbols]: ");
	scanf("%[^\n]", fileName); getchar();
	
	//Meminta nama file, dan cek bila kondisi input kosong
	while(strlen(fileName) == 0){
		printf("File name should not be empty\n");
		printf("File name [Don't use exclusive symbols]: ");
		scanf("%[^\n]", fileName); getchar();
	}

	int len = strlen(fileName);
	
	//Memberikan tipe file
	fileName[len] = '.';
	fileName[len+1] = 'c';
	fileName[len+2] = 's';
	fileName[len+3] = 'v';
	fileName[len+4] = '\0'; //memberi tanda untuk ujung array
	
	FILE* filepointer;
	filepointer = fopen(fileName, "w");
	fprintf(filepointer, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
	
	for(i = 0; i < jumlahData; i++){
		fprintf(filepointer, "%s,%s,%d,%d,%d,%d,%s,%s\n", Jadwal[i].location, Jadwal[i].city, Jadwal[i].price, Jadwal[i].room, Jadwal[i].bathroom, Jadwal[i].carPark, Jadwal[i].type, Jadwal[i].furnish);
	}
	
	fclose(filepointer);
	
	printf("Data successfully written to file %s!\n", fileName);
	
	printf("\n\nPress Enter to Continue");
	getchar();
}

int main(){
	
	int command;
	
	do{
		bacaFile();
		printf("What do you want to do?\n");
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		printf("Your Choice: ");
		scanf("%d", &command); getchar();
		
		switch(command){
			case 1:
				displayData();
				break;
			case 2:
				selectRow();
				break;
			case 3:
				sortData();
				break;
			case 4:
				exportData();
				break;
		}
		
	}while(command != 5);
	
	return 0;
}
