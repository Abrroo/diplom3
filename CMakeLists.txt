cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(diplom3)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(transportLibrary SHARED 
									Races.h Races.cpp
									transport.h transport.cpp
									groundtransport.h groundtransport.cpp
									airtransport.h airtransport.cpp
									allterrainboots.h allterrainboots.cpp
									broom.h broom.cpp
									camel.h camel.cpp
									centaur.h centaur.cpp
									eagle.h eagle.cpp
									fastcamel.h fastcamel.cpp
									magiccarper.h magiccarper.cpp
									)
add_executable(RaceSim diplom3.cpp)
target_link_libraries(RaceSim transportLibrary)