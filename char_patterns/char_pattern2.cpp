#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++) {
    for (int j =0;j<n;j++) {
      cout<<char(j+65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

// Sample Output
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 