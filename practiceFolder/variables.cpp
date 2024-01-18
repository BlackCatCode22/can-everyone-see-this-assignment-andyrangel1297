#include <iostream>
// needed header to use string
#include <string>

using namespace std;

int main() {

    // types of variables: int, double, character, string, or boolean
    // examples of declaring variables
    int a;
    double b;
    char c;
    string d;
    bool e;

    // examples of assigning values to variables (initializing)
    a = 8;
    b = 3.14;
    c = 'a';
    d = "hello";
    e = true;

    // examples of printing variables
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    // above prints 8, 3.14, a, hello, 1 since 1 is true and 0 is false
    e = false;
    cout << e << endl;
    // above prints 0 since 1 is true and 0 is false
    
    // chaining outputs
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    // above prints 8 3.14 a hello 0

    /*
    int type stores integers (whole numbers) and requires 4 bytes of memory and
    ranges from -2^31 to 2^31 - 1

    double type stores decimal numbers and requires 8 bytes of memory and
    ranges from 2.3e-308 to 1.7e+308

    char type stores single characters and requires 1 byte of memory and
    ranges from -128 to 127

    string type stores a sequence of characters and requires 1 byte of memory
    for each character

    bool type stores true or false and requires 1 byte of memory
    */

    return 0;
}