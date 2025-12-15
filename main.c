#include <stdio.h>

int is_prime(int n) {
    // 1 and numbers less than 1 are not prime numbers
    if (n <= 1) {
        return 0;
    }

    // 2 is the only even prime number
    if (n == 2) {
        return 1;
    }

    // Eliminate all other even numbers
    if (n % 2 == 0) {
        return 0;
    }

    // Check for odd divisors up to the square root of n
    // If n has a divisor greater than its square root, it must also have one smaller than its square root.
    // We start from 3 and increment by 2 (checking only odd numbers).
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }

    // If no divisors were found, the number is prime
    return 1;
}


void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main(){

    int num;
    scanf("%d", &num);

        int tam = 10;
    int arr[10];

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", arr[i]);
    }

    bubbleSort(arr, tam);

    return is_prime(num);
}