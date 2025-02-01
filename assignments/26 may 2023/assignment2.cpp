#include <iostream>
using namespace std;
class Month
{
public:
    virtual void daygreeting()
    {
        cout << "This is month." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day1 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 1 is 1st May." << endl;
        cout << "Today is Monday." << endl;
        cout << "Today is Maharashtra Day.So today is Holiday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day2 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 2 is 2nd May." << endl;
        cout << "Today is Tuesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day3 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 3 is 3rd May." << endl;
        cout << "Today is Wednesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day4 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 4 is 4th May." << endl;
        cout << "Today is Thursday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day5 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 5 is 5th May." << endl;
        cout << "Today is Friday." << endl;
        cout << "Today is Buddha Purnima. So today is holiday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day6 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 6 is 6th May." << endl;
        cout << "Today is Saturday." << endl;
        cout << "Today is weekend." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day7 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 7 is 7th May." << endl;
        cout << "Today is Sunday." << endl;
        cout << "Today is weekend." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day8 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 8 is 8th May." << endl;
        cout << "Today is Monday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day9 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 9 is 9th May." << endl;
        cout << "Today is Tuesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day10 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 10 is 10th May." << endl;
        cout << "Today is Wednesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day11 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 11 is 11th May." << endl;
        cout << "Today is Thursday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day12 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 12 is 12th May." << endl;
        cout << "Today is Friday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day13 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 13 is 13th May." << endl;
        cout << "Today is Saturday." << endl;
        cout << "Today is weekend and also bank holiday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day14 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 14 is 14th May." << endl;
        cout << "Today is Sunday." << endl;
        cout << "Today is weekend and also Mother's Day." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day15 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 15 is 15th May." << endl;
        cout << "Today is Monday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day16 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 16 is 16th May." << endl;
        cout << "Today is Tuesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day17 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 17 is 17th May." << endl;
        cout << "Today is Wednesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day18 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 18 is 18th May." << endl;
        cout << "Today is Thursday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day19 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 19 is 4th May." << endl;
        cout << "Today is Friday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day20 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 20 is 20th May." << endl;
        cout << "Today is Saturday." << endl;
        cout << "Today is weekend." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day21 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 21 is 21st May." << endl;
        cout << "Today is Sunday." << endl;
        cout << "Today is weekend." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day22 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 22 is 22nd May." << endl;
        cout << "Today is Monday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day23 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 23 is 23rd May." << endl;
        cout << "Today is Tuesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day24 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 24 is 24th May." << endl;
        cout << "Today is Wednesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day25 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 25 is 25th May." << endl;
        cout << "Today is Thursday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day26 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 26 is 26th May." << endl;
        cout << "Today is Friday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day27 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 27 is 27th May." << endl;
        cout << "Today is Saturday." << endl;
        cout << "Today is weekend and also bank holiday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day28 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 28 is 28th May." << endl;
        cout << "Today is Sunday." << endl;
        cout << "Today is weekend." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day29 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 29 is 29th May." << endl;
        cout << "Today is Monday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day30 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 29 is 29th May." << endl;
        cout << "Today is Tuesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
class Day31 : public Month
{
public:
    virtual void daygreeting()
    {
        cout << "Day 31 is 31st May." << endl;
        cout << "Today is Wednesday." << endl;
        cout << "Today is workday." << endl;
    }
    void saygreeting()
    {
        daygreeting();
    }
};
int main()
{
    Day1 obj1;
    Day2 obj2;
    Day3 obj3;
    Day4 obj4;
    Day5 obj5;
    Day6 obj6;
    Day7 obj7;
    Day8 obj8;
    Day9 obj9;
    Day10 obj10;
    Day11 obj11;
    Day12 obj12;
    Day13 obj13;
    Day14 obj14;
    Day15 obj15;
    Day16 obj16;
    Day17 obj17;
    Day18 obj18;
    Day19 obj19;
    Day20 obj20;
    Day21 obj21;
    Day22 obj22;
    Day23 obj23;
    Day24 obj24;
    Day25 obj25;
    Day26 obj26;
    Day27 obj27;
    Day28 obj28;
    Day29 obj29;
    Day30 obj30;
    Day31 obj31;
    int i;
    Month *arrptr[31];
    cout << "Enter number: ";
    cin >> i;
    switch (i)
    {
    case 1:
        arrptr[0] = &obj1;
        arrptr[0]->saygreeting();
        break;
    case 2:
        arrptr[1] = &obj2;
        arrptr[1]->saygreeting();
        break;
    case 3:
        arrptr[2] = &obj3;
        arrptr[2]->saygreeting();
        break;
    case 4:
        arrptr[3] = &obj4;
        arrptr[3]->saygreeting();
        break;
    case 5:
        arrptr[4] = &obj5;
        arrptr[4]->saygreeting();
        break;
    case 6:
        arrptr[5] = &obj6;
        arrptr[5]->saygreeting();
        break;
    case 7:
        arrptr[6] = &obj7;
        arrptr[6]->saygreeting();
        break;
    case 8:
        arrptr[7] = &obj8;
        arrptr[7]->saygreeting();
        break;
    case 9:
        arrptr[8] = &obj9;
        arrptr[8]->saygreeting();
        break;
    case 10:
        arrptr[9] = &obj10;
        arrptr[9]->saygreeting();
        break;
    case 11:
        arrptr[10] = &obj11;
        arrptr[10]->saygreeting();
        break;
    case 12:
        arrptr[11] = &obj12;
        arrptr[11]->saygreeting();
        break;
    case 13:
        arrptr[12] = &obj13;
        arrptr[12]->saygreeting();
        break;
    case 14:
        arrptr[13] = &obj14;
        arrptr[13]->saygreeting();
        break;
    case 15:
        arrptr[14] = &obj15;
        arrptr[14]->saygreeting();
        break;
    case 16:
        arrptr[15] = &obj16;
        arrptr[15]->saygreeting();
        break;
    case 17:
        arrptr[16] = &obj17;
        arrptr[16]->saygreeting();
        break;
    case 18:
        arrptr[17] = &obj18;
        arrptr[17]->saygreeting();
        break;
    case 19:
        arrptr[18] = &obj19;
        arrptr[18]->saygreeting();
        break;
    case 20:
        arrptr[19] = &obj20;
        arrptr[19]->saygreeting();
        break;
    case 21:
        arrptr[20] = &obj21;
        arrptr[20]->saygreeting();
        break;
    case 22:
        arrptr[21] = &obj22;
        arrptr[21]->saygreeting();
        break;
    case 23:
        arrptr[22] = &obj23;
        arrptr[22]->saygreeting();
        break;
    case 24:
        arrptr[23] = &obj24;
        arrptr[23]->saygreeting();
        break;
    case 25:
        arrptr[24] = &obj25;
        arrptr[24]->saygreeting();
        break;
    case 26:
        arrptr[25] = &obj26;
        arrptr[25]->saygreeting();
        break;
    case 27:
        arrptr[26] = &obj27;
        arrptr[26]->saygreeting();
        break;
    case 28:
        arrptr[27] = &obj28;
        arrptr[27]->saygreeting();
        break;
    case 29:
        arrptr[28] = &obj29;
        arrptr[28]->saygreeting();
        break;
    case 30:
        arrptr[30] = &obj30;
        arrptr[30]->saygreeting();
        break;
    case 31:
        arrptr[30] = &obj31;
        arrptr[30]->saygreeting();
        break;
    }
    return 0;
}