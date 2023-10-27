#include <iostream>

int main(){
  std::cout << "Enter two numbers: ";
  int a, b, sum;
  sum = 0;
  std::cin >> a >> b;

  for(int i = a; i <= b; i++){
    sum += i;
  }
  std::cout << "The total is: "<<sum;
}
