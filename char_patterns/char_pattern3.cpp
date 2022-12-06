#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count=0;
  for(int i=0;i<n;i++) {
    for (int j =0;j<n;j++) {
      cout<<char(count++ +65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

//Output
// A B C 
// D E F 
// G H I 