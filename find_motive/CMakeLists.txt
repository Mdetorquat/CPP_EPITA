cmake_minimum_required(VERSION 3.0)

# set the project name
project(IS_PRIME)

set(SRCS
    findmotive.cpp
	main.cpp
	)

set(HEADER
    findmotive.h
    )

# add the executable
add_executable(main ${SRCS} ${HEADER})
