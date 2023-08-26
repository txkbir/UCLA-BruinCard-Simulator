//
//  MealPlan.cpp
//  project5
//
//  Created by Takbir Rahman on 2/25/23.
//

#include "MealPlan.h"
#include "Enums.h"

// class MealPlan's version of the MealPlan function
MealPlan::MealPlan() {}

void MealPlan::pickPlan (plan p) { mPlan = p; }

plan MealPlan::getPlan() { return mPlan; }

double MealPlan::cost() {
    
    double cost;
    
    switch (mPlan) {
        case REGULAR11:
            cost = 4646.64;
            break;
        case REGULAR14:
            cost = 5107.20;
            break;
        case REGULAR19:
            cost = 5278.20;
            break;
        case PREMIER11:
            cost = 5018.28;
            break;
        case PREMIER14:
            cost = 5570.04;
            break;
        case PREMIER19:
            cost = 5898.20;
            break;
    }
    
    return cost;
}

int MealPlan::mealsEachWeek() {
    
    int numMeals;
    
    switch (mPlan) {
        case REGULAR11:
        case PREMIER11:
            numMeals = 11;
            break;
        case REGULAR14:
        case PREMIER14:
            numMeals = 14;
            break;
        case REGULAR19:
        case PREMIER19:
            numMeals = 19;
            break;
    }
    
    return numMeals;
}

bool MealPlan::unusedMealsCarryOver() {
    
    bool carries;
    
    switch (mPlan) {
        case REGULAR11:
        case REGULAR14:
        case REGULAR19:
            carries = false;
            break;
        case PREMIER11:
        case PREMIER14:
        case PREMIER19:
            carries = true;
            break;
    }
    
    return carries;
}
