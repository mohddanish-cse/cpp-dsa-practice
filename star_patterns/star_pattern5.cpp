#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 int j=n;
 for(int i=0;i<n;i++) {
  string space(i, ' ');
  cout << space;
  string star(j--,'x');
  cout << star<<endl;
 }
 return 0;
}

// Sample Output
// xxxxx
//  xxxx
//   xxx
//    xx
//     x