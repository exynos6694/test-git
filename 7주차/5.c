#include <stdio.h>

int main() {
    char classes[] = {'A', 'B', 'C', 'D'};
    int num_classes = sizeof(classes) / sizeof(classes[0]);

    for (int i = 0; i < num_classes; i++) {
        int count1, count2, count3;
        int total;
        char class_name = classes[i];
        printf("%c class? ", class_name);
        scanf("%d %d %d", &count1, &count2, &count3);


        total = count1 + count2 + count3;
        printf("%c class: %d\n\n", class_name, total);
    }
    return 0;
}