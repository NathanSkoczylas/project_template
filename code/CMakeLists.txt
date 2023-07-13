# Minimum version of cmake required
cmake_minimum_required(VERSION 3.25)

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

# Set sources for project
set(projectSOURCES
	project.cpp
	
	ClassObject.cpp
)

# Set headers for project
set(projectHEADERS
	ClassObject.hpp
)

# Create executable target
add_executable(${PROJECT_NAME} 
	${projectSOURCES}
	${projectHEADERS}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} 
	
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