cmake_minimum_required(VERSION 3.0)

# set the project name
project(IS_PRIME)

set(SRCS
    isprime.cpp
	main.cpp
	)

set(HEADERS
    isprime.h
	)

# add the executable
add_executable(main ${SRCS} ${HEADERS})
