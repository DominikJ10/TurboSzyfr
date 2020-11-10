#include <QString>
#include <cryptopp820/rsa.h>
#include <cryptopp820/cryptlib.h>
#include <cryptopp820/osrng.h>
#include <cryptopp820/asn.h>
#include <cryptopp820/rsa.h>
#include <cryptopp820/files.h>
#include <klucze.h>
#include <cryptopp820/hex.h>

void GenerateKeys()
{
    CryptoPP::AutoSeededRandomPool rnd;

    CryptoPP::RSA::PrivateKey rsaPrivate;
    rsaPrivate.GenerateRandomWithKeySize(rnd, 3072);

    CryptoPP::RSA::PublicKey rsaPublic(rsaPrivate);

    //EncodePrivateKey("rsa-private.key", rsaPrivate);
    SaveHexPrivateKey("rsa-private.key", rsaPrivate);
    EncodePublicKey("rsa-public.key", rsaPublic);

}


void EncodePrivateKey(const std::string& filename, const CryptoPP::RSA::PrivateKey& key)
{
    CryptoPP::ByteQueue queue;
    key.DEREncodePrivateKey(queue);

    Encode(filename, queue);
}


void EncodePublicKey(const std::string& filename, const CryptoPP::RSA::PublicKey& key)
{
    CryptoPP::ByteQueue queue;
    key.DEREncodePublicKey(queue);

    Encode(filename, queue);
}


void Encode(const std::string& filename, const CryptoPP::BufferedTransformation& bt)
{
    CryptoPP::FileSink file(filename.c_str());

    bt.CopyTo(file);
    file.MessageEnd();
}

void SaveHexPrivateKey(const std::string& filename, const CryptoPP::PrivateKey& key)
{
    CryptoPP::ByteQueue queue;
    key.Save(queue);

    SaveHex(filename, queue);
}

void SaveHexPublicKey(const std::string& filename, const CryptoPP::PublicKey& key)
{
    CryptoPP::ByteQueue queue;
    key.Save(queue);

    SaveHex(filename, queue);
}

void SaveHex(const std::string& filename, const CryptoPP::BufferedTransformation& bt)
{
    CryptoPP::HexEncoder encoder;

    bt.CopyTo(encoder);
    encoder.MessageEnd();

    //Save(filename, encoder);
}
