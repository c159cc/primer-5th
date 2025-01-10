#include <iostream>
#include "../include/Sales_item.h"

int main()
{

    int cnt = 1; // cnt声明放在if里面
    Sales_item total;
    if(std::cin>>total){
        Sales_item item;
        while(std::cin>>item){
            if(item.isbn()==total.isbn()){
                // total+=item; // 这里是多余的
                ++cnt;
            } else{
                std::cout<<total.isbn()<<" "<<cnt<<std::endl;
                // total=item; // 这里是多余的
                cnt = 1;
            }
        }
        std::cout << total.isbn() << " " << cnt << std::endl;
    }else{
        std::cout<<"No data"<<std::endl; // 这里是多余的
    }
   
    return 0;
}