#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

std::vector<int> split(std::string text, char delim)
{
  std::string line;
  std::vector<int> vec;
  vec.reserve(text.size());

  std::istringstream ss(text);
  while (std::getline(ss, line, delim))
    {
      vec.push_back(stoi(line));
    }
  return vec;
}

int main()
{
  string line = "2 3 4 5 15";

  auto vecsStr = split(line, ' '); //convert string to vector of int
    
    auto lastElem = vecsStr.back();

    for (int i = 1; i <= lastElem; i++)
    {
        if ((i%vecsStr[0] == 0) && (i%vecsStr[1] == 0)) {
            cout << "FB" << " ";
        } else if ((i%vecsStr[1] == 0)) {
            cout << 'B' << " ";
        } else if ((i%vecsStr[0] == 0)) {
            cout << 'F' << " ";
        } else {
            cout << i << " ";
        }
    }
    cout << endl;
}

