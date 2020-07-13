#pragma once

#include <string>
#include <functional>

namespace Progress {

extern std::function<void(std::string, long, bool)> Begin;
extern std::function<bool(long)> Update;
extern std::function<void()> Finish;

}
