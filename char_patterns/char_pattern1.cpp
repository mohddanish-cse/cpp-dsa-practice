#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++) {
    for (int j =1;j<=n;j++) {
      cout<<char(i+65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

// Sample Output
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 