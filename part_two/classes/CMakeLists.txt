project(classes)

set(CLASSES_SOURCES classes.cpp personnage.cpp)
set(INCLUDE_DIRECTORIES ./)

include_directories(${INCLUDE_DIRECTORIES})
add_executable(${PROJECT_NAME} ${CLASSES_SOURCES})
