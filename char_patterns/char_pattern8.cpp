#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    for (int j=i;j>=1;j--) {
      cout<<char(n -j +65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}

//Output
// D 
// C D 
// B C D 
// A B C D 