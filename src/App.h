#pragma once

#include <QGuiApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "model/CardModel.h"
#include "model/PlayerModel.h"

#include "TileImageProvider.h"

class App : public QObject
{
    Q_OBJECT

    Q_PROPERTY(Scene scene READ scene WRITE setScene NOTIFY sceneChanged FINAL)
public:
    enum Scene
    {
        ChoosePlayer = 1,
        Room = 2,
    };
    Q_ENUMS(Scene)
    App(int argc, char* argv[]);
    int run();

    Scene scene() const;

signals:
    void sceneChanged();

public slots:
    void setScene(Scene newScene);

private:
    void initSignals();

private:
    CardModel m_model;
    PlayerModel m_playerModel;
    QGuiApplication m_app;
    QQmlApplicationEngine m_engine;
    TileImageProvider m_imgProvider;
    Scene m_scene = Scene::ChoosePlayer;
};
