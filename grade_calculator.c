#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d",&a);
    if(a < 0 || a > 100) {
        printf("Invalid Marks Entered. Please enter marks between 0 and 100.\n");
        return 0; // Exit the program with an error code
    }
    scanf("%d", &b);
    if(b < 0 || b > 100) {
        printf("Invalid Marks Entered. Please enter marks between 0 and 100.\n");
        return 0; // Exit the program with an error code
    }
    scanf("%d", &c);
    if(c < 0 || c > 100) {
        printf("Invalid Marks Entered. Please enter marks between 0 and 100.\n");
        return 0; // Exit the program with an error code
    }
    scanf("%d", &d);
    if(d < 0 || d > 100) {
        printf("Invalid Marks Entered. Please enter marks between 0 and 100.\n");
        
        return 0; // Exit the program with an error code
    }
    scanf("%d", &e);
    if(e < 0 || e > 100) {
        printf("Invalid Marks Entered. Please enter marks between 0 and 100.\n");
        return 0; // Exit the program with an error code
    }
    int total = a + b + c + d + e;
    float average = total / 5.0;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average); 
    if (average >= 90) {
       printf("Grade: A\n");           
   } else if (average >= 80) {         
         printf("Grade: B\n");      

   } else if (average >= 70) {
         printf("Grade: C\n");      
   } else if (average >= 60) {
         printf("Grade: D\n");      
   }                 else if (average >= 50) {
         printf("Grade: E\n");      
   } else {
         printf("Grade: F\n");      
   }  


    if (average >= 90) {
       printf("Grade: A\n");           
   } else if (average >= 80) {         
         printf("Grade: B\n");      

   } else if (average >= 70) {
         printf("Grade: C\n");      
   } else if (average >= 60) {
         printf("Grade: D\n");      
   }                 else if (average >= 50) {
         printf("Grade: E\n");      
   } else {
         printf("Grade: F\n");      
   }  


    return 0;  
}
