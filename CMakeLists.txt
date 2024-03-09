cmake_minimum_required(VERSION 3.16)

project(Test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appTest
    src/main.cpp
    src/App.h
    src/App.cpp
    
)

target_link_libraries(appTest
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appTest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt6_add_resources(appTest "qml"
    FILES
    src/qml/Main.qml
    qtquickcontrols2.conf
)
