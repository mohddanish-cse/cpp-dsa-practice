#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count =n;
    int j= n-1;
    for(int i=1;i<=n;i++)
    {
        string space(j--,' ');
        cout<<space;
      for(int j=1;j<=i;j++) {
            cout<<j;
          }
        for(int k=2;k<=i;k++) {
            cout<<(i-k)+1;
           }
        cout<<endl;
    }
    return 0;
}

// Sample Output
//     1
//    121
//   12321
//  1234321
// 123454321