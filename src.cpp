#include "./include/iro.hpp"
#include <iostream>
using namespace std;

int main() {
  using namespace Iro;
  cout << endl;
  cout << white("Hi there!✋") << endl;
  cout << bg_white(black("This is C++ terminal output coloring header-library"))
       << endl;
  cout << bg_yellow(red("\\(^u^)/")) << endl;
  cout << endl;

  cout << "    Coloring Type"
       << " | "
       << "  black"
       << "    red"
       << "  green"
       << " yellow"
       << "   blue"
       << " magenta"
       << "   cyan"
       << "  white" << endl;
  cout << "--------------------------------------------------------------------"
          "---------"
       << endl;
  cout << "      Normal Text"
       << " | " << black("  black") << red("    red") << green("  green")
       << yellow(" yellow") << blue("   blue") << magenta(" magenta")
       << cyan("   cyan") << white("  white") << endl;
  cout << "       Background"
       << " | " << bg_black("  black") << bg_red("    red")
       << bg_green("  green") << bg_yellow(" yellow") << bg_blue("   blue")
       << bg_magenta(" magenta") << bg_cyan("   cyan") << bg_white("  white")
       << endl;
  cout << "      Bright Text"
       << " | " << br_black("  black") << br_red("    red")
       << br_green("  green") << br_yellow(" yellow") << br_blue("   blue")
       << br_magenta(" magenta") << br_cyan("   cyan") << br_white("  white")
       << endl;
  cout << "Bright Background"
       << " | " << bg_br_black("  black") << bg_br_red("    red")
       << bg_br_green("  green") << bg_br_yellow(" yellow")
       << bg_br_blue("   blue") << bg_br_magenta(" magenta")
       << bg_br_cyan("   cyan") << bg_br_white("  white") << endl;

  return 0;
}
