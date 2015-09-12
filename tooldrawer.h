// This file is a part of "grblControl" application.
// Copyright 2015 Hayrullin Denis Ravilevich

#ifndef TOOLDRAWER_H
#define TOOLDRAWER_H

#include <QVector3D>
#include <QTimer>
#include "shaderdrawable.h"

class ToolDrawer : public ShaderDrawable
{
public:
    explicit ToolDrawer();

    double toolDiameter() const;
    void setToolDiameter(double toolDiameter);

    double toolLength() const;
    void setToolLength(double toolLength);

    QVector3D toolPosition() const;
    void setToolPosition(const QVector3D &toolPosition);

    double rotationAngle() const;
    void setRotationAngle(double rotationAngle);
    void rotate(double angle);

    double toolAngle() const;
    void setToolAngle(double toolAngle);

signals:

public slots:

protected:
    bool updateData();

private:
    double m_toolDiameter;
    double m_toolLength;
    double m_endLength;
    QVector3D m_toolPosition;
    double m_rotationAngle;
    double m_toolAngle;

    double normalizeAngle(double angle);
    QVector<VertexData> createCircle(QVector3D center, double radius, int arcs, QVector3D color);
};

#endif // TOOLDRAWER_H
