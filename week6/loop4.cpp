#include <iostream>
using namespace std;


int main()
{
    int i = 1;
    int j = 1;
    cout << "Input the number of characters for a side: 4  ";
    int input {};
    cin >> input;
    for (i = 1;i<=input;++i)
    {
        for (j = 1;j <= input;++j){
            std::cout << "A";
        }

        cout << "\n";
    }
}