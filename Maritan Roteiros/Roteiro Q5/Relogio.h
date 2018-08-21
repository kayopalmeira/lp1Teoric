#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    private:
    int hora;
    int minuto;
    int segundo;

    public:
        Relogio(int h, int m, int s);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHorario(int h, int m, int s);

        void avancarHorario();
};

#endif // RELOGIO_H
