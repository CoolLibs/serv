#pragma once

#include <functional>
#include <string_view>

namespace serv {

struct Get {};

struct Post {};

using RequestHandler = std::function<void(std::string_view)>;

void init(RequestHandler callback);
void shut_down();

} // namespace serv
