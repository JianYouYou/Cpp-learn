//
// Created by Jianyou on 2024/10/25.
//

#ifndef SALES_DATE_H
#define SALES_DATE_H
#include <iostream>
    struct Sales_date {
      std::string bookNo;         //类体内定义的变量是数据成员，定义时可以给成员一个类内初始值，
      unsigned units_sold = 0;
      double revenue = 0.0;
    };                            //类体最后的花括号（}）后面要加一个；，因为类体后紧跟变量名可以表示对该类型对象的定义；
                                  //一点要把定义类体和定义变量分开
#endif //SALES_DATE_H
