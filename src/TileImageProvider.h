#pragma once

#include <QObject>
#include <QQuickImageProvider>

class TileImageProvider : public QQuickImageProvider
{
    Q_OBJECT
public:
    TileImageProvider();
    QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize) override;
};
