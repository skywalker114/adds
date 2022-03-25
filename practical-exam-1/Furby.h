#ifndef FURBY_H
#define FURBY_H

class Furby
{
    private:
       
    public:
        Furby();
        void play(int minutes) = 0;
        void dance(int minutes) = 0;
};

#endif