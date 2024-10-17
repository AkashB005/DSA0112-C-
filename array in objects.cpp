#include<iostream>
using namespace std;

class student {
    int id;
    char name[30];
public:
    void getdata();
    void display();
};

void student::getdata() {
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}

void student::display() {
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}

int main() {
    Employee emp;
    emp.getdata();
    emp.display();
    return 0;
}

