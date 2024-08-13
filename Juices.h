#pragma once
#include "Drink.h"

class Juice :
    public Drink
{
    using Drink::Drink;
public:
    virtual void setCost();
    virtual void pickDrink();
};

