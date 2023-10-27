#include <iostream>

int main(){
  int num[10];
  time_t now = time(nullptr);
  srand((int)now);
  int a = 0;
  int b = 101;
  for(int i = 0; i < 10; i++){
    int rng = (int)(rand() % 100 + 1);
    num[i] = rng;
    if(rng > a){
      a = rng;
    }

    if(rng < b){
      b = rng;
    }
  }
  for(int i = 0; i < sizeof(num)/sizeof(int); i++){
    std::cout << num[i] <<" ";
  }
  std::cout << std::endl << "MIN: " << b << std::endl;
  std::cout << "MAX: " << a;
}
