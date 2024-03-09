#pragma once

#include <QAbstractListModel>
#include <QObject>

class CardModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum class CardModelItemRole
    {
        NameRole = Qt::DisplayRole + 1
    };

    CardModel();
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    QHash<int, QByteArray> roleNames() const override;

private:
    std::vector<QString> m_names;
};
