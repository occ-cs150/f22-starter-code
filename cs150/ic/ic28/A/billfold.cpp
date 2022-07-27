#include <vector>
#include <iostream>
using namespace std;
#include "cards.h"
#include "billfold.h"

void Billfold::printCards() const
{
    for (auto p : cards) p->print();
}

void Billfold::add(Card* card)
{
    cards.push_back(card);
}

