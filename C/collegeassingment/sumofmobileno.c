#include <stdio.h>

int main() {
    long long int mobileNumber;
    
    // Input your mobile number
    printf("Enter your mobile number: ");
    scanf("%lld", &mobileNumber);
    
    // // Calculate the sum of individual digits until a single-digit number is obtained
    // while (mobileNumber >= 10) {
        long long int sum = 0;
        
        // Calculate the sum of digits
        while (mobileNumber > 0) {
            sum += mobileNumber % 10;
            mobileNumber /= 10;
        }
        
        long long int sum2 = 0;

        while (sum>0){
            sum2 += sum % 10;
            sum /= 10;
        }

        mobileNumber = sum2; // Update the mobile number with the sum
    // }
    
    printf("The single-digit result is: %lld\n", mobileNumber);
    
    return 0;
}
