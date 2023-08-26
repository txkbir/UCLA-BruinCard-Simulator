//
//  BruinCard.h
//  project5
//
//  Created by Takbir Rahman on 2/25/23.
//

#ifndef BRUINCARD_H
#define BRUINCARD_H

#include "Enums.h"
#include "MealPlan.h"

class BruinCard {
public:
    BruinCard();
    plan getPlan();                         // GETTER
    void purchaseMealPlan (MealPlan plan);  // SETTER
    bool hasPurchasedMealPlan();
    bool eat (meal m);
    void startQuarter();
    void newWeek();
    void newDay();
    int mealsLeftThisWeek();
    
private:
    MealPlan mPlan;
    bool mBoughtAMealPlan;
    bool hasEatenBreakfast;
    bool hasEatenLunch;
    bool hasEatenDinner;
    bool hasEatenBrunch;
    int howManyMealsLeft;
};

#endif /* BruinCard.h */
