 #include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/**
> Write a version of the transaction-processing program from 1.6 using the
Sales_data class you defined for the exercises in 2.6.1.
 */
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
int main() {
    Sales_data total; // 持有和
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans; // 持有当前值
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
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
