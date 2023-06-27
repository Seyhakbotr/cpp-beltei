#include <iostream>
int main()
{
    double math,computer,english,score,total,sum;
    int marks[5];
    char grade;
    double subject[] = {math,english,computer};
    std::cout << "Enter math score: ";
    std::cin >> subject[0];
    std::cout << "Enter english score: ";
    std::cin >> subject[1];
    std::cout << "Enter computer score: ";
    std::cin >> subject[2];
    
    
    for(int i=0;i<5;i++)
        {
                sum=sum+marks[i];
        }
    std::cout << "Total: " << sum;
    return 0;
}