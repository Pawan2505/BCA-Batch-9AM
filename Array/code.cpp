// #include<iostream>
// using namespace std;

// int main(){

//     // declared array

//     // syntax -> datatype(return_type) array_name[size];

//     int arr[6];

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;
//     arr[5] = 60;

//     cout << "0 index :" << arr[0] << endl;
//     cout << "1 index :" << arr[1] << endl;
//     cout << "2 index :" << arr[2] << endl;
//     cout << "3 index :" << arr[3] << endl;
//     cout << "4 index :" << arr[4] << endl;
//     cout << "5 index :" << arr[5] << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // declared array

//     // syntax -> datatype(return_type) array_name[size];
//     int n = 6;
//     int arr[n];

//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;
//     arr[5] = 60;

//     for (int i = 0; i < n; i++){
//         cout << i << " index : " << arr[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // declared array

//     // syntax -> datatype(return_type) array_name[size];
//     int n = 6;
//     int arr[n] = {12,34,56,78,99,3};

//     for (int i = 0; i < n; i++)
//     {
//         cout << i << " index : " << arr[i] << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{

    int n = 6;
    int arr[n];

    // user input -> array k andar element insert
    for (int i = 0; i < n; i++)
    {
        cout << "Element insert at " << i <<" index :";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " index : " << arr[i] << endl;
    }
}