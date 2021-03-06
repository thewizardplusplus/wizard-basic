#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <sstream>

namespace thewizardplusplus {
namespace wizard_basic {
namespace framework {
namespace utils {

template<typename Type>
std::string ConvertToString(Type value) {
	std::ostringstream out;
	out << value;

	return out.str();
}

extern "C" float ProcessAppPath(const char* path);
extern "C" void ProcessError(const std::string& description);

}
}
}
}
#endif
