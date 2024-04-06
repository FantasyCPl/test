#include "Player.h"

Player::Player(QString name, QString photoLink, int strength)
    : m_name(name)
    , m_photoLink(photoLink)
    , m_strength(strength)
{
}

const QString& Player::getName()
{
    return m_name;
}

const QString& Player::getPhotoLink()
{
    return m_photoLink;
}

int Player::getStrength()
{
    return m_strength;
}
