#include<stdio.h>

int factorial(int whichfactorial) {
    if (whichfactorial == 1 || whichfactorial == 0) {
        return 1;
    } else {
        return whichfactorial * factorial(whichfactorial - 1);
    }
}

int main() {
    int whichfactorial, fact;
    printf("Enter the number whose factorial needs to be found: \n");
    scanf("%d", &whichfactorial);
    printf("The value of the factorial is: %d\n", factorial(whichfactorial));
    return 0;
}
