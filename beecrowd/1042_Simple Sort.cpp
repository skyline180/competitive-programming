#include <iostream>
#include <algorithm>

int main() {
    // Step 1: Read three integer values
    int a, b, c;
    std::cin >> a >> b >> c;

    // Step 2: Create an array and sort it
    int array[] = {a, b, c};
    std::sort(std::begin(array), std::end(array));

    // Step 4: Print the sorted values
    std::cout << array[0] << " " << array[1] << " " << array[2] << std::endl;

    // Step 5: Print a blank line
    std::cout << std::endl;

    // Step 6: Print the values in the sequence they were read
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
