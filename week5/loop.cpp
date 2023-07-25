#include <iostream>


struct Fraction
{
    int num;
    int deno;
};
Fraction getUserInput()
{
    Fraction temp;
    std::cout << "Enter num = ";
    std::cin >> temp.num;
    std::cout << "Enter deno = ";
    std::cin >> temp.deno;
    return temp;
}

Fraction add(const Fraction& f1, const Fraction& f2)
{
    return {f1.num + f2.num, f1.deno + f2.deno};
}


void print(const Fraction& output)
{
    std::cout << "Total = " << output.num << " / " << output.deno << "\n";
}


int main()
{
    Fraction f1 {getUserInput()};
    Fraction f2 {getUserInput()};
    print(add(f1,f2));
    return 0;
}