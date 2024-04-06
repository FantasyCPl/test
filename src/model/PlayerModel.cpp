#include "PlayerModel.h"

#include "player/Defect.h"
#include "player/Paladin.h"
#include "player/Silent.h"
#include "player/Watcher.h"

PlayerModel::PlayerModel()
{
    m_data.push_back(std::make_shared<Defect>());
    m_data.push_back(std::make_shared<Paladin>());
    m_data.push_back(std::make_shared<Silent>());
    m_data.push_back(std::make_shared<Watcher>());
}

QVariant PlayerModel::data(const QModelIndex& index, int role) const
{
    switch (PlayerModelItemRole(role)) {
    case PlayerModelItemRole::NameRole:
        return m_data.at(index.row())->getName();
        break;
    case PlayerModelItemRole::StrengthRole:
        return m_data.at(index.row())->getStrength();
        break;
    case PlayerModelItemRole::Links:
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
