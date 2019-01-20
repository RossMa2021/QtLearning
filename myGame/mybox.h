#ifndef MYBOX_H
#define MYBOX_H

#include <QGraphicsObject>
#include <QGraphicsItemGroup>

// 小方块类
class OneBox : public QGraphicsObject
{
public:
    OneBox(const QColor &color = Qt::red);//构造函数
    QRectF boundingRect() const; //表示所有绘制的边界
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QPainterPath shape() const;

private:
    QColor brushColor;

};

// 方块组类
class BoxGroup : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT

public:
    enum BoxShape {IShape, JShape, LShape, OShape, SShape,
                       TShape, ZShape, RandomShape};

    BoxGroup();
    QRectF boundingRect() const; //在函数后用const表示不能改变类的成员
    bool isColliding();
    void createBox(const QPointF &point = QPointF(0, 0), BoxShape shape = RandomShape);
    void clearBoxGroup(bool destroyBox = false);
    BoxShape getCurrentShape() {return currentShape;}

protected:
    void keyPressEvent(QKeyEvent *event);

signals:
    void needNewBox();
    void gameFinished();

public slots:
    void moveOneStep();
    void startTimer(int interval);
    void stopTimer();

private:
    BoxShape currentShape;
    QTransform oldTransform;
    QTimer *timer;
};
#endif // MYBOX_H
