#include <iostream>
#include <vector>

void printer(const std::vector<int> &stack) {
  std::cout << "Elements: " << std::endl;
  for (auto element : stack) {
    std::cout << element << " ";
  }
  std::cout << std::endl;
}

void peek(const std::vector<int> &stack) {
  int top = stack.back();
  std::cout << "Top of stack: " << top << std::endl;
}

int main() {

  // Create a stack using the standard vector.
  std::vector<int> stack{};
  // Stack element ordering
  // Bottom -> Top
  //[0][1][2][3][4][5*]
  // A stack pointer (*) points to the top element in the
  // stack allowing us to `peek` at the top of the stack
  // in O(1) time.

  // Push to stack
  stack.push_back(1);
  stack.push_back(2);
  stack.push_back(3);
  stack.push_back(4);
  stack.push_back(5);

  std::cout << "Before pop" << std::endl;
  printer(stack);
  peek(stack);

  // Pop from stack
  stack.pop_back();

  std::cout << "After pop" << std::endl;

  // Peek at stack
  peek(stack);

  std::cout << "After peek" << std::endl;
  printer(stack);

  return 0;
}