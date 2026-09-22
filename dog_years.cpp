#include <iostream>

int main() {
    int dog_age = 0;
    std::cout << "Enter your dog's age (in years): ";
    std::cin >> dog_age;

    int human_years = 0;

    if (dog_age <= 2) {
        human_years = dog_age * 10.5;
    } else {
        human_years = 21 + (dog_age - 2) * 4;
    }

    std::cout << "Your dog is " << human_years << " years old in human years.\n";

    return 0;
}
