#include <array>
#include <iostream>

int main()
{
    // This creates a static array of the size 5.
    std::array<int, 5> static_array {1, 2, 3, 4, 5};

    for (auto element : static_array) {
      std::cout << "Hello: " << elements << std::endl;
    }
    return 0;
}
