#include <iostream>

int mult (int x, int y) {
  int result;
  result = 0;
  while (y != 0) {
    result = result + x;
   y = y - 1;
  }
  return(result);
}

int main () {
  int x, y;
  cout << "Enter two natural numbers: ";
  cin >> x >> y;
  cout << x << " * " << y << " = " << mult(x,y) << endl;
  return(0);
}
