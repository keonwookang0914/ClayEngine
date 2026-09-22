#include <Windows.h>

#include "Engine/Core/EngineAPI.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR cmdLine, int showCmd)
{
    OutputDebugStringW(L"[Editor] ");
    // Engine.dll 로드 확인
    OutputDebugStringW(GetEngineVersionString());
    OutputDebugStringW(L"\n");

    return 0;
}
