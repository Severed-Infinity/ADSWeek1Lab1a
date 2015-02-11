//
//  Product.h
//  ADSWeek1Lab1a
//
//  Created by david swift on 10/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADSWeek1Lab1a__Product__
#define __ADSWeek1Lab1a__Product__

#include <stdio.h>

class Product {
protected:
    double netPrice;
    
public:
    Product(double);
    ~Product();
    double getGrossPrice();
};

#endif /* defined(__ADSWeek1Lab1a__Product__) */
