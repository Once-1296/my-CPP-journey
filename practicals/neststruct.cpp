#include <iostream>
struct baap
{
    struct beta
    {
        int w, l, ratio;
    } bet;
};
struct beti
{
    int w, l, ratio;
};
struct maa
{
    struct beti bett;
};
int main()
{
    baap eknumber;
    maa ekknumber;
    eknumber.bet.w = 32767;
    eknumber.bet.l = 0;
    eknumber.bet.ratio = 1;
    std::cout << eknumber.bet.l << "\v" << eknumber.bet.w << "\v" << eknumber.bet.ratio<<std::endl;
    ekknumber.bett.w = 32767;
    ekknumber.bett.l = 0;
    ekknumber.bett.ratio = 1;
    std::cout << eknumber.bet.l << "\v" << eknumber.bet.w << "\v" << eknumber.bet.ratio;
    return 0;
}