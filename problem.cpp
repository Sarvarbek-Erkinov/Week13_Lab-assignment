#include <iostream>

using namespace std;

//Problem 9
//
// int main() {
//
//     int a = 7, b = 14, c =21;
//     int *ptrs[3] = {&a, &b, &c};
//
//     for (int i = 0; i < 3; i++) {
//         cout << *(ptrs[i]) << " ";
//     }
//
//     return 0;
// }

//Problem 10
//
// int main() {
//
//     int arr[5] = {9,3,7,1,6};
//     int *ptr = arr;
//
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 0; j < i; j++) {
//             if (*(ptr + j) > *(ptr + j + 1)) {
//                 int temp = *(ptr + j);
//                 *(ptr + j) = *(ptr + j + 1);
//                 *(ptr + j + 1) = temp;
//             }
//         }
//     }
//
//     for (int i = 0; i < 5; i++) {
//         cout << *(ptr + i) << endl;
//     }
//
//     return 0;
// }

//Problem 11
//
// int main() {
//
//     const char * suit[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
//
//     for (int i = 0; i < 4; i++) {
//         cout << *(suit + i) << endl;
//     }
//
//     return 0;
// }

//Problem 12
//
// int main() {
//
//     const char * days[3] = {"Mon", "Tue", "Wed"};
//
//     for(int i = 0; i < 3; i++) {
//         string word = *(days + i);
//         cout << word[1] << endl;
//     }
//
//     return 0;
// }

//Problem 13
//
// int main() {
//
//     const char * suits[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
//     const char * face[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//     srand(time(NULL));
//     int suitRand = rand() % 4;
//     int faceRand = rand() % 13;
//
//     cout << face[faceRand] << " of " << suits[suitRand] << endl;
//
//     return 0;
// }

//Problem 14
//
// int main() {
//
//     const char * suits[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
//     const char * face[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//     srand(time(NULL));
//     int times;
//     cin >> times;
//     for (int i = 0; i < times; i++) {
//         int suitRand = rand() % 4;
//         int faceRand = rand() % 13;
//         cout << face[faceRand] << " of " << suits[suitRand] << endl;
//     }
//     return 0;
// }

//Problem 15
//
// void greet() {
//     cout << "Hello from greet()!" << endl;
// }
//
// void bye() {
//     cout << "Goodbye from bye()!" << endl;
// }
//
// int main() {
//
//     void (*fptr)();
//     fptr = &greet;
//     fptr();
//     fptr = &bye;
//     fptr();
//
//     return 0;
// }

// Problem 16
//
// int add(int a, int b) {
//     return a + b;
// }
//
// int multiply(int a, int b) {
//     return a * b;
// }
//
// int main() {
//
//     int a, b;
//     cin >> a >> b;
//     int (*fptr)(int, int);
//
//     fptr = &add;
//     cout << fptr(a, b) << endl;
//     fptr = &multiply;
//     cout << fptr(a, b) << endl;
//
//
//     return 0;
// }

//Problem 17
// int add(int a, int b) {
//     return a + b;
// }
//
// void calculate(int(*op)(int,int), int x, int y) {
//     cout << op(x, y) << endl;
// }
//
// int main() {
//
//     int x, y;
//     cin >> x >> y;
//     calculate(add, x, y);
//
//     return 0;
// }

//Problem 18
//
// int add(int a, int b) {
//     return a + b;
// }
//
// int multiply(int a, int b) {
//     return a * b;
// }
//
// int main() {
//
//     int a, b, operation;
//     cin >> a >> b;
//     int (*ops[])(int, int) = {add, multiply};
//     cout << "Select one: " << endl;
//     cout << "1 for addition" << endl;
//     cout << "2 for multiplication" << endl;
//     cin >> operation;
//
//     cout << ops[operation - 1](a,b);
//
//     return 0;
// }
