cmake_minimum_required(VERSION 2.8)
project(daytime_client)
find_package(Boost)
find_package(Boost COMPONENTS regex system filesystem 
	REQUIRED)
include_directories(Boost_INCLUDE_DIR)
set(sources
	appMain.cpp)
set(headers)
add_executable(daytime_client ${sources})
target_link_libraries(daytime_client 
	${Boost_FILESYSTEM_LIBRARY}
	${Boost_SYSTEM_LIBRARY}
	${Boost_REGEX_LIBRARY}
	#${Boost_THREAD_LIBRARY}
	pthread
	)
