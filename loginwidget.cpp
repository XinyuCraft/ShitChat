#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);    //隐藏标题栏（无边框）
    setAttribute(Qt::WA_StyledBackground);      //启用样式背景绘制
    setAttribute(Qt::WA_TranslucentBackground); //背景透明
    setAttribute(Qt::WA_Hover); //启动鼠标悬浮追踪
    this->setMouseTracking(true); //开启鼠标追踪

    isLeftPressd = false;
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::mousePressEvent(QMouseEvent *event) //鼠标按下
{
    switch (event->button()) {
    case Qt::LeftButton: //按下左键
        isLeftPressd = true;
        mouseOffset = event->globalPos() - this->frameGeometry().topLeft(); //记录当前鼠标对于左上角的位置
        break;
    }
}

void LoginWidget::mouseReleaseEvent(QMouseEvent *event) //鼠标抬起
{
    if(event->button() == Qt::LeftButton){
        isLeftPressd = false;
    }
}

void LoginWidget::mouseMoveEvent(QMouseEvent *event) //鼠标移动
{
    // if(!isLeftPressd){
    //     this->mouseWhere(event->globalPos());
    // }

    if(isLeftPressd){ //移动窗口
        move(event->globalPos() - mouseOffset);
        event->accept();
    }
}

bool LoginWidget::event(QEvent *event)
{
    if (event->type() == QEvent::HoverMove) {
        QHoverEvent *hoverEvent = static_cast<QHoverEvent *>(event);
        QMouseEvent mouseEvent(QEvent::MouseMove, hoverEvent->pos(),
                               Qt::NoButton, Qt::NoButton, Qt::NoModifier);
        mouseMoveEvent(&mouseEvent);
    }

    return QWidget::event(event);
}

// void LoginWidget::paintEvent(QPaintEvent *event)
// {
//     QPainter painter(this);
//     painter.setRenderHint(QPainter::Antialiasing);
//     painter.setBrush(QBrush(QColor(255, 255, 255)));
//     painter.setPen(Qt::transparent);
//     QRect rect = this->rect();
//     painter.drawRoundedRect(rect, 15, 15);
// }

// void LoginWidget::mouseWhere(const QPoint& point) //判断鼠标位置
// {
//     QRect rect = this->rect();
//     QPoint topLeft = mapToGlobal(rect.topLeft());

//     int x = point.x();
//     int y = point.y();

//     if(y >= topLeft.y() && y <= topLeft.y() + PADDING){ //判断位置是否为上方
//         location = TOP;
//     }
//     else{ //否则在窗口中央
//         location = CENTER;
//     }
// }

void LoginWidget::on_CloseButton_clicked() //关闭按钮
{
    this->close();
}


void LoginWidget::on_MinimizeButton_clicked() //最小化按钮
{
    this->showMinimized();
}


void LoginWidget::on_toRegisterLabel_linkActivated(const QString &link)
{
    ui->stackedWidget->setCurrentIndex(1);
    isLeftPressd = false; //防止冲突
}


void LoginWidget::on_PasswordCheckBox_stateChanged(int arg1)
{
    if(ui->PasswordCheckBox->isChecked()) {
        ui->PasswordLineEdit->setEchoMode(QLineEdit::Normal);
    }
    else {
        ui->PasswordLineEdit->setEchoMode(QLineEdit::Password);
    }
}


void LoginWidget::on_toRegisterLabel_2_linkActivated(const QString &link)
{
    ui->stackedWidget->setCurrentIndex(0);
    isLeftPressd = false; //防止冲突
}

