

#include <stdio.h>

int main() {
    int numbers[100],count = 0,input;
    while (count < 100) {
        if (scanf("%d", &input) != 1) {
            break; 
        }
        if (input == 0) {
            break;
        }
        numbers[count] = input;
        count++;
    }

    for (int i = count - 1; i >= 0; --i) {
        printf("%d%c", numbers[i], (i == 0 ? '\n' : ' '));
    }

    return 0;
}