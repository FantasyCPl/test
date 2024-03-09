#pragma once

#include <QGuiApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "model/CardModel.h"

class App : public QObject
{
    Q_OBJECT
public:
    App(int argc, char* argv[]);
    int run();

private:
    void initSignals();

private:
    CardModel m_model;
    QGuiApplication m_app;
    QQmlApplicationEngine m_engine;
};
