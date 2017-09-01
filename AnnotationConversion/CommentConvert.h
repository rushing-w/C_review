#ifndef __COMMENTCOMVERT_H__
#define __COMMENTCOMVERT_H__

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>


enum STATE
{
	NUL_STA,
	C_STA,
	CPP_STA,
	END_STA
};

void CommentConvert(FILE *pfIn, FILE *pfOut);
void DoConvert(FILE *pfIn, FILE *pfOut);
void DoNulConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta);
void DoCConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta);
void DoCppConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta);

#endif //__COMMENTCOMVERT_H__!
