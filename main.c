#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms;

    // Prompt user for input
    printf("Enter the first term: ");
    scanf("%d", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    // Display the series
    printf("Arithmetic Series: ");

    for (int i = 0; i < numTerms; ++i) {
        printf("%d, ", firstTerm + i * commonDifference);
    }

    printf("\n");

    return 0;
}
