#include "hashowanie.h"
#include <QString>
#include <cryptopp820/sha.h>
#include <cryptopp820/md5.h>
#include <cryptopp820/hex.h>
#include <stdlib.h>
#include "cryptopp820/cryptlib.h"

QString hashowanieSHA512(QString input)
{
    int length = input.size();
    std::string inputstring = input.toLocal8Bit().constData();
    CryptoPP::byte digest[CryptoPP::SHA512::DIGESTSIZE];
    CryptoPP::SHA512().CalculateDigest(digest, (CryptoPP::byte*) inputstring.c_str(), length);

    CryptoPP::HexEncoder encoder;
    std::string output;

    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();

    return QString::fromStdString(output);
}

QString hashowanieSHA256(QString input)
{
    int length = input.size();
    std::string inputstring = input.toLocal8Bit().constData();
    CryptoPP::byte digest[CryptoPP::SHA256::DIGESTSIZE];
    CryptoPP::SHA256().CalculateDigest(digest, (CryptoPP::byte*) inputstring.c_str(), length);

    CryptoPP::HexEncoder encoder;
    std::string output;

    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();

    return QString::fromStdString(output);
}

QString hashowanieMD5(QString input)
{
    int length = input.size();
    std::string inputstring = input.toLocal8Bit().constData();
    CryptoPP::byte digest[CryptoPP::MD5::DIGESTSIZE];
    CryptoPP::MD5().CalculateDigest(digest, (CryptoPP::byte*) inputstring.c_str(), length);

    CryptoPP::HexEncoder encoder;
    std::string output;

    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();

    return QString::fromStdString(output);
}

/*QString hashowaniewhirlpool(QString input)
{
    int length = input.size();
    std::string inputstring = input.toLocal8Bit().constData();
    CryptoPP::byte digest[CryptoPP::SHA256::DIGESTSIZE];
    CryptoPP::SHA512().CalculateDigest(digest, (CryptoPP::byte*) inputstring.c_str(), length);

    CryptoPP::HexEncoder encoder;
    std::string output;

    encoder.Attach( new CryptoPP::StringSink( output ) );
    encoder.Put( digest, sizeof(digest) );
    encoder.MessageEnd();

    return QString::fromStdString(output);
}*/
