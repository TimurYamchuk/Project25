#include "Windows.h"
#include "windowsx.h"
#include "tchar.h"
#include "string"
using namespace std;

//int leftClicks = 0;
//int rightClicks = 0;
//int middleClicks = 0;
//
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
//{
//    WNDCLASSEX wc = { sizeof(WNDCLASSEX) };
//    wc.style = CS_HREDRAW | CS_VREDRAW;
//    wc.lpfnWndProc = WindowProc;
//    wc.hInstance = hInstance;
//    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
//    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
//    wc.lpszClassName = _T("MainWindowClass");
//
//    if (!RegisterClassEx(&wc))
//        return 0;
//
//    HWND hwnd = CreateWindowEx(
//        0,
//        _T("MainWindowClass"),
//        _T("My first window"),
//        WS_OVERLAPPEDWINDOW,
//        CW_USEDEFAULT, CW_USEDEFAULT,
//        CW_USEDEFAULT, CW_USEDEFAULT,
//        NULL, NULL, hInstance, NULL);
//
//    if (!hwnd)
//        return 0;
//
//    ShowWindow(hwnd, nShowCmd);
//    UpdateWindow(hwnd);
//
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0))
//    {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
//
//    return msg.wParam;
//}
//
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
//{
//    switch (uMsg)
//    {
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        break;
//    case WM_LBUTTONDOWN:
//        leftClicks++;
//        SetWindowText(hwnd, (_T("Left clicks: ") + to_wstring(leftClicks)).c_str());
//        break;
//    case WM_RBUTTONDOWN:
//        rightClicks++;
//        SetWindowText(hwnd, (_T("Right clicks: ") + to_wstring(rightClicks)).c_str());
//        break;
//    case WM_MBUTTONDOWN:
//        middleClicks++;
//        SetWindowText(hwnd, (_T("Middle clicks: ") + to_wstring(middleClicks)).c_str());
//        break;
//    default:
//        return DefWindowProc(hwnd, uMsg, wParam, lParam);
//    }
//
//    return 0;
//}




//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nShowCmd)
//{
//    WCHAR className[] = L"FirstWindow";
//
//    WNDCLASSEX wndClass;
//    wndClass.cbSize = sizeof(WNDCLASSEX);
//    wndClass.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
//    wndClass.hInstance = hInstance;
//    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//    wndClass.hIconSm = NULL;
//    wndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
//    wndClass.cbClsExtra = 0;
//    wndClass.cbWndExtra = 0;
//    wndClass.lpszMenuName = NULL;
//    wndClass.lpszClassName = className;
//
//    wndClass.lpfnWndProc = WindowProc;
//
//    if (!RegisterClassEx(&wndClass)) {
//        return 0;
//    }
//
//    HWND hWnd = CreateWindowEx(
//        0,
//        className,
//        L"My first window",
//        WS_OVERLAPPEDWINDOW,
//        CW_USEDEFAULT, CW_USEDEFAULT, 
//        400, 400, 
//        NULL,
//        NULL,
//        hInstance,
//        NULL
//    );
//
//    ShowWindow(hWnd, nShowCmd);
//    UpdateWindow(hWnd);
//
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        DispatchMessage(&msg);
//    }
//
//    return msg.wParam;
//}
//
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
//{
//    switch (uMsg)
//    {
//    case WM_DESTROY:
//        PostQuitMessage(0); 
//        break;
//    case WM_LBUTTONDOWN:
//        SetWindowText(hwnd, L"Калькулятор");
//        break;
//
//    case WM_RBUTTONDOWN:
//
//        break;
//
//    case WM_MBUTTONDOWN:
//        break;
//
//    case WM_MOUSEMOVE:
//    {
//        int x = GET_X_LPARAM(lParam);
//        int y = GET_Y_LPARAM(lParam);
//
//        break;
//    }
//
//    case WM_RBUTTONUP:
//    {
//        RECT rect;
//        GetWindowRect(hwnd, &rect); 
//
//        int width = rect.right - rect.left;
//        int height = rect.bottom - rect.top;
//
//        MoveWindow(hwnd, rect.left, rect.top, width, height, true);
//        break;
//    }
//
//    case WM_MBUTTONUP:
//    {
//        RECT rect;
//        GetClientRect(hwnd, &rect);
//        break;
//    }
//
//    default:
//        return DefWindowProc(hwnd, uMsg, wParam, lParam);
//    }
//
//    return 0;
//}





LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nShowCmd)
{
    WNDCLASSEX wc = { sizeof(WNDCLASSEX) };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.lpszClassName = L"MainWindowClass";

    RegisterClassEx(&wc);

    HWND hWnd = CreateWindowEx(
        0, L"MainWindowClass", L"My first window", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 500,
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hWnd, nShowCmd);
    UpdateWindow(hWnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    RECT rect;
    GetWindowRect(hwnd, &rect);

    switch (uMsg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_RETURN:
            MoveWindow(hwnd, 0, 0, 300, 300, TRUE);
            break;
        case VK_LEFT:
            MoveWindow(hwnd, rect.left - 20, rect.top, 0, 0, TRUE);
            break;
        case VK_RIGHT:
            MoveWindow(hwnd, rect.left + 20, rect.top, 0, 0, TRUE);
            break;
        case VK_UP:
            MoveWindow(hwnd, rect.left, rect.top - 20, 0, 0, TRUE);
            break;
        case VK_DOWN:
            MoveWindow(hwnd, rect.left, rect.top + 20, 0, 0, TRUE);
            break;
        }
        break;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}