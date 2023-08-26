//
//  MealPlan.h
//  project5
//
//  Created by Takbir Rahman on 2/25/23.
//

#ifndef MEALPLAN_H
#define MEALPLAN_H

#include "Enums.h"

class MealPlan {
public:
    MealPlan();
    plan getPlan();                     // mPlan getter
    void pickPlan (plan p);             // mPlan setter
    double cost();
    int mealsEachWeek();
    bool unusedMealsCarryOver();
    
private:
    plan mPlan;
};

#endif /* MealPlan.h */
