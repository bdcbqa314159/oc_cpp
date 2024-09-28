project(oc_cpp_part_2)

set(EXE_1 using_string)
set(EXE_2 the_sl)
set(EXE_3 the_stl)

set(EXE_SOURCES_1 using_string.cpp)
set(EXE_SOURCES_2 the_sl.cpp)
set(EXE_SOURCES_3 the_stl.cpp)

add_executable(${EXE_1} ${EXE_SOURCES_1})
add_executable(${EXE_2} ${EXE_SOURCES_2})
add_executable(${EXE_3} ${EXE_SOURCES_3})

add_subdirectory(classes)
add_subdirectory(operators)
add_subdirectory(inheritance)
add_subdirectory(polymorphism)
add_subdirectory(project_4)
add_subdirectory(statics)
add_subdirectory(friendship)
add_subdirectory(project_5)
