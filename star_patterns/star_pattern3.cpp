#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) {
    int space = n-i;
    while(space--) {
        cout<<" ";
    }
    // for(int space=n-i;space>0;space--) {
    //   cout<<" ";
    // }
    for (int j=1;j<=i;j++) {
      cout<<'*'<<" ";
    }
    cout<<endl;
  }
  return 0;
}