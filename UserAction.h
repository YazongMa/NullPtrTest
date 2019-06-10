#ifndef __USERACTION_H__
#define __USERACTION_H__

#include <iostream>
#include <string.h>

using namespace std;

#define	d_LAB_STR_SIZE	16

class CUserObject
{
public:
	static void OutToUser(const unsigned int nState, void* pData, unsigned int nSize);
	static void WaitUserInput(const unsigned int nState, void* pData, unsigned int nSize);
};


void
CUserObject::OutToUser(const unsigned int nState, void* pData, unsigned int nSize)
{
	int n = nSize / d_LAB_STR_SIZE;
	cout << "size:"<< n << endl;

	char *pszData = (char *)pData;
	char szText[d_LAB_STR_SIZE] = { 0 };
	for (int i=0; i<n; ++i)
	{
		memset(szText, 0, sizeof(szText));
		memcpy(szText, pszData + i*d_LAB_STR_SIZE, d_LAB_STR_SIZE);

		cout << "OutToUser data:" << szText << endl;
	}
}


void
CUserObject::WaitUserInput(const unsigned int nState, void* pData, unsigned int nSize)
{
}


void TestUserAction()
{
	int n = 5;
	char (*pAry)[d_LAB_STR_SIZE] = new char[n][d_LAB_STR_SIZE];

	memset(pAry, 0, n * d_LAB_STR_SIZE);
	for (int i=0; i<n; ++i)
	{
		sprintf(pAry[i], "%04d%04d%04d%03d", i, i, i, i);
		cout << "current data:" << pAry[i] << endl;
	}
	cout << "--------------------------------" << endl;
	cout << endl;

	CUserObject::OutToUser(1, pAry, n * d_LAB_STR_SIZE);
}
#endif