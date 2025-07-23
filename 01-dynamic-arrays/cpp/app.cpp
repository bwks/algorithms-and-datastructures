#include <iostream>
#include <vector>

int main() {

  // Create a dynamic array with a vector
  std::vector<int> dynamic_array{1, 2, 3, 4, 5};

  for (auto element : dynamic_array) {
    std::cout << "Hello: " << element << std::endl;
  }
}