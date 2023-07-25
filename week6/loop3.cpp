#include <iostream>

using namespace std;

int main()

{
    int i,n,j;
   i = 1;
   j = 1;
    cout << "Enter number = ";
    cin >> n;
   // Even
    cout << "Even number = ";
do {
    
    if (i % 2 == 0){
        cout << i << " ";
    }
    i++;
} while (i <= n);

cout << "\nOdd number = ";
// Odd
do {
    
    if (j % 2 != 0 )
    {
        cout << j << " ";
    }
    j++;
} while (j <= n);

   
//     for (i=1;i<=n;i++)
//     {
//         if (i % 2 == 0){
//             cout << i << " ";
//         }
//     }
//     cout << "\n";
//    cout << "Odd number = ";
//    for (j = 1;j <= n;j++)
//    {
//     if (j % 2 != 0 )
//     {
//         cout << j << " ";
//     }
//    }

   
    return 0;
}