#pragma once
void AliceString(const int n, int* AString);
void AliceBasis(const int n, char* ABasis);
void EveString(const int n, int* BString, int* AString, char* ABasis, char* APhoton, char* EBasis, int* EString, char* EPhoton, char* BBasis);
void EveBasis(const int n, char* EBasis);
void BobBasis(const int n, char* BBasis);
void BobString(int const n, int* BString, int* AString, char* ABasis, char* APhoton, char* EBasis, int* EString, char* EPhoton, char* BBasis);
void AlicePhoton(const int n, int* BString, int* AString, char* ABasis, char* APhoton, char* EBasis, int* EString, char* EPhoton, char* BBasis);
void EvePhoton(const int n, int* BString, int* AString, char* ABasis, char* APhoton, char* EBasis, int* EString, char* EPhoton, char* BBasis);
void Checking(const int n, char* ABasis, char* BBasis, int* BString, int* newBString, int* AString, int&k, int&check, char* EBasis, int* EString, int* newEString, int&l, int&t, int* Key);