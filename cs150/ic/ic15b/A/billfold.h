#ifndef BILLFOLD_H
#define BILLFOLD_H

#include <vector>
#include "cards.h"

class Billfold
{
public:
    Billfold() = default;
    void printCards() const;
    void add(Card* card);

private:
    std::vector<Card*> cards;
};

#endif
