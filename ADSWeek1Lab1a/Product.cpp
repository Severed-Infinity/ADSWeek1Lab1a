//
//  Product.cpp
//  ADSWeek1Lab1a
//
//  Created by david swift on 10/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include "Product.h"

Product::Product(double p){
    netPrice = p;
}
Product::~Product(){
    netPrice = 0.0;
}

double Product::getGrossPrice(){
    return (netPrice*1.21);
}