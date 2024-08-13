#pragma once
#include "Drink.h"
class SoftDrink :
    public Drink
{
    using Drink::Drink;
public:
    virtual void setCost();
    virtual void pickDrink();
};
