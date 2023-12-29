#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int age;
    string position;


    Employee(string name, string position, int age) {
		this->name = name;
		this->position = position;
		this->age = age;
	}

    friend ostream &operator<<(ostream &out, const Employee &emp)
    {
        out << "Name: " << emp.name << ", Position: " << emp.position << ", Age: " << emp.age;
        return out;
    }
};
