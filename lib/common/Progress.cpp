#include <vapor/Progress.h>

std::function<void(std::string, long, bool)> Progress::Begin;
std::function<bool(long)> Progress::Update;
std::function<void()>     Progress::Finish;
