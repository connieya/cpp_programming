#include "student1.h"

int main()
{
    Student p1;
    p1.ShowScore();

    cout << " **********************" << "\n" ;

    p1.setScore(99,96,98);
    p1.SumAverage();
    p1.ShowScore();

    return 0;
}