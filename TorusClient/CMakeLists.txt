file(GLOB_RECURSE TORUS_CLIENT_SRC_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/Src/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/Src/*.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/Src/*.cpp
)

add_library(TorusClient STATIC ${TORUS_CLIENT_SRC_FILES})

include_directories(TorusShared)

target_link_libraries(TorusClient PUBLIC TorusShared)