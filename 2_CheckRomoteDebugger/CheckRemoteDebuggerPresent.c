#include <windows.h>
#include <stdio.h>

// Khai báo hàm CheckRemoteDebuggerPresent nếu cần
BOOL WINAPI CheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent);

int main() {
    BOOL isDebuggerPresent = FALSE;
    HANDLE hProcess = GetCurrentProcess();

    // Kiểm tra xem có trình gỡ lỗi từ xa đang gắn vào quá trình này không
    if (CheckRemoteDebuggerPresent(hProcess, &isDebuggerPresent)) {
        if (isDebuggerPresent) {
            printf("Debugger detected.\n");
        } else {
            printf("Successfully accessed.\n");
        }
    } else {
        printf("Failed to check for debugger presence.\n");
    }

    // Đóng handle của tiến trình
    CloseHandle(hProcess);

    return 0;
}
