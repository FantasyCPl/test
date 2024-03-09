#pragma once

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>

class App : public QObject
{
    Q_OBJECT
public:
    App(int argc, char *argv[]);
    int run();
private:
    void initSignals();

private:
    QGuiApplication m_app;
    QQmlApplicationEngine m_engine;
};
