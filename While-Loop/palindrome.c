#include <stdio.h>

int main() {
    int n, original, rev, digit;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    // ----- Using for loop -----
    rev = 0;
    for (int temp = n; temp > 0; temp /= 10) {
        digit = temp % 10;
        rev = rev * 10 + digit;
    }
    if (rev == original)
        printf("For Loop: %d is a Palindrome\n", original);
    else
        printf("For Loop: %d is Not a Palindrome\n", original);