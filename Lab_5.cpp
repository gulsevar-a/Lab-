//Problem_1.1
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int i = 1; i <= 10; i++) {
//        cout << i << " ";
//    }
//    return 0;
//}
//
//Problem_1.2
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 100; i++) {
//        sum += i;
//    }
//    cout << "Sum: " << sum << endl;
//    return 0;
//}
//
//Problem_1.3
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    cout << "Square: " << n * n << endl;
//    return 0;
//}
//
//Problem_1.4
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//    cout << "Max: " << (a > b ? a : b) << endl;
//    return 0;
//}
//
//Problem_1.5
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int i = 2; i <= 20; i += 2) {
//        cout << i << " ";
//    }
//    return 0;
//}
//
//Problem_1.6
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int i = 1;
//    while (i <= 5) {
//        cout << "Hello World" << endl;
//        i++;
//    }
//    return 0;
//}
//
//Problem_2.1
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    if (num % 2 == 0)
//        cout << "Even" << endl;
//    else
//        cout << "Odd" << endl;
//    return 0;
//}
//
//Problem_2.2
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, fact = 1;
//    cout << "Enter a number: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        fact *= i;
//    }
//    cout << "Factorial: " << fact << endl;
//    return 0;
//}
//
//Problem_2.3
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    for (int i = 1; i <= 10; i++) {
//        cout << n << " x " << i << " = " << n * i << endl;
//    }
//    return 0;
//}
//
//Problem_2.4
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a limit: ";
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 != 0) {
//            cout << i << " ";
//        }
//    }
//    return 0;
//}
//
//Problem_2.5
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//    cout << "Sum: " << a + b << endl;
//    cout << "Difference: " << a - b << endl;
//    cout << "Product: " << a * b << endl;
//    cout << "Quotient: " << a / b << endl;
//    return 0;
//}
//
//Problem_2.6
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num, sum = 0;
//    cout << "Enter a number: ";
//    cin >> num;
//    while (num > 0) {
//        sum += num % 10;
//        num /= 10;
//    }
//    cout << "Sum of digits: " << sum << endl;
//    return 0;
//}
//
//Problem_3
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, reversed = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//    while (n != 0) {
//        reversed = reversed * 10 + n % 10;
//        n /= 10;
//    }
//    cout << "Reversed Number: " << reversed << endl;
//    return 0;
//}
//
//Problem_4
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, first = 0, second = 1, next;
//    cout << "Enter number of terms: ";
//    cin >> n;
//    cout << "Fibonacci Series: ";
//    for (int i = 0; i < n; i++) {
//        cout << first << " ";
//        next = first + second;
//        first = second;
//        second = next;
//    }
//    return 0;
//}
//
//Problem_5
//
//#include <iostream>
//using namespace std;
//int main() {
//    int year;
//    cout << "Enter a year: ";
//    cin >> year;
//    if ((year % 4 == 0 && year % 100 != 0)  (year % 400 == 0))
//        cout << "Leap Year" << endl;
//    else
//        cout << "Not a Leap Year" << endl;
//    return 0;
//}
//
//Problem_6
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, original, remainder, result = 0;
//    cout << "Enter a number: ";
//    cin >> n;
//    original = n;
//    while (original != 0) {
//        remainder = original % 10;
//        result += remainder * remainder * remainder;
//        original /= 10;
//    }
//    if (result == n)
//        cout << n << " is an Armstrong number." << endl;
//    else
//        cout << n << " is not an Armstrong number." << endl;
//    return 0;
//}
//
//Problem_7
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, i;
//    bool isPrime = true;
//    cout << "Enter a positive integer: ";
//    cin >> n;
//    if (n == 0  n == 1)
//        isPrime = false;
//    for (i = 2; i <= n/2; ++i) {
//        if (n % i == 0) {
//            isPrime = false;
//            break;
//        }
//    }
//    if (isPrime)
//        cout << n << " is a Prime number." << endl;
//    else
//        cout << n << " is not a Prime number." << endl;
//    return 0;
//}
//
//Problem_8
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of rows: ";
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
//Problem_9
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Enter the number of natural numbers: ";
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        sum += i;
//    }
//    cout << "Sum = " << sum << endl;
//    return 0;
//}
//
//Problem_10
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, a = 0, b = 1, c;
//    cout << "Enter number of terms: ";
//    cin >> n;
//    cout << "Fibonacci Series: ";
//    cout << a << " " << b << " ";
//    for (int i = 2; i < n; ++i) {
//        c = a + b;
//        cout << c << " ";
//        a = b;
//        b = c;
//    }
//    cout << endl;
//    return 0;
//}
//
//Problem_11
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, fact = 1;
//    cout << "Enter a positive integer: ";
//    cin >> n;
//    if (n < 0)
//        cout << "Factorial not defined for negative numbers." << endl;
//    else {
//        for (int i = 1; i <= n; ++i) {
//            fact *= i;
//        }
//        cout << "Factorial of " << n << " is " << fact << endl;
//    }
//    return 0;
//}
//
//Problem_12
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, rev = 0, rem;
//    cout << "Enter an integer: ";
//    cin >> n;
//    int original = n;
//    while (n != 0) {
//        rem = n % 10;
//        rev = rev * 10 + rem;
//        n /= 10;
//    }
//    cout << "Reversed number: " << rev << endl;
//    if (original == rev)
//        cout << "It is a palindrome." << endl;
//    else
//        cout << "It is not a palindrome." << endl;
//    return 0;
//}
//
//Problem_13
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0, rem;
//    cout << "Enter an integer: ";
//    cin >> n;
//    while (n != 0) {
//        rem = n % 10;
//        sum += rem;
//        n /= 10;
//    }
//    cout << "Sum of digits = " << sum << endl;
//    return 0;
//}
//
//Problem_14
//
#include <iostream>
using namespace std;

int main() {
    int n, largest = 0, rem;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n != 0) {
        rem = n % 10;
        if (rem > largest)
            largest = rem;
        n /= 10;
    }
    cout << "Largest digit is " << largest << endl;
    return 0;
}
