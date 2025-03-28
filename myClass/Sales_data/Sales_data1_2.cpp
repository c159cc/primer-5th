#include "Sales_data1.h"
#include <iostream>
#include <string>
/**
 * 检查isbn并且打印和
 */
int main() {
    Sales_data data1, data2;

    // 读取数据到data1, data2
    double price = 0.0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    //  检查isbn是否相同
    // 如果相同打印他们的和
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        if (totalCnt != 0) {
            std::cout << "units_price: " << (totalRevenue / totalCnt)
                      << std::endl;
        } else {
            std::cout << "total_units_sold is zero" << std::endl;
        }
        return 0;
    } else {
        std::cout << "ISBN not equal" << std::endl;
        return -1;
    }
}
