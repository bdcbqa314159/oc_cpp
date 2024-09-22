set(EXE_10 mini_dist)

set(INCLUDE_FOLDER ./)
set(SOURCES main.cpp math.cpp timing.cpp)

add_executable(mini_dist ${SOURCES})
target_include_directories(mini_dist PUBLIC ${INCLUDE_FOLDER})
