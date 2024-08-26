cmake_minimum_required(VERSION 3.16)
project(Recorder VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.7.2 REQUIRED COMPONENTS Quick Multimedia Widgets)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appRecorder
    src/main.cpp
    src/videorecorder.cpp
    src/audiorecorder.cpp
)

qt_add_qml_module(appRecorder
    URI Recorder
    VERSION 1.0
    QML_FILES
        qml/Main.qml
        qml/VideoRecorder.qml
        qml/AudioRecorder.qml
        qml/RecordButton.qml
        qml/TimerDisplay.qml
        qml/FileSaveDialog.qml
        qml/RadioButtonGroup.qml
        qml/RecordHistory.qml
        qml/VideoDisplay.qml
        QML_FILES qml/PlayAudio.qml
        QML_FILES qml/PlayerWindow.qml
        RESOURCES qml/resources.qrc
)

set_target_properties(appRecorder PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appRecorder
    PRIVATE Qt6::Quick Qt6::Multimedia Qt6::Widgets
)

include(GNUInstallDirs)
install(TARGETS appRecorder
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
