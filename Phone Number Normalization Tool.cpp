// Phone Number Normalization Tool

/// @brief This program takes a candidate phone number as input and
///        normalizes it to the format “999-999-9999”.

#include <iostream>
#include <string>
#include <cctype>

// Custom namespace
namespace cs135 {
    // Function to check if a phone number is valid
    bool isValid(const std::string& phone);

    // Function to normalize a phone number
    std::string normalize(const std::string& phone);
}

// Implementation of isValid function
bool cs135::isValid(const std::string& phone) {

    // Variable to count the number of digits in the phone number
    int digitCount = 0;
    for (std::string::size_type i = 0; i < phone.size(); ++i) {

    // Checks if the character is a digit(non-zero value indicates a digit)
        if (std::isdigit(phone.at(i)) != 0) {
            digitCount++;
        }
    }

    // Checks if the number of digits is exactly 10
    return static_cast<bool>(digitCount == 10);
}

// Implementation of normalize function
std::string cs135::normalize(const std::string& phone) {
    std::string normalized;     // Variable to store the normalized phone number
    int digitCount = 0;   // Vaiable to count the number of digits in the number
    for (std::string::size_type i = 0; i < phone.size(); ++i) {

        // Check if the chracter is a digit(non-zero value indicates a digit )
        if (std::isdigit(phone.at(i)) != 0) {
            normalized += phone.at(i);
            digitCount++;

        // Append hyphen after every 3rd and 6th digit
            if (digitCount == 3 || digitCount == 6) {
                // Append hypen to the normalized string
                normalized += '-';
            }
        }
    }
    return normalized;
}

int main() {
    std::string phoneNumber;        // Varaible to store the user-input number
    // asks the user to enter a candidate phone number
    std::cout << "Enter a candidate phone number: ";
    std::cin >> phoneNumber;

    // Check if the phone number is valid
    if (!cs135::isValid(phoneNumber)) {
        std::cout << "Invalid phone number.\n" << std::endl;
    } else {

        // Normalize the phone number
        const std::string NORMALIZEDNUMBER = cs135::normalize(phoneNumber);

        // Print the normalized phone number
        std::cout << "Normalized phone number: " << NORMALIZEDNUMBER
        << std::endl << std::endl;
    }

    return 0;
}

