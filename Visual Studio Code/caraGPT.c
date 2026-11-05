#include <stdio.h>
#include <string.h>

void convertTimezoneAndPrint(char *courseCode, int startHH, int startMM, int endHH, int endMM) {
    // Konversi dari GMT+8 ke GMT+7 (kurangi 1 jam)
    startHH -= 1;
    endHH -= 1;

    // Untuk course 'COMP6047', tambahkan deskripsi "Algorithm and Programming"
    if (strcmp(courseCode, "COMP6047") == 0) {
        printf("COMP6047 – Algorithm and Programming\n");
    }
    
    // Menampilkan hasil konversi
    printf("%s %02d:%02d-%02d:%02d\n", courseCode, startHH, startMM, endHH, endMM);
}

int main() {
    char courseCode[11];  // Course code maksimal 10 karakter + 1 untuk null-terminator
    int startHH, startMM, endHH, endMM;

    // Membaca 5 input baris dari standar input
    for (int i = 0; i < 5; i++) {
        // Membaca format input seperti "CoursecodeHH:MM-HH:MM"
        scanf("%10s %d:%d-%d:%d", courseCode, &startHH, &startMM, &endHH, &endMM);

        // Panggil fungsi untuk konversi waktu dan cetak output
        convertTimezoneAndPrint(courseCode, startHH, startMM, endHH, endMM);
    }

    return 0;
}
