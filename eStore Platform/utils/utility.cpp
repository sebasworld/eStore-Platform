#include "utility.h"

bool Utility::sortFunction(Product *p1, Product *p2){
    NonFoodProduct* nf1 = dynamic_cast<NonFoodProduct*>(p1);
    NonFoodProduct* nf2 = dynamic_cast<NonFoodProduct*>(p2);
    return nf1->getPrice() < nf2->getPrice();
}

bool Utility::sortFunction2(Product *p1, Product *p2){
    FoodProduct* f1 = dynamic_cast<FoodProduct*>(p1);
    FoodProduct* f2 = dynamic_cast<FoodProduct*>(p2);
    if (p1->getName() < p2->getName()){
        return true;
    }
    if (p1->getName() > p2->getName()){
        return false;
    }
    if (f1->getCountryOfOrigin() < f2->getCountryOfOrigin()){
        return true;
    }
    if (f1->getCountryOfOrigin() > f2->getCountryOfOrigin()){
        return false;
    }
    if (f1->getLeiPerKg() < f2->getLeiPerKg()){
        return true;
    }
    if (f1->getLeiPerKg() > f2->getLeiPerKg()){
        return false;
    }
    return false;
}