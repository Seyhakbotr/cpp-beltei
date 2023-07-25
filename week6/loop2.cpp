#include <iostream>


using namespace std;

int main()
{
    int i = 1;
    // int input;
    // std::cout << "Enter input = ";
    // std::cin >> input;
    // for (i;i <= 10;i++){
    // std::cout << input << " * " << i << " = " << input * i << "\n";
    // }
      int input;
    std::cout << "Enter input = ";
    std::cin >> input;
    do {
       
        std::cout << input << " * " << i << " = " << input * i << "\n";
         i++;
    }while(i <= 10);

    return 0;

}