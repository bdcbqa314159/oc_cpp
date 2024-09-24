project(inheritance)

set(CLASSES_SOURCES guerrier.cpp magicien.cpp personnage.cpp inheritance.cpp)
set(INCLUDE_DIRECTORIES ./)

include_directories(${INCLUDE_DIRECTORIES})
add_executable(${PROJECT_NAME} ${CLASSES_SOURCES})
