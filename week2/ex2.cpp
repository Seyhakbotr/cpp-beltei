#include <iostream>

int main()
{
    double math,computer,english,score,total;
    char grade;
    std::cout << "Enter math score: ";
    std::cin >> math;
    std::cout << "Enter english score: ";
    std::cin >> english;
    std::cout << "Enter computer score: ";
    std::cin >> computer;
    total = math + english + computer;
    score = total / 3;
    if (score >= 90){
        grade = 'A';
    }
    if (score >= 70 && score < 90){
        grade = 'B';
    }
    if (score >= 50 && score < 70){
        grade = 'C';
    }
    if (score < 50){
        grade = 'F';
    }
    std::cout << "Total: " << total << "\n";
    std::cout << "Score: " << score << "\n";
    std::cout << "You are grade " << grade << "\n";
    return 0;

}