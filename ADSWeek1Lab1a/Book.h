//
//  Book.h
//  ADSWeek1Lab1a
//
//  Created by david swift on 10/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#ifndef __ADSWeek1Lab1a__Book__
#define __ADSWeek1Lab1a__Book__

#include <stdio.h>
#include "Product.h"

class Book : public Product {
private:
    
public:
    Book(double);
    double getGrossPrice();
};

#endif /* defined(__ADSWeek1Lab1a__Book__) */
