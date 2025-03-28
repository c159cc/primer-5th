#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
/**
 * 预处理器
 */

struct Sales_data{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
}; 
#endif
