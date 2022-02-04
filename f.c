#include <stdio.h>

//Read File
// int main()
// {
//     FILE *file;
//     char buffer[100];
//     file = fopen("new.txt", "r");
//     fgets(buffer, 100, file);
//     printf("%s\n", buffer);
//     fclose(file);
//     return 0;
// }

// Write File
// int main(){
//     FILE *file;
//     char buffer[] = "mint";
//     file = fopen("new.txt", "w");
//     fputs(buffer,file);
//     fclose(file);
//     return 0;
// }

// Appen File
int main(){
    FILE *file;
    char buffer[] = "\nHello\nhungry";
    file = fopen("new.txt", "a");
    fputs(buffer,file);
    fclose(file);
    return 0;
}
