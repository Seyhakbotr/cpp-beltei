#include <iostream>


int main()
{
   int time;
   int time_in,time_out;
   int pay;
   int tax;
 
   std::cout << "Enter time in = ";
   std::cin >> time_in;
   std::cout << "Enter time out = ";
   std::cin >> time_out;

    if (time_in < 12){
        if (time_out <= 12)
            pay = (time_out-time_in)*200;
        
        else 
            pay = (12-time_in)*200 + (time_out -12)*400;
        
    } else {
        pay = (time_out-time_in)*400;
    }
  
//     if (time_out < 12){
//         pay = (time_in-time_out)*tax;
//     }
//    }
   std::cout << "Student must pay = " << pay << "\n";

    return 0;
}

 // int tax;
    // int hour {};
    // int getTax;
    // int total;
    // float student;
    // std::cout << "Enter student hour = ";
 
    // std::cin >> hour;
    // std::cout << "Enter student pay = ";
    
    // std::cin >> student;
    // // total = hour * tax;
    // // if (hour < 12 && hour > 0){
    // //     tax = 200;
    // //     getTax = hour * tax;
        
    // //     total = student -getTax;
    // //     std::cout << "Student money = " << student << "\n";
    // // std::cout << "Student must pay " << getTax << "\n";
    // // std::cout << "Total of student money = " << total << "\n";
    // // } else if (hour > 12 && hour <= 24){
    // //     tax = 400;
    // //     getTax = hour * tax;
    // //     total = student - getTax;
    // //     std::cout << "Student money = " << student << "\n";
    // // std::cout << "Student must pay " << getTax << "\n";
    // // std::cout << "Total of student money = " << total << "\n";
    // // } else {
    // //     std::cout << "Invalid hours" << "\n";
    // // }