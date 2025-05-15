#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    int response = MessageBox(
        NULL,
        "!!! WARNING !!!\n\nThis program looks suspicious.\n\nWould you like to run this malware?",
        "Security Alert",
        MB_YESNO | MB_ICONWARNING
    );

    if (response == IDYES) {
        MessageBox(NULL, "Malware is now running... Just kidding! This is a harmless prank.", "Running...", MB_OK | MB_ICONINFORMATION);
    } else {
        MessageBox(NULL, "You chose wisely. Exiting safely.", "Exit", MB_OK | MB_ICONINFORMATION);
    }

    return 0;
}
