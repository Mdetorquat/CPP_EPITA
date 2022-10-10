cmake_minimum_required(VERSION 3.0)

project(CARTESIAN_VECTOR_PARAM)

set(HEADERS
	config.h
	vector.hh
	)

add_executable(main main.cc ${HEADERS})
