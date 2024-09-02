#include <iostream>
// write code to calcute 2 numbers 
int main()
{
    int num1 = 10;
    int num2 = 5;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2;
    int remainder = num1 % num2;
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

}