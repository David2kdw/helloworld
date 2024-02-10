#include <string>
using namespace std;

class Student {
    public:
    int age;
    string name;
    Student(string name, int age) {
        this->age = age;
        this->name = name;
    }
};