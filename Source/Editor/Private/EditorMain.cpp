#include <Windows.h>

#include "Engine/Core/EngineModule.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR cmdLine, int showCmd)
{
    OutputDebugStringW(L"[Editor] ");
	// Engine.dll에서 가져온 함수
	// 이 줄이 실행돼야 Engine DLL 로드와 import가 모두 성공했다는 것이다.
    OutputDebugStringW(GetEngineVersionString());
    OutputDebugStringW(L"\n");

    return 0;
}
