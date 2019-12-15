#include "stdafx.h"
#include "ReparsePoint.h"
int main()
{
	

	ReparsePoint::CreateMountPoint(L"c:\\bear", L"\\??\\c:\\bear2", L"bear");

	
	return 0;
}

