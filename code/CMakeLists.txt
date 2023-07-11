# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

# C++ Version
set(CMAKE_CXX_STANDARD 20)

# Set project name
project(
	module_name
	VERSION 1.0.0
	DESCRIPTION "Project Description"
)

# Set the projects root directory
message ("\n****************************************")
set(CODE_DIR ${PROJECT_SOURCE_DIR})
message (" Project Name: ${PROJECT_NAME} \n Root Directory: ${CODE_DIR}")
message ("****************************************")


# Add subdirectories
# NOTE: Will have it's own CMake in that directory
#add_subdirectory(dirName)

# Set sources for bored engine
set(projectSOURCES
	project.cpp
	
	ClassObject.cpp
)

set(projectHEADERS
	ClassObject.hpp
)

# Create executable target
add_executable(${PROJECT_NAME} 
	${projectSOURCES}
	${projectHEADERS}
)

# Set the install directory for the executable
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Debug
	RUNTIME DESTINATION Debug/bin
)
		
install(TARGETS ${PROJECT_NAME}
	CONFIGURATIONS Release
	RUNTIME DESTINATION Release/bin
)