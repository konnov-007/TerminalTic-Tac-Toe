#include <Windows.h>
void cursorHide(bool cursor)
{
void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO structCursorInfo;
GetConsoleCursorInfo(handle,&structCursorInfo);
if(cursor==false)
	structCursorInfo.bVisible = FALSE;
if(cursor==true)
	structCursorInfo.bVisible = TRUE;
SetConsoleCursorInfo( handle, &structCursorInfo );

}
