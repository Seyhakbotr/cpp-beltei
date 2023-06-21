#include <iostream>
#include <cmath>
int main()
{
    int a,b;
    std::cout << "Enter num1: ";
    std::cin >> a;
    std::cout << "Enter num2: ";
    std::cin >> b;
    // int test =std::max(a,b);
    while(a == b){
    // std::cout << test << " \n";
    if (a>b)
    {
    std::cout <<"Maximum: " << a << "\n";
    }
    if (a<b) {
     std::cout <<"Maximum: " << b << "\n";
    }
    else {
        std::cout << "no max";
    }
    }
    // if (a==b)
    // std::cout << "no max";
    return 0;
}