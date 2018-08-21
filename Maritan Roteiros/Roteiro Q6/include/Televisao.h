#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    private:
    int canal;
    int volume;

    public:
    Televisao(int c, int v);

    int getCanal();
    int getVolume();

    void setCanal(int c);
    void setVolume(int v);

    void AumentarCanal();
    void DiminuirCanal();

    void AumentarVolume();
    void DiminuirVolume();
};

#endif // TELEVISAO_H
