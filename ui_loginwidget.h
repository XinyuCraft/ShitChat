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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QFrame *frame;
    QLabel *background_image;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QLabel *LoginLabel;
    QLineEdit *UserNameLineEdit;
    QLineEdit *PassWordLineEdit;
    QPushButton *LoginButton;
    QWidget *RegisterPage;
    QLabel *RegisterLabel;
    QLineEdit *lineEdit;

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
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:50px\n"
"}\n"
"\n"
"QWidget#LoginPage {\n"
"}\n"
"\n"
"/* \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"QLabel#background_image {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"							stop: 0 rgb(113, 65, 168), stop: 1 rgba(44, 114, 251, 1));\n"
"	border-radius:50px\n"
"}\n"
"/* \346\240\207\351\242\230 */\n"
"QLabel#TitleLabel {\n"
"\n"
"}\n"
"/* \345\205\263\351\227\255\346\214\211\351\222\256 */\n"
"QPushButton#CloseButton {\n"
"	border: none;\n"
"	background: transparent;\n"
"	qproperty-icon: url(:/image/close.png); \n"
"	qproperty-iconSize: 50px 50px;\n"
"}\n"
"/* \346\234\200\345\260\217\345\214\226\346\214\211\351\222\256 */\n"
"QPushButton#MinimizeButton {\n"
"	border: none;\n"
"	background: transparent;\n"
"	qproperty-icon: url(:/image/minimize.png); \n"
"	qproperty-iconSize: 50px 50px;\n"
"}\n"
"\n"
"/* \347\231\273\345\275\225\346\214\211\351\222\256 */\n"
""
                        "QPushButton#LoginButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"							stop: 0 rgb(113, 65, 168), stop: 1 rgba(44, 114, 251, 1));\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"/* \350\276\223\345\205\245\346\241\206 */\n"
"QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        frame = new QFrame(LoginWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 800, 480));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        background_image = new QLabel(frame);
        background_image->setObjectName("background_image");
        background_image->setGeometry(QRect(0, 0, 400, 480));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(400, 0, 400, 480));
        LoginPage = new QWidget();
        LoginPage->setObjectName("LoginPage");
        LoginLabel = new QLabel(LoginPage);
        LoginLabel->setObjectName("LoginLabel");
        LoginLabel->setGeometry(QRect(50, 40, 300, 100));
        UserNameLineEdit = new QLineEdit(LoginPage);
        UserNameLineEdit->setObjectName("UserNameLineEdit");
        UserNameLineEdit->setGeometry(QRect(60, 170, 280, 40));
        PassWordLineEdit = new QLineEdit(LoginPage);
        PassWordLineEdit->setObjectName("PassWordLineEdit");
        PassWordLineEdit->setGeometry(QRect(60, 250, 280, 40));
        PassWordLineEdit->setFrame(true);
        PassWordLineEdit->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(LoginPage);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(50, 370, 300, 50));
        stackedWidget->addWidget(LoginPage);
        RegisterPage = new QWidget();
        RegisterPage->setObjectName("RegisterPage");
        RegisterLabel = new QLabel(RegisterPage);
        RegisterLabel->setObjectName("RegisterLabel");
        RegisterLabel->setGeometry(QRect(0, 40, 400, 100));
        lineEdit = new QLineEdit(RegisterPage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 240, 181, 41));
        stackedWidget->addWidget(RegisterPage);

        retranslateUi(LoginWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "LoginWidget", nullptr));
        background_image->setText(QString());
        LoginLabel->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Login | \347\231\273\345\275\225</span></p></body></html>", nullptr));
        UserNameLineEdit->setInputMask(QString());
        UserNameLineEdit->setText(QString());
        UserNameLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        PassWordLineEdit->setText(QString());
        PassWordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        RegisterLabel->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Register | \346\263\250\345\206\214</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
