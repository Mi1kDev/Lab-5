#include <iostream>
#include <vector>

bool isPrime(int a);

bool isPrime(int a){
  bool p = true;
  if(a >= 2){
    for(int i = 2; i < a; i++){
      // std::cout << i <<" " << a << "\n";
      if(a % i == 0){
        p = false;
        break;
      }
      if(i == a - 1){
        p = true;
      }
    }
  }else{
    p = false;
  }
  return p;
}

int main(){
  std::cout << "Enter an integer: ";
  std::vector<int> primes;
  int num;
  std::cin >> num;
  for(int i = 0; i < num; i++){
    if(isPrime(i + 1)){
      primes.push_back(i + 1);
    }
  }

  for(int i = 0; i < primes.size(); i++){
    std::cout << primes[i] << " ";
  }
}
