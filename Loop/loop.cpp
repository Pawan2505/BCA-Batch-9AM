// #include <iostream>
// using namespace std;

// int main()
// {
//     // cout << "1" << endl;
//     // cout << "2" << endl;
//     // cout << "3" << endl;
//     // cout << "4" << endl;
//     // cout << "5" << endl;
//     // cout << "6" << endl;
//     // cout << "7" << endl;
//     // cout << "8" << endl;
//     // cout << "9" << endl;
//     // cout << "10" << endl;

//     // for (int num = 1; num <= 100; num++){
//     //     cout << num <<" ";
//     // }

//     // Loop -> repeat

//     // Type of loop : 
//     // 1. for loop -> range
//     // 2. while loop -> when you have not idea about range ->only have idea about condition
//     // 3. do-while loop -> do-while loop same as while loop only diffrence is -> in do-while loop first iteration loop -> condition will not check
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int num = 10; num >= 1; num--){
//         cout << num << endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     // 1 to 10

//     int num = 1;

//     while(num<=10){
//         cout << num << " ";
//         num++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // 10 to 1

//     int num = 10;

//     while (num >= 1)
//     {
//         cout << num << " ";
//         num--;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // 10 to 1

//     int num = -10;

    
//     do{
//         cout << num << " ";
//         num--;
//     }while (num >= 1);
// }


#include<iostream>
using namespace std;

int main(){

    for (int row = 1; row <= 4; row++){
        for (int column = 1; column <= 4; column++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}