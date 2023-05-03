add_library(utils src/utils.cpp)

set(WT_PROJECT_SOURCE
utils.hpp
utils.cpp
)

include_directories(/usr/local/include/Wt)

target_include_directories(utils PUBLIC include)