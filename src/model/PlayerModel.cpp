#include "PlayerModel.h"

#include "../player/Defect.h"
#include "../player/Paladin.h"
#include "../player/Silent.h"
#include "../player/Watcher.h"

PlayerModel::PlayerModel()
{
    // m_data.push_back({ .name = "One", .photoLink = "assets/IMG_5479.jfif", .strength = 100 });
    /*
    m_data.push_back({ .name = "Paladin", .photoLink = "qrc:/assets/Paladin.png", .strength = 200 });
    m_data.push_back({ .name = "Silent", .photoLink = "qrc:/assets/Silent.png", .strength = 200 });
    m_data.push_back({ .name = "Watcher", .photoLink = "qrc:/assets/Watcher.png", .strength = 200 });
    m_data.push_back({ .name = "Defect", .photoLink = "qrc:/assets/Defect.png", .strength = 200 });
    */
    m_data.push_back(std::make_shared<Defect>());
    m_data.push_back(std::make_shared<Paladin>());
    m_data.push_back(std::make_shared<Silent>());
    m_data.push_back(std::make_shared<Watcher>());
}

QVariant PlayerModel::data(const QModelIndex& index, int role) const
{
    /*
        switch (role) {
     case 1:
         return m_data.at(index.row()).name;
         break;
     case 2:
         return m_data.at(index.row()).strength;
         break;
     case 3:
         return m_data.at(index.row()).photoLink;
         break;
     default:
         break;
     }
    */
    switch (role) {
    case 1:
        return m_data.at(index.row())->getName();
        break;
    case 2:
        return m_data.at(index.row())->getStrength();
        break;
    case 3:
        return m_data.at(index.row())->getPhotoLink();
        break;
    default:
        break;
    }
}

int PlayerModel::rowCount(const QModelIndex& parent) const
{
    return m_data.size();
}

QHash<int, QByteArray> PlayerModel::roleNames() const
{
    return {
        { (int)PlayerModelItemRole::NameRole, "name" },
        { (int)PlayerModelItemRole::StrengthRole, "strenght" },
        { (int)PlayerModelItemRole::Links, "linkss" }
    };
}
