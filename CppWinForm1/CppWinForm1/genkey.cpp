#pragma once
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "genkey.h"


void AliceString(const int n, int* AString)
{
	for (int i = 0; i < n; i++)
		AString[i] = rand() % 2;
}

void AliceBasis(const int n, char* ABasis)
{
	for (int i = 0; i < n; i++)
	{
		switch (rand() % 2) {
		case 0: {ABasis[i] = '+'; break; }
		case 1: {ABasis[i] = 'x'; break; }
		}
	}
}

void AlicePhoton(const int n, int* BString, int* AString, 
	char* ABasis, char* APhoton, char* EBasis, 
	int* EString, char* EPhoton, char* BBasis)
{
	for (int i = 0; i < n; i++)
	{
		if (AString[i] == 0)
		{
			if (ABasis[i] == 'x') { APhoton[i] = '/'; }
			else APhoton[i] = '-';
		}
		if (AString[i] == 1)
		{
			if (ABasis[i] == 'x') { APhoton[i] = '\\'; }
			else APhoton[i] = '|';
		}
	}
	EveString(n, BString, AString, ABasis, APhoton, EBasis, EString, EPhoton, BBasis);
}

void EveBasis(const int n, char* EBasis)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		switch (rand() % 2) {
		case 0: {EBasis[i] = '+'; break; }
		case 1: {EBasis[i] = 'x'; break; }
		}
	}
}

void EveString(const int n, int* BString, int* AString, 
	char* ABasis, char* APhoton, char* EBasis, 
	int* EString, char* EPhoton, char* BBasis)
{
	for (int i = 0; i < n; i++)
	{
		switch (EBasis[i]) {
		case '+': {
			if (APhoton[i] == '-') EString[i] = 0;
			else if (APhoton[i] == '|') EString[i] = 1;
			else EString[i] = rand() % 2;
		}
		case 'x': {
			if (APhoton[i] == '\\') EString[i] = 1;
			else if (APhoton[i] == '/') EString[i] = 0;
			else EString[i] = rand() % 2;
		}
		}
	}
	EvePhoton(n, BString, AString, ABasis, APhoton, EBasis, EString, EPhoton, BBasis);
}

void EvePhoton(const int n, int* BString, int* AString, 
	char* ABasis, char* APhoton, char* EBasis, 
	int* EString, char* EPhoton, char* BBasis)
{
	for (int i = 0; i < n; i++)
	{
		if (EString[i] == 0)
		{
			if (EBasis[i] == 'x') { EPhoton[i] = '/'; }
			else EPhoton[i] = '-';
		}
		if (EString[i] == 1)
		{
			if (EBasis[i] == 'x') { EPhoton[i] = '\\'; }
			else EPhoton[i] = '|';
		}
	}
	BobString(n, BString, AString, ABasis, APhoton, EBasis, EString, EPhoton, BBasis);
}

void BobBasis(const int n, char* BBasis)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		switch (rand() % 2) {
		case 0: {BBasis[i] = '+'; break; }
		case 1: {BBasis[i] = 'x'; break; }
		}
	}
}

void BobString(int const n, int* BString, int* AString, 
	char* ABasis, char* APhoton, char* EBasis, 
	int* EString, char* EPhoton, char* BBasis)
{
	for (int i = 0; i < n; i++)
	{
		switch (BBasis[i]) {
		case '+': {
			if (EPhoton[i] == '-') BString[i] = 0;
			else if (EPhoton[i] == '|') BString[i] = 1;
			else BString[i] = rand() % 2;
		}
		case 'x': {
			if (EPhoton[i] == '\\') BString[i] = 1;
			else if (EPhoton[i] == '/') BString[i] = 0;
			else BString[i] = rand() % 2;
		}
		}
	}
}

void Checking(const int n, char* ABasis, char* BBasis, 
	int* BString, int* newBString, int* AString, 
	int&k, int&check, char* EBasis, int* EString, int* newEString, int&l,
	int&t, int* Key) 
{
	for (int i = 0; i < n; i++)
	{
		if (ABasis[i] == BBasis[i]) {
			newBString[k] = BString[i];
			k++;
			if ((rand() % 2) == (rand() % 2)) {
				if (AString[i] == BString[i]) {
					check++;
				}
			} else {
				Key[t] = BString[i];
				t++;
				if (BBasis[i] == EBasis[i]) {
					newEString[l] = EString[i]; //ÍÀÉÒÈ ÎØÈÁÊÓ Â ÊËÞ×Å ÅÂÛ
					l++;
				}
			}
		}
	}
}