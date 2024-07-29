#include<windows.h>
#include<stdio.h>
#include<string.h>

int main() {
    if (IsDebuggerPresent()) printf("Debugger detected\n");
    else {
        printf("successfully access\n");
    }
    return 0;
}
