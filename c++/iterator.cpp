// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5};

//     // Using an iterator to traverse the vector
//     for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
//         std::cout << *it << " "; // Dereference the iterator to access the element
//     }

//     std::cout << std::endl;

//     return 0;
// }

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using a range-based for loop to iterate over the vector
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
