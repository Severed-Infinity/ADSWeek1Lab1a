//
//  main.cpp
//  ADSWeek1Lab1a
//
//  Created by david swift on 05/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include <iostream>
#include "Product.h"
#include "Book.h"
#include "Software.h"

void sort(Product *array[], int arraySize);

int main(int argc, const char * argv[]) {
    
    Product prod(12.5);
    std::cout << "prod " << prod.getGrossPrice() << std::endl;
    
    Book book(16.77);
    std::cout << "book " << book.getGrossPrice() << std::endl;
    
    Software soft(3.56);
    std::cout << "soft " << soft.getGrossPrice() << std::endl;
    
    Product *prods[10];
    
    prods[0] = new Book(56.89);
    prods[1] = &book;
    prods[2] = &soft;
    prods[3] = &prod;
    
    double priceIn;
    std::cout << "New Book Price: ";
    std::cin >> priceIn;
    Book b1(priceIn);
    prods[4] = &b1;
    
    std::cout << "New Software Price: ";
    std::cin >> priceIn;
    Software s1(priceIn);
    prods[5] = &s1;
    
    //----------------------
    //secondary array to test console inputs
    //----------------------
    Product *prods2[10];
    for (int i = 0; i < 10; i++) {
        
        std::cout << "book or software? " << std::endl;
        std::string type;
        std::cin >> type;
        
        std::cout << std::endl << "Enter price for ";
        double price = 0.0;
        if (type == "b" || type == "book") {
            std::cout << "book. " << std::endl;
            std::cin >> price;
            prods2[i] = new Book(price);
            std::cout << std::endl;
        } else if (type == "s" || type == "software"){
            std::cout << "software. " << std::endl;
            std::cin >> price;
            prods2[i] = new Software(price);
            std::cout << std::endl;
        } else{
            std::cout << "\'Unknown product\', generic product. " << std::endl;
            std::cin >> price;
            prods2[i] = new Product(price);
            std::cout << std::endl;
        }
    }
    
    std::cout << std::endl;
    
    //printing price out
    for (int i = 0; i < 10; i++) {
       std::cout << prods2[i]->getGrossPrice() << std::endl;
    }
    
    //sorting price
    sort(prods2, 10);
    
    std::cout << std::endl;
    
    //printing after sort
    for (int i = 0; i < 10; i++) {
       std::cout << prods2[i]->getGrossPrice() << std::endl;
    }
    
    return 0;
}

void sort(Product *array[], int arraySize){
    int gap = arraySize;
    bool swapped = true;
    while (gap > 1 || swapped){
        if (gap > 1){
            gap = (gap * 10) / 13;
        }
        swapped = false;
        for (unsigned int i = 0; i + gap < arraySize; i++){
            if (array[i]->getGrossPrice() > array[i + gap]->getGrossPrice()){
                Product *tmp = array[i];
                array[i] = array[i + gap];
                array[i + gap] = tmp;
                swapped = true;
            }
        }
    }
}
