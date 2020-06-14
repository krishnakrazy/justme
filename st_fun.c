#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void fun(void);
void fun2(void);
static void s_fun(void);

void fun(void)
{
	printf("\n Inside fun\n");
}

static void s_fun(void)
{
	printf("\n Inside s_fun\n");
}

void fun2(void)
{
	printf("\n Inside fun2\n");
	s_fun();
}

int main(void)
{
	fun();
	s_fun();
	fun2();
}
