#include<iostream>
using namespace std;
class employee {
    private : 
    int salary;
    public : 
    string name;
    int age;
    void setEmployee(int s, string n, int a){
        name = n;
        salary = s;
        age = a;
    }
    void getEmployee(){
        cout << "EMPLOYEE NAME : "<<name<<endl;
        cout << "AGE : "<<age<<endl;
        cout << "SALARY : "<<salary<<endl;
    }
};
int main() {
    employee e1;
    e1.setEmployee(100000, "Aman",22 );
    e1.getEmployee();
    return 0;
}