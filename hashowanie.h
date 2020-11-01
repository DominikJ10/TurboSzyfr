#ifndef HASHOWANIE_H
#define HASHOWANIE_H

#include <QString>

QString hashowanieSHA512(QByteArray input);


QString hashowanieSHA256(QByteArray input);


QString hashowanieMD5(QByteArray input);


QString hashowanieSHA1(QByteArray input);



#endif // HASHOWANIE_H
