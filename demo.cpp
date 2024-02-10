#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main() {
    cout << "david" << endl;
    Student s1("name1", 2);
    cout << s1.name << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    cout << "bruce" << endl;
}