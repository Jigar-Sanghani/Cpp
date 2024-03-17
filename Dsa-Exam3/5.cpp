#include<iostream>
using namespace std;


class Admin
{
private:
    int total_Revenue;

protected:
    static string company_name;
    int manager_salary, employee_salary, total_staff;
    string can_terminate;

public:
    void setData()
    {
        cout << "\t---Enter Data---" << endl
          << "Company Total Annual Revenue : ";
        cin >> this->total_Revenue;

        cout << "Manager Salary : ";
        cin >> this->manager_salary;

        cout << "Company TOtal Staff : ";
        cin >> this->total_staff;

        cout << "Employee Salary : ";
        cin >> this->employee_salary;

        cout << "Can Terminate 'Yes' or 'No' : ";
        cin >> this->can_terminate;
    }

    void myAccess()
    {
        this->setData();
        cout << endl
          << "\t---Company Data---" << endl
          << "Company Total Revenue\t: " << this->total_Revenue << endl
          << "Company Total Staff\t: " << this->total_staff << endl
          << "Manager Salary\t\t: " << this->manager_salary << endl
          << "Employee Salary\t\t: " << this->employee_salary << endl
          << "Terminate\t\t: " << this->can_terminate << endl
          << "Company Name\t\t: " << Admin::company_name << endl;
    }

    static void setCompanyName()
    {
        cout << endl
          << endl
          << "Enter Company Name : ";
        cin >> company_name;
    }
};

string Admin::company_name = "Google";

class Manager : protected Admin
{
public:
    void setData()
    {
        cout << endl
          << endl
          << "Manager Salary : ";
        cin >> manager_salary;

        cout << "Company TOtal Staff : ";
        cin >> total_staff;

        cout << "Employee Salary : ";
        cin >> employee_salary;

        cout << "Can Terminate 'Yes' or 'No' : ";
        cin >> can_terminate;
    }

    void myAccess()
    {
        this->setData();
        cout << endl
          << "\t---Manager Data---" << endl
          << "Manager Salary\t: " << this->manager_salary << endl
          << "Total Staff\t: " << this->total_staff << endl
          << "Employee Salary\t: " << this->employee_salary << endl
          << "Terminate\t: " << this->can_terminate << endl
          << "Company Name\t: " << this->Admin::company_name << endl;

        manager_salary = 0;
        total_staff = 0;
        can_terminate = " ";
    }
};

class Employee : private Manager
{
public:
    void setData()
    {
        cout << endl
          << endl
          << "Employee Salary : ";
        cin >> employee_salary;
    }

    void myAccess()
    {
        this->setData();
        cout << endl
          << "\t---Employee Salary---" << endl
          << "Employee Salar\t: " << employee_salary << endl
          << "Company Name\t: " << Admin::company_name << endl;
    }
};

int main()
{
   
    Employee e1;
    e1.myAccess();

    Manager m1;
    m1.myAccess();

    Admin::setCompanyName();
    Admin a1;
    a1.myAccess();

    return 0;
}
