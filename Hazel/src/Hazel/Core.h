#pragma once

#ifdef  HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API _declspec(dllexport)
	#else
		#define HAZEL_API _declspec(dllimport)
	#endif
#else
	#error Hzel only support Windows!
#endif // ! HZ_PLATFORM_WINDOWS
