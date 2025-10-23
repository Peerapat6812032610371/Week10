#include <stdio.h>

#include <string.h>

int main() {

    char name1[50], name2[50];

    // กรณีที่ 1: ชื่อไม่เหมือนกัน

    strcpy(name1, "Tide");

    strcpy(name2, "Best");

    printf("Case 1 (Different names):\n");

    printf("Customer 1: %s (%lu characters)\n", name1, strlen(name1));

    printf("Customer 2: %s (%lu characters)\n\n", name2, strlen(name2));

    // กรณีที่ 2: ชื่อเหมือนกัน

    strcpy(name1, "Tide");

    strcpy(name2, "Tide");

    printf("Case 2 (Same names):\n");

    if (strcmp(name1, name2) == 0) {

        printf("Both of your names are the same, which is %s.\n", name1);

        printf("The length of the name is %lu characters.\n", strlen(name1));

    }

    return 0;

}
