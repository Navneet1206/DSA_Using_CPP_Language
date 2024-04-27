#include <iostream>

// Function overloading demonstration
void display(int num) {
    std::cout << "Displaying integer: " << num << std::endl;
}

void display(double num) {
    std::cout << "Displaying double: " << num << std::endl;
}

int main() {
    // Function overloading in action
    display(10);
    display(3.14);
    
    return 0;
}

// Conclusion about function overloading
// Function overloading is a powerful concept in C++ that enhances code flexibility, readability,
// and maintainability. By allowing multiple definitions of a function with different parameters,
// developers can create more intuitive and user-friendly APIs, ultimately improving the overall
// quality and productivity of their codebase.
