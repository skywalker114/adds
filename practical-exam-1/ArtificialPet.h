#ifndef ARTIFICIALPET_H
#define ARTIFICIALPET_H

class ArtificialPet
{
    private:
        int hunger;
    public:
        ArtifiicialPet();
        bool isHungry();
        void feed();
        void play(int minutes);
};

#endif