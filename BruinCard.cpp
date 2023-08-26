//
//  BruinCard.cpp
//  project5
//
//  Created by Takbir Rahman on 2/25/23.
//

#include "Enums.h"
#include "BruinCard.h"
#include "MealPlan.h"

BruinCard::BruinCard() {
    mBoughtAMealPlan = false;
    hasEatenBreakfast = false;
    hasEatenLunch = false;
    hasEatenDinner = false;
    hasEatenBrunch = false;
    howManyMealsLeft = 0;
}

plan BruinCard::getPlan() { return mPlan.getPlan(); }

void BruinCard::purchaseMealPlan (MealPlan plan) {
    mPlan = plan;
    mBoughtAMealPlan = true;
}

bool BruinCard::hasPurchasedMealPlan() { return mBoughtAMealPlan; }

bool BruinCard::eat (meal m) {
    
    if (!mBoughtAMealPlan || howManyMealsLeft <= 0)
        return false;
    
    // IF IT IS A REGULAR PLAN
    if (!mPlan.unusedMealsCarryOver()) {
        if (m == BREAKFAST && hasEatenBreakfast)
            return false;
        else if (m == LUNCH && hasEatenLunch)
            return false;
        else if (m == DINNER && hasEatenDinner)
            return false;
        else if (m == WEEKENDBRUNCH && hasEatenBrunch)
            return false;
    }
    
    /*
     if this line of code is
     reached then that means
     every case has passed
     */
    
    if (m == BREAKFAST)
        hasEatenBreakfast = true;
    if (m == LUNCH)
        hasEatenLunch = true;
    if (m == DINNER)
        hasEatenDinner = true;
    if (m == WEEKENDBRUNCH)
        hasEatenBrunch = true;
    
    howManyMealsLeft--;
    return true;
}

void BruinCard::startQuarter() {
    newWeek();
    
    switch (mPlan.getPlan()) {
        case REGULAR11:
            howManyMealsLeft = 11;
            break;
        case REGULAR14:
            howManyMealsLeft = 14;
            break;
        case REGULAR19:
            howManyMealsLeft = 19;
            break;
        case PREMIER11:
            howManyMealsLeft = 11 * 11;
            break;
        case PREMIER14:
            howManyMealsLeft = 14 * 11;
            break;
        case PREMIER19:
            howManyMealsLeft = 19 * 11;
            break;
    }
}

void BruinCard::newWeek() {
    newDay();
    
    switch (mPlan.getPlan()) {
        case REGULAR11:
            howManyMealsLeft = 11;
            break;
        case REGULAR14:
            howManyMealsLeft = 14;
            break;
        case REGULAR19:
            howManyMealsLeft = 19;
            break;
        default:
            break;
    }
}

void BruinCard::newDay() {
    hasEatenBreakfast = false;
    hasEatenLunch = false;
    hasEatenDinner = false;
    hasEatenBrunch = false;
}

int BruinCard::mealsLeftThisWeek() { return howManyMealsLeft; }
