#include <iostream>


struct GetNum{
    int a;
    
};

GetNum getuserInput()
{
    GetNum temp;
    std::cout << "Enter Number = ";
    std::cin >> temp.a;
    return temp;
}


// GetNum calc(const GetNum& num)
// {
//     int i = 1;
//     do {
//     std::cout << i << ".Hello Beltei \n";
//         i++;
//     }while(i <= num.a );
   
// }

void print(const GetNum& output)
{
    int i = 1;
    do {
        std::cout << i << ".Hello Beltei "<< "\n";
    }while(i <= output.a);
   
}

int main()
{
    GetNum num {getuserInput()};
    print(num);




//     int i = 1;
//     int a;
//     int total;
//    int b;
//     int sum = 0;
//     std::cout << "Enter input = ";
//     std::cin >> a;
//     std::cout << "Enter input = ";
//     std::cin >> b;
//     total = a + b;
//     do {
//         std::cout << i << ".Hello Beltei \n";
//         sum = sum + i;
//         i++;
       
//     } while (i <= total);
//     std::cout << sum;
    return 0;
}


