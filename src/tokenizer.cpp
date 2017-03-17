#include <iostream>
#include <string>
#include <cstring>
#include <vector>

std::vector<std::string> tokenize(std::string s, std::string d=" ") {
  // tokenize (string s, string d)
  // s - string you want to tokenize
  // d - delimiters to be used, defaults to space
  // returns a vector with the tokenized form of the string s passed to it.
  // also effectively a string-split function implementation
  std::vector<std::string> newS;
  char * bar;
  char foo[s.length()];
  std::strcpy(foo, s.c_str());
  bar = std::strtok(foo, d.c_str());
  while (bar != NULL)
  {
    newS.push_back(std::string(bar));
    bar = std::strtok(NULL, d.c_str());
  }
  delete [] bar;
  return newS;
}

bool is_whitespace(std::string& str)
{
    std::size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(' ');
    std::string fbar = str.substr(first, (last-first+1));
    return fbar.empty();
}

bool is_newline(std::string& str)
{
    std::size_t first = str.find_first_not_of('\n');
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of('\n');
    std::string fbar = str.substr(first, (last-first+1));
    return fbar.empty();
}

std::string strip(std::string str, const char* delimiter)
{
    // strip (string, delimiter)
    // Strips the string of whatever delimiter you said and then returns the
    // new string.
    size_t first = str.find_first_not_of(delimiter);
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(delimiter);
    return str.substr(first, (last-first+1));
}
