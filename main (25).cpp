#include <iostream>
using namespace std;

int main() {
    int* num = new int;  
    *num = 07;

    cout << "Value: " << *num << endl;

    delete num;              

    return 0;
}
