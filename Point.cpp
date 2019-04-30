/*************************************************************************
	> File Name: Point.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2019年03月21日 14:16:38
 ************************************************************************/

#include<stdio.h>


int a = 0;
int b = 1;
int c = 2;
int d = 3;

int* TestPoint(int nType)
{
	int* pTmp = NULL;

	if(nType == 0)
		pTmp = &a;
	else if(nType == 1)
		pTmp = &b;
	else if(nType == 2)
		pTmp = &c;
	else if(nType == 3)
		pTmp = &d;

	return pTmp;
}

int TestPoint()
{
	printf("a:%p, b:%p, c:%p, d:%p\n", &a, &b, &c, &d);

	int *pObj = NULL;

	pObj = TestPoint(0);
	printf("pObj:%p, *pObj:%d\n", pObj, *pObj);

	pObj = TestPoint(1);
	printf("pObj:%p, *pObj:%d\n", pObj, *pObj);

	pObj = TestPoint(2);
	printf("pObj:%p, *pObj:%d\n", pObj, *pObj);

	pObj = TestPoint(3);
	printf("pObj:%p, *pObj:%d\n", pObj, *pObj);
	
	return 0;
}
