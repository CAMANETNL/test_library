#include "test_function.h"

// function with parameter(s) ////////////////////////////////////////////////
std::string TestFunction::sleepXMilliSeconds(long long milliSeconds)
{
 std::this_thread::sleep_for(std::chrono::milliseconds(milliSeconds));
 return
 std::string("\"")
 + __PRETTY_FUNCTION__
 + std::string("\" returns after ")
 + std::to_string(milliSeconds)
 + std::string(" millisec");
}

// function without parameter(s) /////////////////////////////////////////////
std::string TestFunction:: sleep1Seconds()
{
 return sleepXMilliSeconds(1000);
}

std::string TestFunction::sleep2Seconds()
{
 return sleepXMilliSeconds(2000);
}

std::string TestFunction:: sleep3Seconds()
{
 return sleepXMilliSeconds(3000);
}
