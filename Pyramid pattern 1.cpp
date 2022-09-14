#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Enter a number:";
  cin>>size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (i+1);
    }
    cout << "\n";
  }
  return 0;
}