set(EXE_14 project_3)

set(INCLUDE_FOLDER ./)
set(SOURCES main.cpp)

add_executable(project_3 ${SOURCES})
target_include_directories(project_3 PUBLIC ${INCLUDE_FOLDER})
