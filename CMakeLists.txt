cmake_minimum_required(VERSION 3.16)

project(Test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

include_directories(${PROJECT_SOURCE_DIR}/src)

qt_add_executable(appTest
    src/main.cpp
    src/App.h
    src/App.cpp
    src/model/CardModel.h src/model/CardModel.cpp
    src/model/PlayerModel.h src/model/PlayerModel.cpp
    src/TileImageProvider.h src/TileImageProvider.cpp
    src/player/Player.h src/player/Player.cpp
    src/player/Defect.h src/player/Defect.cpp
    src/player/Paladin.h src/player/Paladin.cpp
    src/player/Silent.h src/player/Silent.cpp
    src/player/Watcher.h src/player/Watcher.cpp
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

qt6_add_resources(appTest "scenes"
    FILES
    src/qml/scenes/ChoosePlayerScene.qml
)

qt6_add_resources(appTest "assets"
    FILES
    "assets/IMG_5479.jfif"
    "assets/Paladin.png"
    "assets/Defect.png"
    "assets/Silent.png"
    "assets/Watcher.png"

)



