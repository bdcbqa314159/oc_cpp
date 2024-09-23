project(operators)

set(CLASSES_SOURCES operators.cpp duree.cpp)
set(INCLUDE_DIRECTORIES ./)

include_directories(${INCLUDE_DIRECTORIES})
add_executable(${PROJECT_NAME} ${CLASSES_SOURCES})