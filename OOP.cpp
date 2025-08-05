#include <iostream>
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void introduce_yourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Bikash", "Onepoint", 44);
    employee1.Name = "Bikash";
    employee1.Company = "Onepoint";
    employee1.Age = 44;
    employee1.introduce_yourself();

    // Employee employee2;
    // employee2.Name = "Samrajya";
    // employee2.Company = "Onepoint";
    // employee2.Age = 24;
    // employee2.introduce_yourself();
}