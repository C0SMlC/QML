#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _0x5f_Recorder_qml_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_VideoRecorder_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_AudioRecorder_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_RecordButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_TimerDisplay_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_FileSaveDialog_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_RadioButtonGroup_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_RecordHistory_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_VideoDisplay_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_PlayAudio_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _0x5f_Recorder_qml_PlayerWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/Main.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/VideoRecorder.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_VideoRecorder_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/AudioRecorder.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_AudioRecorder_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/RecordButton.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_RecordButton_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/TimerDisplay.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_TimerDisplay_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/FileSaveDialog.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_FileSaveDialog_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/RadioButtonGroup.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_RadioButtonGroup_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/RecordHistory.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_RecordHistory_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/VideoDisplay.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_VideoDisplay_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/PlayAudio.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_PlayAudio_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/Recorder/qml/PlayerWindow.qml"), &QmlCacheGeneratedCode::_0x5f_Recorder_qml_PlayerWindow_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appRecorder)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appRecorder))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appRecorder)() {
    return 1;
}
