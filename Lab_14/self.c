#include <stdio.h>

int main(void) {
    char buffer[256];
    int digits_count = 0;
    int spaces_count = 0;

    printf("Введите строку: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        
        for (int i = 0; buffer[i] != '\0'; i++) {
            
            if (buffer[i] >= '0' && buffer[i] <= '9') {
                digits_count++;
            } 
            else if (buffer[i] == ' ') {
                spaces_count++;
            }
        }
        printf("Цифр %d; пробелов %d\n", digits_count, spaces_count);
    }

    return 0;
}
