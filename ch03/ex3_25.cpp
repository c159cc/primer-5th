#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * 输出每个成绩区间的人数
 */
int main()
{
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade)
    { // read the grades
        if (grade <= 100)
        { 
            auto it = (scores.begin() + grade / 10);
            *it += 1;
        }
    }

    for (auto t : scores)
    {
        cout << t << " ";
    }
    cout << endl;
    return 0;
}
