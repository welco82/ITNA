#include <windows.h>
#include <stdio.h>

// Khai báo hàm CheckRemoteDebuggerPresent nếu cần
BOOL WINAPI CheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent);

int main() {
    BOOL isDebuggerPresent = FALSE;
    HANDLE hProcess = GetCurrentProcess();

    if (!CheckRemoteDebuggerPresent(GetCurrentProcess(), &isDebuggerPresent)) {
        printf("Khong the kiem tra trinh go loi tu xa\n");
        return 1;
    }

    // Nếu isDebuggerPresent là TRUE, có remote debugger đang chạy
    if (isDebuggerPresent) {
            printf("Co trinh go loi tu xa dang hoat dong.\n");
    } 

    else {
        printf("Khong co trinh go loi tu xa hoat dong.\n");
    }

    return 0;
}
