#pragma once

// Win32
#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
    #define NOMINMAX
#endif
#include <Windows.h>
#include <wrl/client.h>

// D3D12
#include <d3d12.h>
#include <dxgi1_6.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

// STL
#include <cstdint>
#include <cmath>
#include <memory>
#include <string>
#include <vector>
#include <array>
#include <unordered_map>
#include <functional>
#include <algorithm>

// Engine
#include "Engine/Core/EngineAPI.h"
