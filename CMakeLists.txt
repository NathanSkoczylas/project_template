# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# C++ Version
set(CMAKE_CXX_STANDARD 20)

# Set project name
project(
	project_name
	VERSION 1.0.0
	DESCRIPTION "Project Description"
)

# Set the projects root directory
message ("\n****************************************")
set(ROOT_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${ROOT_DIR}")
message ("****************************************")


# Add subdirectories
add_subdirectory(code)
