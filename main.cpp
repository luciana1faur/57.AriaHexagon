#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double ariaHex;
  double latura;
  cout << "Print the area of a hexagon: " << endl;
  
  cout << "Introduceti latura hexagonului: ";
  cin >> latura;
  ariaHex = (3 * 1.732)/2 * latura * latura;
  cout << "Aria hexagonului este: " << ariaHex << endl;
  cout << endl;
  return 0;
  
}