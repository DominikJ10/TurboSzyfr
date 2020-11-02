#include <QString>
#include <cezar.h>
#include <QChar>
#include "stdlib.h"


QString cezar(QString text, int s)
{
    QString result = "";
    QChar tempqchar;
    int tempint, index;
    QString alfabet = "aąbcćdeęfghijklłmnńoópqrsśtuvwxyzźżAĄBCĆDEĘFGHIJKLŁMNŃOÓPQRSŚTUVWXYZŹŻ"; //A = 36 Ż = 70
    //35 + 35


    for (int i=0;i<text.length();i++)
    {

        tempqchar = text[i];
        tempint = tempqchar.QChar::unicode();


        index = alfabet.indexOf(text[i]);

        if(index == -1) //czy znak
        {
            if(tempint == 9 || tempint == 10 || tempint == 13 || tempint == 32)
                result += tempint;
        }

        else
        {
            if(index + s >= 70) //czy wyjechało
                result += alfabet[((index+s)%70) + 35];
        else
        result += alfabet[((index+s)%70)];
        }

    }

    return result;
}
