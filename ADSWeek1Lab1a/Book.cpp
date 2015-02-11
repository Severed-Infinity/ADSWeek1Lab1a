//
//  Book.cpp
//  ADSWeek1Lab1a
//
//  Created by david swift on 10/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include "Book.h"

Book::Book(double netPrice) : Product(netPrice) {
    
}

double Book::getGrossPrice(){
    return netPrice;
}