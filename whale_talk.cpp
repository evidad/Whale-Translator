#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string original = "turpentine and turtles";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (int i = 0; i < original.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (original[i] == vowels[j] && original[i] == 'e') {
        result.push_back(original[i]);
        result.push_back(original[i]);
      } else if (original[i] == vowels[j] && original[i] == 'u') {
        result.push_back(original[i]);
        result.push_back(original[i]);
      } else if (original[i] == vowels[j]) {
        result.push_back(original[i]);
      }
    }
  }

  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }
}