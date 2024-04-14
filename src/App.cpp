#include "App.h"

App::App(int argc, char* argv[])
    : m_app(argc, argv)
{
}

int App::run()
{
    qmlRegisterType<App>("com.game.Scene", 1, 0, "AppScene");
    m_engine.rootContext()->setContextProperty("App", this);
    m_engine.rootContext()->setContextProperty("CardModel", &m_model);
    m_engine.rootContext()->setContextProperty("PlayerModel", &m_playerModel);

    m_engine.addImageProvider("assets", &m_imgProvider);

    initSignals();

    m_engine.load(":/src/qml/Main.qml");

    return m_app.exec();
}

void App::initSignals()
{
    QObject::connect(
        &m_engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &m_app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
}

App::Scene App::scene() const
{
    return m_scene;
}

void App::setScene(Scene newScene)
{
    if (m_scene == newScene)
        return;
    m_scene = newScene;
    emit sceneChanged();
}
