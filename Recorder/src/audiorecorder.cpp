// #include "audiorecorder.h"
// #include <QMediaFormat>
// #include <QFileDialog>
// #include <QUrl>
// #include <QAudioInput>
// #include <QMediaDevices>
// #include <QStandardPaths>

// AudioRecorder::AudioRecorder(QObject *parent) : QObject(parent)
// {
//     recorder = new QMediaRecorder(this);

//     // Set up audio input
//     auto audioInputs = QMediaDevices::audioInputs();
//     if (!audioInputs.isEmpty()) {
//         audioInput = new QAudioInput(audioInputs.first(), this);
//         recorder->setAudioInput(audioInput);
//     } else {
//         qWarning() << "No audio input devices found";
//     }

//     // Set up media format
//     QMediaFormat format;
//     format.setFileFormat(QMediaFormat::MP3);
//     format.setAudioCodec(QMediaFormat::AudioCodec::MP3);
//     recorder->setMediaFormat(format);

//     // Set quality
//     recorder->setQuality(QMediaRecorder::Quality::HighQuality);

//     // Set encoding mode (if needed)
//     // recorder->setEncodingMode(QMediaRecorder::ConstantQualityEncoding);

//     // Set other properties if needed
//     // recorder->setAudioSampleRate(44100);
//     // recorder->setAudioBitRate(128000);
// }

// void AudioRecorder::startRecording()
// {
//     QString defaultPath = QStandardPaths::writableLocation(QStandardPaths::MusicLocation);
//     QString fileName = QFileDialog::getSaveFileName(nullptr, tr("Save Audio"), defaultPath, tr("Audio Files (*.mp3)"));
//     if (fileName.isEmpty())
//         return;

//     recorder->setOutputLocation(QUrl::fromLocalFile(fileName));
//     recorder->record();
//     qDebug() << "Started Recording, Storing at, " << fileName;
// }

// void AudioRecorder::stopRecording()
// {
//     qDebug() << "Stopped Recording";
//     recorder->stop();
// }
