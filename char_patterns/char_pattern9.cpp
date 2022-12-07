#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count =0;
  for(int i=1;i<=n;i++) {
    for (int j=1;j<=n;j++) {
      cout<<char(i+j+'A'-2)<<" ";
      count++;
    }
    cout<<endl;
  }
  return 0;
}

//Output
// A B C 
// B C D 
// C D E 