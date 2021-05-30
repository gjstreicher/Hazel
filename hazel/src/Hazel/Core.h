#pragma once

#ifdef HZ_PLATFORM_WINDOWS
 #ifdef HZ_BUILD_SO
   #define HAZEL_API __declspec(dllexport)
 #else
   #define HAZEL_API __declspec(dllimport)
 #endif
#elif defined HZ_PLATFORM_LINUX
    #define HAZEL_API
#else
  #define HAZEL_API // This is just here to keep Visaul Studio from complaining
  //#error The platform is not specified  -------- TO BE UNCOMMENTED WHEN YOU ARE COMPILING THIS CODE
#endif
