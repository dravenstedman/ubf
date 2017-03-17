// tokenizer.hpp
// just a declaration for the tokenizer.

#include <vector>
#include <string>

std::vector<std::string> tokenize ( std::string s, std::string d=" " );
bool is_whitespace(std::string& str);
bool is_newline(std::string& str);
std::string strip (std::string str, const char* delimiter  )
