# Phone-Number-Normalization-Tool

This C++ program takes a user-provided phone number and normalizes it to the "999-999-9999" format. It defines a custom namespace `cs135`, containing functions `isValid` to validate a phone number and `normalize` to format it. 

The `isValid` function checks if the input consists of exactly 10 digits. The `normalize` function extracts digits from the information and inserts hyphens at positions 3 and 6. The main function prompts the user for a phone number, validates it using `isValid`, and if valid, normalizes and displays the formatted number. If the input is invalid, an error message is shown.
