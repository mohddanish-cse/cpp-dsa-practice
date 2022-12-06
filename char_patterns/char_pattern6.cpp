#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count=0;
  for(int i=1;i<=n;i++) {
    for (int j=1;j<=i;j++) {
      cout<<char(count++ +65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

//Output
// A 
// B C 
// D E F 