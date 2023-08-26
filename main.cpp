//
//  main.cpp
//  project5
//
//  Created by Takbir Rahman on 2/23/23.
//

#include <iostream>
#include <string>
#include <cassert>

#include "Enums.h"
#include "MealPlan.h"
#include "BruinCard.h"

using namespace std;

int main() {
    
    BruinCard tak;
    MealPlan prem;

    prem.pickPlan(PREMIER19);
    tak.purchaseMealPlan(prem);
    tak.startQuarter();

    assert (tak.mealsLeftThisWeek() == 19 * 11);

    assert (tak.eat(BREAKFAST));
    assert (tak.eat(BREAKFAST));
    assert (tak.eat(LUNCH));
    assert (tak.eat(DINNER));
    assert (tak.mealsLeftThisWeek() == 19 * 11 - 4);
    
    assert (prem.cost() == 5898.20);
    
    MealPlan reg;
    
    reg.pickPlan(REGULAR11);
    tak.purchaseMealPlan(reg);
    tak.startQuarter();
    
    assert (tak.eat(BREAKFAST));
    assert (!tak.eat(BREAKFAST));
    
    MealPlan p;
    p.pickPlan (REGULAR11);
    cout << p.cost() << endl;
    
    return 0;
}
