cmake_minimum_required(VERSION 3.14)

project(OpenCVRecorder LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Explicitly set OpenCV_DIR
set(OpenCV_DIR "C:/opencv/build")

find_package(OpenCV REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Quick Multimedia Widgets)

set(PROJECT_SOURCES
    src/main.cpp
    src/videorecorder.cpp
    src/audiorecorder.cpp
)


qt_add_executable(OpenCVRecorder
    ${PROJECT_SOURCES}
)

qt_add_qml_module(OpenCVRecorder  # Changed to match the executable target
    URI OpenCVRecorder
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
        qml/PlayAudio.qml
        qml/PlayerWindow.qml
)


target_link_libraries(OpenCVRecorder
    PRIVATE Qt6::Core Qt6::Quick Qt6::Multimedia Qt6::Widgets ${OpenCV_LIBS}
)

target_include_directories(OpenCVRecorder PRIVATE ${OpenCV_INCLUDE_DIRS})

install(TARGETS OpenCVRecorder
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
