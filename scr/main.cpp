#include <list>
#include <iostream>
#include "Sort.h"

int main()
{
    std::list<unsigned> l{3, 9999, 11145645, 255, 2, 1, 4, 0};

    LifeNewer::Sort(l.begin(), l.end());

    for (auto element : l)
    {
        std::cout << element << std::endl;
    }

    return 0;
}
