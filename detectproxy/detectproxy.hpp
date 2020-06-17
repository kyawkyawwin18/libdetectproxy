#pragma once

#include <string>
#include <ostream>


std::string detectproxy(std::string const& target_url, std::ostream * log = NULL);
