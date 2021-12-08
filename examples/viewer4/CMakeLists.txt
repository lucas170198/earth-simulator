project(viewer4)
add_executable(${PROJECT_NAME} main.cpp model.cpp openglwindow.cpp
                               planet.cpp)
enable_abcg(${PROJECT_NAME})
