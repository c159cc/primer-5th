 #include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/**
> Add the combine and isbn members to the Sales_data class you wrote for the
exercises in 2.6.2.
 */
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    // 新的成员
    string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &rhs);
    double avg_price() const;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// 非成员函数
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
ostream &print(ostream &os, const Sales_data &item);
istream &read(istream &is, Sales_data &item);


int main() {
    Sales_data total; // 持有和
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans; // 持有当前值
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
