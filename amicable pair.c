#include <stdio.h>

int sumFactors(int num) {
    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

int isAmicablePair(int num1, int num2) {
    int sum1 = sumFactors(num1);
    int sum2 = sumFactors(num2);
    return (sum1 == num2 && sum2 == num1);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (isAmicablePair(num1, num2)) {
        printf("Amicable Pair\n");
    } else {
        printf("Not a Amicable Pair\n");
    }

    return 0;
}