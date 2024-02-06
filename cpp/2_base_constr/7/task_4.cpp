#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

  vector<string> vector_of_word;
  string word;
  while (getline(cin, word)) {
    vector_of_word.push_back(word);
  }
  sort(vector_of_word.rbegin(), vector_of_word.rend());

  for (const string &i : vector_of_word) {
    cout << i << endl;
  }
  return 0;
}