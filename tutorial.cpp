#include <iostream>
#include <string>
using namespace std;

int main() {
    struct student {
        string name;
        int age;
        char grade;
    };

    student Liam;
    Liam.name = "Liam Saunders";
    Liam.age = 18;
    Liam.grade = 'A';

    cout << Liam.name << endl;
    cout << Liam.grade << endl;
    cout << Liam.age << endl;

    return 0;
}
