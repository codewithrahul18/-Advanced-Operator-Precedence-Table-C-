// the Advanced Level Operator Precedence Table in C++ 👇
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "==================== OPERATOR PRECEDENCE DEMO ====================" << endl;
    cout << "                 Created by: THE RAHUL CHAUHAN                   " << endl;
    cout << "==================================================================" << endl << endl;

    int a = 10, b = 5, c = 2, d = 0;

    cout << "================================================================================================" << endl;
    cout << left << setw(5) << "Rank"
         << setw(25) << "Category"
         << setw(20) << "Operator"
         << setw(25) << "Example"
         << "Result" << endl;
    cout << "================================================================================================" << endl;

    // 1. Postfix (Highest precedence)
    int x = 5;
    cout << setw(5) << "1"
         << setw(25) << "Postfix"
         << setw(20) << "x++"
         << setw(25) << "x=5 → x++"
         << x++ << " (x=" << x << ")" << endl;

    // 2. Prefix & Unary
    cout << setw(5) << "2"
         << setw(25) << "Prefix (++/--)"
         << setw(20) << "++b"
         << setw(25) << "b=5 → ++b"
         << (++b) << endl;

    cout << setw(5) << "2"
         << setw(25) << "Unary Negation"
         << setw(20) << "-a"
         << setw(25) << "-10"
         << -a << endl;

    cout << setw(5) << "2"
         << setw(25) << "Logical NOT"
         << setw(20) << "!a"
         << setw(25) << "!10"
         << (!a) << endl;

    cout << setw(5) << "2"
         << setw(25) << "Bitwise NOT"
         << setw(20) << "~a"
         << setw(25) << "~10"
         << (~a) << endl;

    cout << setw(5) << "2"
         << setw(25) << "sizeof"
         << setw(20) << "sizeof(int)"
         << setw(25) << "bytes in int"
         << sizeof(int) << endl;

    // 3. Multiplicative
    cout << setw(5) << "3"
         << setw(25) << "Multiplicative"
         << setw(20) << "a*b/c"
         << setw(25) << "10*5/2"
         << (a * b / c) << endl;

    // 4. Additive
    cout << setw(5) << "4"
         << setw(25) << "Additive"
         << setw(20) << "a+b-c"
         << setw(25) << "10+5-2"
         << (a + b - c) << endl;

    // 5. Shift
    cout << setw(5) << "5"
         << setw(25) << "Shift Left"
         << setw(20) << "a<<1"
         << setw(25) << "10<<1"
         << (a << 1) << endl;

    cout << setw(5) << "5"
         << setw(25) << "Shift Right"
         << setw(20) << "a>>1"
         << setw(25) << "10>>1"
         << (a >> 1) << endl;

    // 6. Relational
    cout << setw(5) << "6"
         << setw(25) << "Relational"
         << setw(20) << "a<b"
         << setw(25) << "10<5"
         << (a < b) << endl;

    cout << setw(5) << "6"
         << setw(25) << "Relational"
         << setw(20) << "a>=b"
         << setw(25) << "10>=5"
         << (a >= b) << endl;

    // 7. Equality
    cout << setw(5) << "7"
         << setw(25) << "Equality"
         << setw(20) << "a==b"
         << setw(25) << "10==5"
         << (a == b) << endl;

    cout << setw(5) << "7"
         << setw(25) << "Inequality"
         << setw(20) << "a!=b"
         << setw(25) << "10!=5"
         << (a != b) << endl;

    // 8. Bitwise AND
    cout << setw(5) << "8"
         << setw(25) << "Bitwise AND"
         << setw(20) << "a&b"
         << setw(25) << "10&5"
         << (a & b) << endl;

    // 9. Bitwise XOR
    cout << setw(5) << "9"
         << setw(25) << "Bitwise XOR"
         << setw(20) << "a^b"
         << setw(25) << "10^5"
         << (a ^ b) << endl;

    // 10. Bitwise OR
    cout << setw(5) << "10"
         << setw(25) << "Bitwise OR"
         << setw(20) << "a|b"
         << setw(25) << "10|5"
         << (a | b) << endl;

    // 11. Logical AND
    cout << setw(5) << "11"
         << setw(25) << "Logical AND"
         << setw(20) << "a>b&&b>c"
         << setw(25) << "10>5&&5>2"
         << ((a > b) && (b > c)) << endl;

    // 12. Logical OR
    cout << setw(5) << "12"
         << setw(25) << "Logical OR"
         << setw(20) << "a<b||b>c"
         << setw(25) << "10<5||5>2"
         << ((a < b) || (b > c)) << endl;

    // 13. Conditional
    cout << setw(5) << "13"
         << setw(25) << "Conditional (Ternary)"
         << setw(20) << "a>b?a:b"
         << setw(25) << "10>5?10:5"
         << (a > b ? a : b) << endl;

    // 14. Assignment
    d = a + b;
    cout << setw(5) << "14"
         << setw(25) << "Assignment (=)"
         << setw(20) << "d=a+b"
         << setw(25) << "10+5"
         << d << endl;

    d += 2;
    cout << setw(5) << "14"
         << setw(25) << "Assignment (+=)"
         << setw(20) << "d+=2"
         << setw(25) << "15+=2"
         << d << endl;

    d *= 2;
    cout << setw(5) << "14"
         << setw(25) << "Assignment (*=)"
         << setw(20) << "d*=2"
         << setw(25) << "17*2"
         << d << endl;

    // 15. Comma (Lowest precedence)
    int z = (a = 3, b = 4, c = 5);
    cout << setw(5) << "15"
         << setw(25) << "Comma"
         << setw(20) << "(a=3,b=4,c=5)"
         << setw(25) << "z=(...)"
         << z << endl;

    cout << "================================================================================================" << endl;
    cout << "                END OF DEMO | CREATED BY: THE RAHUL CHAUHAN               " << endl;
    cout << "================================================================================================" << endl;

    return 0;
}
