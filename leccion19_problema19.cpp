#include <cmath>
#include <cstdio>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <ctime>
void dado();
int main ()
{
    int v[101]={0};
    int jug1=0, jug2=0;
    srand(time(0));
    //crear tablero
    for (int i=1; i<=100; i++)
    {
        v[i]=i;
    }
    v[12]=23;
    v[26]=48;
    v[45]=67;
    v[59]=96;
    v[15]=5;
    v[25]=12;
    v[47]=16;
    v[99]=46;

    while (jug1<100 && jug2<100)
    {

        jug1+=dado();
        jug1=v[jug1];
        jug2+=dado();
        jug2=v[jug2];
        cout<<"Jugador1: "<<jug1<<"  ";
        cout<<"Jugador2: "<<jug2<<endl;
    }
        if (jug1 >=100)
        {
            cout<<"La Jugador1 gano"<<endl;
        }
        else
        {
            cout<<"La Jugador2 gano"<<endl;
        }
    //cout<<"Juego terminado Gano el jugador "<<jugador<<endl;
    return 0;
}
void dado()
{

    int n=(rand()%6)+1;

}
