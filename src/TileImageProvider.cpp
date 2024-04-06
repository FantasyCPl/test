#include "TileImageProvider.h"

TileImageProvider::TileImageProvider()
    : QQuickImageProvider(ImageType::Image)
{
}

QImage TileImageProvider::requestImage(const QString& id, QSize* size, const QSize& requestedSize)
{
    auto img = QImage(":/assets/Paladin.png");
    return img.copy(0, 0, 350, 250);
}
