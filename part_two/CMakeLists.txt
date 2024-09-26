project(oc_cpp_part_2)

set(EXE_1 using_string)

# set(EXE_3 io_and_operations) set(EXE_4 project_1) set(EXE_5 some_operations)
# set(EXE_6 conditions) set(EXE_7 loops) set(EXE_8 project_2) set(EXE_9
# functions) set(EXE_11 static_tables) set(EXE_12 files_io) set(EXE_13 pointers)

set(EXE_SOURCES_1 using_string.cpp)

# set(EXE_SOURCES_3 io_and_operations.cpp) set(EXE_SOURCES_4 project_1.cpp)
# set(EXE_SOURCES_5 some_operations.cpp) set(EXE_SOURCES_6 conditions.cpp)
# set(EXE_SOURCES_7 loops.cpp) set(EXE_SOURCES_8 project_2.cpp)
# set(EXE_SOURCES_9 functions.cpp) set(EXE_SOURCES_11 static_tables.cpp)
# set(EXE_SOURCES_12 files_io.cpp) set(EXE_SOURCES_13 pointers.cpp)

add_executable(${EXE_1} ${EXE_SOURCES_1})

# add_executable(${EXE_3} ${EXE_SOURCES_3}) add_executable(${EXE_4}
# ${EXE_SOURCES_4}) add_executable(${EXE_5} ${EXE_SOURCES_5})
# add_executable(${EXE_6} ${EXE_SOURCES_6}) add_executable(${EXE_7}
# ${EXE_SOURCES_7}) add_executable(${EXE_8} ${EXE_SOURCES_8})
# add_executable(${EXE_9} ${EXE_SOURCES_9})

add_subdirectory(classes)
add_subdirectory(operators)
add_subdirectory(inheritance)
add_subdirectory(polymorphism)
add_subdirectory(project_4)
