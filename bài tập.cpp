#include <iostream>
using namespace std;

void swap(int *x, int *y) {
   int temp = *x;
   *x = *y;
   *y = temp;
}

int main() {
   int num1, num2;
   cout << "Input the value of 1st element : ";
   cin >> num1;
   cout << "Input the value of 2nd element : ";
   cin >> num2;
   cout << "The values before swapping are : " << endl;
   cout << "element 1 = " << num1 << endl;
   cout << "element 2 = " << num2 << endl;
   swap(&num1, &num2);
   cout << "The values after swapping are : " << endl;
   cout << "element 1 = " << num1 << endl;
   cout << "element 2 = " << num2 << endl;
   return 0;
}
