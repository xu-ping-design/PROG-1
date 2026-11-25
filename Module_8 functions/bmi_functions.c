#include <stdio.h>

float calculateBMI(float weightKg, float heightM);
void categorizeBMI(float bmi);

int main() {
    float weight, height, bmi;
    
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = calculateBMI(weight, height);
    
    printf("\nBMI: %.2f\n", bmi);
    
    categorizeBMI(bmi);
    
    return 0;
}

float calculateBMI(float weightKg, float heightM) {
    return weightKg / (heightM * heightM);[cite: 2]
}

void categorizeBMI(float bmi) {
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Normal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
}
