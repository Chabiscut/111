#include <iostream>
#include <vector>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    // Input the range
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;
    std::vector<int> primeNumbers;

    for (int num = start; num <= end; num++) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        } else {
            oddNumbers.push_back(num);
        }

        if (isPrime(num)) {
            primeNumbers.push_back(num);
        }
    }

    std::cout << "Even Numbers: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd Numbers: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Prime Numbers: ";
    for (int num : primeNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
