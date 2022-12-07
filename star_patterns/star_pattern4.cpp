#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int j=n;
  for(int i=1;i<=n;i++) {
      
    // for (int j=n;j>=i;j--) {
    //   cout<<'*';
    // }
    string star(j--,'*');
    cout<<star;

    cout<<endl;
  }
  return 0;
}

// Sample Output
// *****
// ****
// ***
// **
// *