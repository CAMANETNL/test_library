#pragma once

#include "test_library_global.h"
#include <iostream>
#include <thread>

class TestFunction
{
 public:
  // function with parameter(s) ////////////////////////////////////////////////
  static DLLSHARED_EXPORT std::string sleepXMilliSeconds(long long milliSeconds = 0);
  struct DLLSHARED_EXPORT functionWithParameters {
    long long    duration ;
    functionWithParameters(long long duration_) :
    duration(duration_)
    {}
    void operator () ()
    {
     std::this_thread::sleep_for(std::chrono::seconds(duration));
    }
  };

  // function without parameter(s) /////////////////////////////////////////////
  static DLLSHARED_EXPORT std::string sleep1Seconds();
  static DLLSHARED_EXPORT std::string sleep2Seconds();
  static DLLSHARED_EXPORT std::string sleep3Seconds();
};
