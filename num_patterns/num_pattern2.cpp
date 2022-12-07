#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    for (int j =1;j<=n;j++) {
      cout<<n-j+1<<" ";
    }
    // for (int j =n;j>=1;j--) {
    //   cout<<j<<" ";
    // }
    cout<<endl;
  }
  return 0;
}

// Sample Output
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 