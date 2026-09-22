#pragma once

// DLL export / import
#ifdef ENGINE_EXPORTS
    #define ENGINE_API __declspec(dllexport)
#else
    #define ENGINE_API __declspec(dllimport)
#endif

// 엔진 버전 문자열. 정의는 Private/EnginePCH.cpp
ENGINE_API const wchar_t* GetEngineVersionString();
