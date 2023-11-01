// Samantha Ferradas
// sferradas@csu.fullerton.edu
// @sferradas
// Partners: @Ddurky

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum{0};
  int index = 0;
  for (std::string range : arguments) {
    if (index == 0) {
      index = 1;
      continue;
    }
    sum += std::stod(range);
  }

  double average = sum / (static_cast<int>(arguments.size()) - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
