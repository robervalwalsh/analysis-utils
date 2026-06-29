#include "Analysis/Utils/interface/string_utils.h"
#include <sstream>

namespace analysis::utils {
    std::vector<std::string> string_split(const std::string& s, char delim)
    {
        std::vector<std::string> out;
        std::stringstream ss(s);
        std::string item;
        while (std::getline(ss, item, delim)) {
            // if (!token.empty())  // removes empty tokens like "a::b" → ["a","b"] - needed???
                out.push_back(item);
        }
        return out;
    }
} // namespace analysis::utils