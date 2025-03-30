// #include<iostream>
// using namespace std;

// int main(){

//     if(condition){
//         // if condition true -> if block code exceute
//     }else{
//         // if condition false -> else block code will excute
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Your are eligible for vote!" << endl;
    }
    else
    {
        cout << "Sorry, Your are not eligible for vote!" << endl;
    }
}