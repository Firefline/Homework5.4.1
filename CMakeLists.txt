find_package(Catch2 CONFIG REQUIRED)
# These tests can use the Catch2-provided main
add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)