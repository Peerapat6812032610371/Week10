#include <stdio.h>

int main() {

    int num_students = 10;

    int scores[10] = {7, 1, 9, 8, 12, 9, 15, 4, 6, 2};

    int sum = 0;

    printf("Enter number of students: %d\n", num_students);

    printf("Enter %d student scores (one per line):\n", num_students);


    for (int i = 0; i < num_students; i++) {

        printf("Score %d : %d\n", i + 1, scores[i]);

        sum += scores[i];

    }

    float average = (float)sum / num_students;

    printf("\nNumber of students = %d\n", num_students);

    printf("Average score = %.2f\n", average);

    return 0;

}
