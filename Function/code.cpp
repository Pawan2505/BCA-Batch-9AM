// // Type 1 : Take nothing return nothing

// #include<iostream>
// using namespace std;

// // function definition
// int addition(){
//     int x = 10;
//     int y = 20;

//     cout << "Addition of both number : " << x + y << endl;
// }


// int main(){
//     // function call
//     addition();
// }

// // Type 2 : Take something and return nothing

// #include <iostream>
// using namespace std;

// // function definition
// int addition(int x, int y)
// {
//     cout << "Addition of both number : " << x + y << endl;
// }

// int main()
// {
//     // function call
//     addition(10,20); // 10,20 -> argument
// }

// // Type 3 : Take something and return something

// #include <iostream>
// using namespace std;

// // function definition
// int addition(int x, int y)  // int x, int y -> parameter
// {
//     return x + y;
// }

// int main()
// {
//     // function call
//   int sum =  addition(10, 20); // 10,20 -> argument

//   cout << "Sum : " << sum << endl;
// }

// Type 4 : Take Nothing and return something

// #include <iostream>
// using namespace std;

// // function definition
// int addition()
// {
//     int x = 60;
//     int y = 20;
//     return x + y;
// }

// int main()
// {
//     // function call
//     int sum = addition(); 

//     cout << "Sum : " << sum << endl;
// }