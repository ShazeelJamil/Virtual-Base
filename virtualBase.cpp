#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_roll_number(void)
    {
        cout << "Your Roll_Number is: " << roll_number << endl;
    }
};
class Test : virtual public Student
{
protected:
    float Maths, Physics;

public:
    void set_marks(float m1, float m2)
    {
        Maths = m1;
        Physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is here: " << endl
             << "Maths: " << Maths << endl
             << "Physics: " << Physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your Score in PT is: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float Total;

public:
    void display(void)
    {
        Total = Maths + Physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "Your Total Score is: " << Total << endl;
    }
};

int main()
{
    Result Shazeel;
    Shazeel.set_roll_number(25);
    Shazeel.set_marks(88, 90);
    Shazeel.set_score(9);
    Shazeel.display();
    return 0;
}