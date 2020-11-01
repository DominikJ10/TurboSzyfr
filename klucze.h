#ifndef KLUCZE_H
#define KLUCZE_H

#include <QString>
#include <cryptopp820/cryptlib.h>
#include <cryptopp820/rsa.h>

void GenerateKeys();

void EncodePrivateKey(const std::string& filename, const CryptoPP::RSA::PrivateKey& key);

void EncodePublicKey(const std::string& filename, const CryptoPP::RSA::PublicKey& key);

void Encode(const std::string& filename, const CryptoPP::BufferedTransformation& bt);

void SaveHexPrivateKey(const std::string& filename, const CryptoPP::PrivateKey& key);

void SaveHexPublicKey(const std::string& filename, const CryptoPP::PublicKey& key);

void SaveHex(const std::string& filename, const CryptoPP::BufferedTransformation& bt);

#endif // KLUCZE_H
