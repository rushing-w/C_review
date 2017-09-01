#define _CRT_SECURE_NO_WARNINGS 1

#include"CommentConvert.h"

void CommentConvert(FILE *pfIn, FILE *pfOut)
{
	DoConvert(pfIn, pfOut);
}

void DoConvert(FILE *pfIn, FILE *pfOut)
{
	enum STATE state;
	state = NUL_STA;
	while (state != END_STA)
	{
		switch (state)
		{
		case NUL_STA:
			{
					DoNulConvert(pfIn, pfOut, &state);
			}
			break;
		case C_STA:
			{
					DoCConvert(pfIn, pfOut, &state);
			}
			break;
		case CPP_STA:
			{
					DoCppConvert(pfIn, pfOut, &state);
			}
			break;
		default:
			break;
		}
	}
}

void DoNulConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta)
{
	int first = 0;
	int second = 0;
	first = fgetc(pfIn);
	switch (first)
	{
	case '/':
		{
				second = fgetc(pfIn);
				switch (second)
				{
				case '*':
					{
							fputc('/', pfOut);
							fputc('/', pfOut);
							*psta = C_STA;
					}
					break;
				case '/':
					{
							fputc('/', pfOut);
							fputc('/', pfOut);
							*psta = CPP_STA;
					}
					break;
				default:
					{
							fputc(first, pfOut);
							fputc(second, pfOut);
					}
					break;
				}
		}
		break;
	case EOF:
		{
				fputc(first, pfOut); 
				*psta = END_STA;
		}
		break;
	default:
		fputc(first, pfOut);
		break;
	}
	
}

void DoCConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta)
{
	int first = 0;
	int second = 0;
	int third = 0;
	first = fgetc(pfIn);
	switch (first)
	{
	case '*':
		{
				second = fgetc(pfIn);
				switch (second)
				{
				case '/':
					{
							third = fgetc(pfIn);
							switch (third)
							{
							case '\n':
								{
										 fputc('\n', pfOut);
										 *psta = NUL_STA;
								}
								break;
							default:
								{
									   fputc('\n', pfOut);
									   ungetc(third, pfIn);
								}
								break;
							}
							*psta = NUL_STA;
					}
					break;
				default:
					{
							fputc(first, pfOut); 
							ungetc(second, pfIn); 
					}
					break;
				}
		}
		break;
	case '\n':
		{
				 fputc('\n', pfOut);
				 fputc('/', pfOut);
				 fputc('/', pfOut);
		}
		break;
	default:
		fputc(first, pfOut);
		break;
	}
}

void DoCppConvert(FILE *pfIn, FILE *pfOut, enum STATE *psta)
{
	int first = 0;
	first = fgetc(pfIn);
	switch (first)
	{
	case '\n':
		{
				 fputc('\n', pfOut);
				 *psta = NUL_STA;
		}
		break;
	default:
		fputc(first, pfOut);
		break;
	}
}