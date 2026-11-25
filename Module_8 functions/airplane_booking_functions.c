#include <stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main() {
    char travelClass;
    float baggageWeight;
    float baseFare, excessFee;
    

    printf("Enter travel class (E for Economy, B for Business): ");
    scanf(" %c", &travelClass);
    
    printf("Enter baggage weight (in kg): ");
    scanf("%f", &baggageWeight);
    
    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);
    printTicket(travelClass, baggageWeight, baseFare, excessFee);
    
    return 0;

float calculateFare(char travelClass) {
    if (travelClass == 'B' || travelClass == 'b') {
        return 6500.00;
    } else {
    
        return 2500.00;
    }
}
float checkBaggage(char travelClass, float baggageWeight) {
    float allowance = 0.0;
    float feePerKg = 200.00;
    
    if (travelClass == 'B' || travelClass == 'b') {
        allowance = 30.0;
    } else {
        allowance = 20.0;
    }
    
    if (baggageWeight > allowance) {
        return (baggageWeight - allowance) * feePerKg;
    }
    
    return 0.0;
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float totalFare = baseFare + excessFee; 
    
    printf("\n=============================\n");
    printf("      BOARDING SUMMARY       \n");
    printf("\n");
    printf("Travel Class : %c\n", (travelClass == 'B' || travelClass == 'b') ? 'B' : 'E');
    printf("Baggage Weight: %.2f kg\n", baggageWeight);
    printf("Base Fare    : PHP %.2f\n", baseFare);
    printf("Excess Fee   : PHP %.2f\n", excessFee);
    printf("\n");
    printf("Total Fare   : PHP %.2f\n", totalFare);
    printf("\n");
}
