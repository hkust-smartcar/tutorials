/* address.h */
/* DO NOT CHANGE ANYTHING */
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#ifndef __ADDRESS_H_
#define __ADDRESS_H_

struct Entry{
  Entry(std::string name, int* addr) :
	name_(name),
	addr_(addr){}
  std::string name_{};
  int* addr_ = nullptr;
};

class Address{
  public:

  /**
   * @brief Parse the arguments input by user
   *
   * Three commands supported:
   *
   * >add <name> <init value>
   * Corresponds to add_entry(std::string name, int value)
   *
   * >del <address>
   * Corresponds to del_entry(int* address)
   * If del * is entered, it is treated as deleting all addresses
   *
   * >chg <address> <new value>
   * Corresponds to chg_entry(int* address, int value)
   *
   * @param arguments Arguement input
   * @return Whether the arguements are valid
   */
  static bool parse_arg(const std::vector<std::string>& arguments);

  /**
   * @brief Add a variable to our memory
   * @param name Variable name
   * @param value Initialzed value
   * @return Whether the action is successful
   */
  static bool add_entry(const std::string& name, const int& value);

  /**
   * @brief Delete a variable from our memory
   * @param address Variable address
   * @return Whether the action is successful
   */
  static bool del_entry(int* address);

  /**
   * @brief Change the value of a variable in our memory
   * @param address Variable address
   * @param value New value
   * @return Whether the action is successful
   */
  static bool chg_entry(int* address, const int& value);

  /**
   * @brief Print entered entries in our memory
   * In format of:
   * <address> "\t" <name> "\t" <value>
   * as specified in main.cpp
   */
  static void print_data();

  /**
   * @brief Convert a string to an integer
   * @param str Input string
   * @param isHex Whether the integer is considered a hexadecimal
   * @return int Converted integer
   * @return bool Whether the action is successful
   */
  static std::pair<int, bool> strtoint(const std::string& str, bool isHex = false){
	int result;
	std::istringstream convert(str);
	if (!isHex){
	  if (!(convert >> result)) return std::make_pair(0, false);
	} else {
      if (!(convert >> std::hex >> result)) return std::make_pair(0, false);
	}
	return std::make_pair(result, true);
  }

  private:
  static std::vector<Entry> entries;
};

#endif
