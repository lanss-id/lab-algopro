#include <stdio.h>

typedef struct {
    char name[100];
    int number;
    char city[100];
    char province[100];
} Address;

typedef struct {
    char date[100];
    char month[100];
    int year;
} DateOfBirth;

typedef struct {
    int number;
    char name[100];
    Address address;
    DateOfBirth dob;
} Student;

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("\nSiswa ke [%d]\n", i + 1);

        // Input nomor siswa
        printf("Isi nomor siswa: \n");
        scanf("%d", &students[i].number);

        // Input nama siswa
        printf("Isi nama siswa: \n");
        scanf("%s", students[i].name);

        // Input alamat
        printf("Isi alamat siswa dengan format: namaJalan nomor kota provinsi \n");
        scanf("%s %d %s %s", students[i].address.name, &students[i].address.number, students[i].address.city, students[i].address.province);

        // Input tanggal lahir
        printf("Isi tanggal lahir: tanggal bulan tahun \n");
        scanf("%s %s %d", students[i].dob.date, students[i].dob.month, &students[i].dob.year);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Student Number: %d\n", students[i].number);
        printf("Nama: %s\n", students[i].name);
        printf("Alamat: %s, %d, %s, %s\n",
               students[i].address.name,
               students[i].address.number,
               students[i].address.city,
               students[i].address.province);
        printf("Tanggal Lahir: %s / %s / %d\n",
               students[i].dob.date,
               students[i].dob.month,
               students[i].dob.year);
    }

    return 0;
}
