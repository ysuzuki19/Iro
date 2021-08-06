#include <string>

namespace Iro {
inline std::string black(std::string const &str) {
  return "\033[30m" + str + "\033[m";
}
inline std::string red(std::string const &str) {
  return "\033[31m" + str + "\033[m";
}
inline std::string green(std::string const &str) {
  return "\033[32m" + str + "\033[m";
}
inline std::string yellow(std::string const &str) {
  return "\033[33m" + str + "\033[m";
}
inline std::string blue(std::string const &str) {
  return "\033[34m" + str + "\033[m";
}
inline std::string magenta(std::string const &str) {
  return "\033[35m" + str + "\033[m";
}
inline std::string cyan(std::string const &str) {
  return "\033[36m" + str + "\033[m";
}
inline std::string white(std::string const &str) {
  return "\033[37m" + str + "\033[m";
}

// background colors
inline std::string bg_black(std::string const &str) {
  return "\033[40m" + str + "\033[m";
}
inline std::string bg_red(std::string const &str) {
  return "\033[41m" + str + "\033[m";
}
inline std::string bg_green(std::string const &str) {
  return "\033[42m" + str + "\033[m";
}
inline std::string bg_yellow(std::string const &str) {
  return "\033[43m" + str + "\033[m";
}
inline std::string bg_blue(std::string const &str) {
  return "\033[44m" + str + "\033[m";
}
inline std::string bg_magenta(std::string const &str) {
  return "\033[45m" + str + "\033[m";
}
inline std::string bg_cyan(std::string const &str) {
  return "\033[46m" + str + "\033[m";
}
inline std::string bg_white(std::string const &str) {
  return "\033[47m" + str + "\033[m";
}

// bright colors
inline std::string br_black(std::string const &str) {
  return "\033[90m" + str + "\033[m";
}
inline std::string br_red(std::string const &str) {
  return "\033[91m" + str + "\033[m";
}
inline std::string br_green(std::string const &str) {
  return "\033[92m" + str + "\033[m";
}
inline std::string br_yellow(std::string const &str) {
  return "\033[93m" + str + "\033[m";
}
inline std::string br_blue(std::string const &str) {
  return "\033[94m" + str + "\033[m";
}
inline std::string br_magenta(std::string const &str) {
  return "\033[95m" + str + "\033[m";
}
inline std::string br_cyan(std::string const &str) {
  return "\033[96m" + str + "\033[m";
}
inline std::string br_white(std::string const &str) {
  return "\033[97m" + str + "\033[m";
}

// bright background colors
inline std::string bg_br_black(std::string const &str) {
  return "\033[100m" + str + "\033[m";
}
inline std::string bg_br_red(std::string const &str) {
  return "\033[101m" + str + "\033[m";
}
inline std::string bg_br_green(std::string const &str) {
  return "\033[102m" + str + "\033[m";
}
inline std::string bg_br_yellow(std::string const &str) {
  return "\033[103m" + str + "\033[m";
}
inline std::string bg_br_blue(std::string const &str) {
  return "\033[104m" + str + "\033[m";
}
inline std::string bg_br_magenta(std::string const &str) {
  return "\033[105m" + str + "\033[m";
}
inline std::string bg_br_cyan(std::string const &str) {
  return "\033[106m" + str + "\033[m";
}
inline std::string bg_br_white(std::string const &str) {
  return "\033[107m" + str + "\033[m";
}
}; // namespace Iro
