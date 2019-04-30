/*************************************************************************
	> File Name: NullPtr.cpp
	> Author: Tim.Ma
	> Mail: mayazong@126.com 
	> Created Time: 2019年03月22日 10:32:12
 ************************************************************************/

#include<iostream>
using namespace std;

class NullPtr
{
public:
	NullPtr(){};
	virtual ~NullPtr(){};

public:
	int GetIndex()
	{
		return m_nIndex;
	}

	void SetIndex(const int& nIndex)
	{
		m_nIndex = nIndex;
	}

private:
	static int m_nIndex;
};


int NullPtr::m_nIndex = 0;


int TestNullPtr()
{
	NullPtr nullPtr;
	nullPtr.SetIndex(5);
	cout << "Index: " << nullPtr.GetIndex() << endl;
	
	NullPtr* pNullPtr = NULL;
	pNullPtr->SetIndex(6);
	cout << "Index1: " << nullPtr.GetIndex() << endl;
	cout << "Index2: " << NullPtr().GetIndex() << endl;
	cout << "Index3: " << pNullPtr->GetIndex() << endl;


	return 0;
}
