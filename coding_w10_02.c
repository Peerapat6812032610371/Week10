#include <stdio.h>

int main() {

    float scores[3][3] = {

        {9.5, 12.1, 15.4},   // Student 1

        {9.8, 15.2, 14.1},   // Student 2

        {5.4, 9.2, 18.5}    // Student 3

    };

    char *subjects[3] = {"Math", "Physics", "Chemistry"};

    // แสดงผลคะแนนแต่ละคน

    for (int i = 0; i < 3; i++) {

        printf("Enter scores for Student %d:\n", i + 1);

        for (int j = 0; j < 3; j++) {

            printf("%s: %.1f\n", subjects[j], scores[i][j]);

        }

        printf("\n");

    }

    // ตารางคะแนน

    printf("Score Table\n");

    printf("Student   Math   Physics   Chemistry\n");

    for (int i = 0; i < 3; i++) {

        printf("%d        %.1f    %.1f      %.1f\n", i + 1, scores[i][0], scores[i][1], scores[i][2]);

    }

    // ค่าเฉลี่ยรายวิชา

    float avg[3] = {0};

    for (int j = 0; j < 3; j++) {

        for (int i = 0; i < 3; i++) {

            avg[j] += scores[i][j];

        }

        avg[j] /= 3;

    }

    printf("\nAverage per subject:\n");

    for (int j = 0; j < 3; j++) {

        printf("%s: %.2f\n", subjects[j], avg[j]);

    }

    return 0;

}
