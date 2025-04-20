/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QFrame *frame;
    QLabel *background_image;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(800, 480);
        LoginWidget->setMinimumSize(QSize(800, 480));
        LoginWidget->setMaximumSize(QSize(800, 480));
        LoginWidget->setStyleSheet(QString::fromUtf8("\n"
"/* \347\252\227\345\217\243 */\n"
"QFrame#frame {\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-radius:50px\n"
"}\n"
"/* \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"QLabel#background_image {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/sky.jpg) 0 0 0 0 stretch stretch;\n"
"	border-bottom-left-radius: 50px;\n"
"	border-bottom-right-radius: 50px;\n"
"}"));
        frame = new QFrame(LoginWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        background_image = new QLabel(frame);
        background_image->setObjectName("background_image");
        background_image->setGeometry(QRect(0, 50, 800, 430));

        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "LoginWidget", nullptr));
        background_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
