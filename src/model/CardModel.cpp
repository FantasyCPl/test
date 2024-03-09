#include "CardModel.h"

CardModel::CardModel()
{
    m_names.push_back("text");
    m_names.push_back("names");
}

QVariant CardModel::data(const QModelIndex& index, int role) const
{
    return m_names.at(index.row());
}

int CardModel::rowCount(const QModelIndex& parent) const
{
    return m_names.size();
}

QHash<int, QByteArray> CardModel::roleNames() const
{
    return {
        { (int)CardModel::CardModelItemRole::NameRole, "name" }
    };
}
