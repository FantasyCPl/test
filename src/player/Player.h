#pragma once

#include <QObject>

class Player : public QObject
{
    Q_OBJECT
public:
    Player(QString name, QString photoLink, int strength);
    const QString& getName();
    const QString& getPhotoLink();
    int getStrength();

private:
    QString m_name;
    QString m_photoLink;
    int m_strength;
};
