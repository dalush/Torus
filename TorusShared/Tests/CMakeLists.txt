file(GLOB_RECURSE TORUS_SHARED_TESTS_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(TorusSharedTests ${TORUS_SHARED_TESTS_FILES})

target_link_libraries(TorusSharedTests PRIVATE TorusShared)