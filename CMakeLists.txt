cmake_minimum_required(VERSION 3.16)
project(cursor-reset-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cursorresettool
    src/main.cpp
    src/resetter.cpp
    src/fingerprint.cpp
    src/backup.cpp
)

target_include_directories(cursorresettool PRIVATE include)

if(WIN32)
    target_link_libraries(cursorresettool PRIVATE userenv)
endif()
