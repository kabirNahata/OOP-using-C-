#include <iostream>
using std::string;

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:
    void introduce_yourself() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    
};

int main()
{
    Employee employee1("Bikash", "Onepoint", 44);
    employee1.introduce_yourself();

    employee1.setAge(43);
    std::cout<<employee1.getName()<<" is "<<employee1.getAge()<< " years old "<< std::endl;
}