cmake_minimum_required(VERSION 3.11)
project(httpserver)
set(sources main.cpp
	Server.cpp
	Reply.cpp
	Request.cpp
	RequestParser.cpp
	RequestHandler.cpp
	Connection.cpp
	ConnectionManager.cpp
	MimeTypes.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} pthread)
