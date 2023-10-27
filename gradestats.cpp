#include <iostream>

int main(){
  int grades[100];
  int sum = 0;
  int grade = 0;
  int i = 0;
  while(grade != -1){
    std::cout << "Enter grade or exit (-1): ";
    std::cin >> grade;
    if(grade != -1){
      grades[i] = (int)grade;
      sum += grade;
      i++;
    }
  }
  std::cout << "Average is: " << sum / i;
}
