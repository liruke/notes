#include "A.h"

void AInit(SA* s)
{
	s->a = NULL;
	s->capacity = 0;
	s->size = 0;
}


//≥ı ºªØ
void Aprintf(SA* s)
{
	for (int i = 0;i < s->size;i++)
	{
		printf("%d ", s->a[i]);
	}
}
//¿©»›
void Acapacitycheck(SA* s)
{
	if (s->size == s->capacity)
	{
		int newcapacity = s->capacity == 0 ? 4 : s->capacity * 2;
		IT* tmp = (IT*)realloc(s->a, newcapacity*sizeof(IT));
		if (tmp == NULL)
		{
			printf("realloc file");
			exit(-1);
		}
		else
		{
			s->a = tmp;
			s->capacity = newcapacity;
		}
	}
}
//Œ≤≤Â
void Apushback(SA* s, IT x)
{
	Acapacitycheck(s);
	s->a[s->size] = x;
	s->size++;
}
// ◊≤Â
void Apushfront(SA* s, IT x)
{
	Acapacitycheck(s);
	int end = s->size - 1;
	while (end >= 0)
	{
		s->a[end + 1] = s->a[end];
		end--;
	}
	s->a[0] = x;
	s->size++;
}

//Œ≤…æ
void Apopback(SA* s)
{
	assert(s->size > 0);
	//s->a[s->size - 1] = 0;
	s->size--;
}
void Apopfront(SA* s)
{
	int start = 1;
	assert(s->size > 0);
	while (start < s->size)
	{
		s->a[start - 1] = s->a[start];
		start++;
	}
	s->size--;
}
void Ainsert(SA* s, int pos, IT x)
{
	assert(pos < s->size);
	Acapacitycheck(s);
	int end = s->size - 1;
	while (end >=pos)
	{
		s->a[end + 1] = s->a[end];
		end--;
	}
	s->a[pos] = x;
	s->size++;
}
void Aerase(SA* s, int pos)
{
	assert(pos < s->size && s->size>0);
	int start = pos + 1;
	while (start < s->size)
	{
		s->a[start-1] = s->a[start];
		start++;
	}
	s->size--;
}
//Ω´ø’º‰œ˙ªŸµÙ
void Adestroy(SA* s)
{
	free(s->a);
	s->a = NULL;
	s->capacity = 0;
	s->size = 0;
}
int Afind(SA* s, IT x)
{
	for (int i = 0;i < s->size;i++)
	{
		if (s->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}

void Amodity(SA* s, int pos, IT x)
{
	assert(pos < s->size);
	s->a[pos] = x;
}