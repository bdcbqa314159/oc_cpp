project(project_5)

set(CLASSES_SOURCES main.cpp fraction.cpp)
set(INCLUDE_DIRECTORIES ./)

include_directories(${INCLUDE_DIRECTORIES})
add_executable(${PROJECT_NAME} ${CLASSES_SOURCES})
