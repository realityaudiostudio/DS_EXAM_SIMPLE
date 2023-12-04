#include <stdio.h>

#define MAX_DEGREE 100

// Function to add two polynomials
void addPolynomials(int poly1[], int degree1, int poly2[], int degree2, int result[]) {
    int i;

    // Initialize result polynomial with zeros
    for (i = 0; i < MAX_DEGREE; i++) {
        result[i] = 0;
    }

    // Add coefficients of the first polynomial
    for (i = 0; i <= degree1; i++) {
        result[i] += poly1[i];
    }

    // Add coefficients of the second polynomial
    for (i = 0; i <= degree2; i++) {
        result[i] += poly2[i];
    }
}

// Function to display a polynomial
void displayPolynomial(int poly[], int degree) {
    int i;

    for (i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != degree) {
                printf(" + ");
            }
            printf("%dx^%d", poly[i], i);
        }
    }
    printf("\n");
}

int main() {
    int poly1[MAX_DEGREE + 1], poly2[MAX_DEGREE + 1], result[MAX_DEGREE + 1];
    int degree1, degree2;

    // Input the degrees of the two polynomials
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &degree1);
    printf("Enter the coefficients of the first polynomial:\n");
    for (int i = degree1; i >= 0; i--) {
        scanf("%d", &poly1[i]);
    }

    printf("\nEnter the degree of the second polynomial: ");
    scanf("%d", &degree2);
    printf("Enter the coefficients of the second polynomial:\n");
    for (int i = degree2; i >= 0; i--) {
        scanf("%d", &poly2[i]);
    }

    // Add the two polynomials
    addPolynomials(poly1, degree1, poly2, degree2, result);

    // Display the result
    printf("\nResultant Polynomial after addition: ");
    displayPolynomial(result, (degree1 > degree2) ? degree1 : degree2);

    return 0;
}
