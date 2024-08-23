#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "audiorecorder.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);  // Changed from QGuiApplication to QApplication

    QQmlApplicationEngine engine;

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    engine.loadFromModule("Recorder", "Main");

    return app.exec();
}
