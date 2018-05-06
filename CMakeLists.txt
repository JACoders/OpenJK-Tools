cmake_minimum_required(VERSION 3.1)
project(OpenJK-Tools)

if(WIN32)
	add_subdirectory(Assimilate)
	add_subdirectory(ModView)
endif()

add_subdirectory(Ibize)
