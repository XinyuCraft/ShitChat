#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QStyleOption>
#include <QPainter>

#define PADDING 50

enum Location { //鼠标位置
    TOP,
    CENTER
};

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWidget;
}
QT_END_NAMESPACE

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下
    void mouseReleaseEvent(QMouseEvent *event); //鼠标抬起
    void mouseMoveEvent(QMouseEvent *event); //鼠标移动
    bool event(QEvent *event);

    // void paintEvent(QPaintEvent *event);

private:
    void mouseWhere(const QPoint &point);

    bool isLeftPressd; //左键是否按下
    QPoint mouseOffset; //鼠标位置
    Location location;
    Ui::LoginWidget *ui;
};
#endif // LOGINWIDGET_H
