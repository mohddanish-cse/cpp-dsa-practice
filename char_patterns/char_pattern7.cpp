#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    for (int j=1;j<=i;j++) {
      cout<<char(i+j +65-2)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

//Output
// A 
// B C 
// C D E 
// D E F G 