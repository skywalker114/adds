#include "ArtificialPet.h"

bool ArtificialPet::isHungry()
{
    if (hunger < 0)
    {
        return 0;
    }
    else if (hunger>=10) 
    {
        return -1;
    }
}

void ArtificialPet::feed()
{
    hunger = hunger + hunger*(1/2+1);
}
