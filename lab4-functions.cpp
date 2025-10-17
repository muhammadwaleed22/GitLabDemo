//#include <iostream>
//using namespace std;
//
//int factorialRecursive(int n) {
//    if (n <= 1) return 1;
//    return n * factorialRecursive(n - 1);
//}
//
//int main() {
//    int num;
//    cout << "Enter number: ";
//    cin >> num;
//    cout << "Factorial (Recursive): " << factorialRecursive(num);
//    return 0;
}




















//
//
//#include <iostream>
//using namespace std;
//
//int factorialIterative(int n) {
//    int fact = 1;
//    for (int i = 1; i <= n; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//
//int main() {
//    int num;
//    cout << "Enter number: ";
//    cin >> num;
//    cout << "Factorial (Iterative): " << factorialIterative(num);
//    return 0;
//}








#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) cout << "Prime Number";
    else cout << "Not Prime";
    return 0;
}




























