#include <iostream>

int main()
{
    int a,b,c;
    int min,max;
    std::cout << "Input a:";
    std::cin >> a;
    std::cout << "Input b:";
    std::cin >> b;
    std::cout << "Input c:";
    std::cin >> c;
    
    if (a>b){
        if (a>c){
        max = a; 
        if (b>c)
          min = c;
        else 
            min = b;
        }
    }
    else {
        max = c;
        min = b;
    }
    if (a<b)
        if (b>c){
            max = b;
            if (a >c)
            min = c;
            else
                min = a;
        }
        std::cout << "Maximum: " << max << "\n";
        std::cout << "Minimum: " << min << "\n";
    return 0;
}