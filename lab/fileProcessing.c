#include <stdio.h>

/*

- fopen -> buka file
    r: read ->
    w : write -> membuat file baru
    a : append -> menambahkan text baru namun membutuhkan file yang ada

- fclose
- fprintf
- fscanf
*/

void write(
    char names[100][100],
    int prices[100],
    int count)
{
    FILE *pFile = fopen("menu.txt", "w");
    for (int i = 0; i < count; i++)
    {
        fprintf(pFile, "%s#%d\n", names[i], prices[i]);
    }
    fclose(pFile);
}

void read()
{
    FILE *pFile = fopen("menu.txt", "r");
    if (pFile == NULL)
    {
        printf("File not exist");
    }
    else
    {
        while (!feof(pFile))
        {
            char name[100];
            int price;
            fscanf(pFile, "%[^#]#%d\n", name, &price);
            printf("%s: %d\n", name, price);
        }
    }
}

int main()
{
    // char names[100][100] = {
    //     {"ramen"},
    //     {"sushi"},
    //     {"onigiri"}};
    // int prices[100] = {5000, 10000, 15000};
    // write(names, prices, 3);
    read();

    // FILE *pFile = fopen("test.txt", "a");
    // fprintf(pFile, "algorithm");
    // fclose(pFile);

    return 0;
}
