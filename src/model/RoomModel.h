#pragma once

#include <QAbstractListModel>
#include <QObject>

class RoomModel : public QAbstractListModel
{
    Q_OBJECT
public:
    RoomModel();
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    QHash<int, QByteArray> roleNames() const override;

private:
};
