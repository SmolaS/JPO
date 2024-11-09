#include <iostream>

class Student
{
private:
    std::string m_name{};
    int m_age{};

public:
    void setAge(int a)
    {
        if (a > 0)
        {
            m_age = a;
        }
        else
        {
            std::cout << "Age can't be 0 or a negative number." << std::endl;
        }
    }

    int getAge() const
    {
        return m_age;
    }

    void setName(const std::string n)
    {
        if (!n.empty())
        {
            m_name = n;
        }
        else
        {
            std::cout << "Name can't be empty." << std::endl;
        }
    }

    std::string getName() const
    {
        return m_name;
    }
};

int main()
{
    Student student;
    int age;
    do
    {
        std::cout << "Enter your age: ";
        std::cin >> age;
        student.setAge(age);
    } while (age <= 0);

    std::string name;
    do
    {
        std::cout << "Enter your name: ";
        std::cin >> name;
        student.setName(name);
    } while (name.empty());

    std::cout << "Age: " << student.getAge() << std::endl;
    std::cout << "Name: " << student.getName() << std::endl;

    return 0;
}
