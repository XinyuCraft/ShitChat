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
#include <QtWidgets/QCheckBox>
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
    QLineEdit *PasswordLineEdit;
    QPushButton *LoginButton;
    QLabel *toRegisterLabel;
    QCheckBox *PasswordCheckBox;
    QWidget *RegisterPage;
    QLabel *RegisterLabel;
    QLineEdit *UserNameLineEdit_reg;
    QLineEdit *EmailLineEdit_reg;
    QLineEdit *PasswordLineEdit_reg;
    QPushButton *RegisterButton;
    QLabel *toRegisterLabel_2;
    QLineEdit *VerificationCodeLineEdit;
    QPushButton *GetVerificationCodeButton;
    QCheckBox *PasswordCheckBox_reg;
    QPushButton *CloseButton;

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
"\n"
"/* \345\205\263\351\227\255\346\214\211\351\222\256 */\n"
"QPushButton#CloseButton {\n"
"	border: none;\n"
"	background: transparent;\n"
"	qproperty-icon: url(:/image/close.png); \n"
"	qproperty-iconSize: 50px 50px;\n"
"}\n"
"\n"
"/* \346\234\200\345\260\217\345\214\226\346\214\211\351\222\256 */\n"
"QPushButton#MinimizeButton {\n"
"	border: none;\n"
"	background: transparent;\n"
"	qproperty-icon: url(:/image/minimize.png); \n"
"	qproperty-iconSize: 50px 50px;\n"
"}\n"
"\n"
"/* \347\231\273\345\275\225\346\214\211\351\222\256 */\n"
"QPushButton#LoginButton {\n"
"	background: qlineargradient("
                        "x1: 0, y1: 0, x2: 1, y2: 1,\n"
"							stop: 0 rgb(113, 65, 168), stop: 1 rgba(44, 114, 251, 1));\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#RegisterButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"							stop: 0 rgb(113, 65, 168), stop: 1 rgba(44, 114, 251, 1));\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"/* \350\276\223\345\205\245\346\241\206 */\n"
"\n"
"\n"
"\n"
"QPushButton#CloseButton: hover {\n"
"	border: none;\n"
"	border-radius:25px;\n"
"	border:1px solid black;\n"
"	background: transparent;\n"
"	qproperty-icon: url(:/image/close.png); \n"
"	qproperty-iconSize: 50px 50px;\n"
"}\n"
"\n"
"\n"
""));
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
        UserNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        PasswordLineEdit = new QLineEdit(LoginPage);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(60, 250, 280, 40));
        PasswordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        PasswordLineEdit->setFrame(true);
        PasswordLineEdit->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(LoginPage);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(50, 370, 300, 50));
        toRegisterLabel = new QLabel(LoginPage);
        toRegisterLabel->setObjectName("toRegisterLabel");
        toRegisterLabel->setGeometry(QRect(50, 430, 110, 20));
        toRegisterLabel->setStyleSheet(QString::fromUtf8(""));
        PasswordCheckBox = new QCheckBox(LoginPage);
        PasswordCheckBox->setObjectName("PasswordCheckBox");
        PasswordCheckBox->setGeometry(QRect(60, 330, 100, 20));
        stackedWidget->addWidget(LoginPage);
        RegisterPage = new QWidget();
        RegisterPage->setObjectName("RegisterPage");
        RegisterLabel = new QLabel(RegisterPage);
        RegisterLabel->setObjectName("RegisterLabel");
        RegisterLabel->setGeometry(QRect(0, 40, 400, 100));
        UserNameLineEdit_reg = new QLineEdit(RegisterPage);
        UserNameLineEdit_reg->setObjectName("UserNameLineEdit_reg");
        UserNameLineEdit_reg->setGeometry(QRect(60, 200, 280, 40));
        UserNameLineEdit_reg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        EmailLineEdit_reg = new QLineEdit(RegisterPage);
        EmailLineEdit_reg->setObjectName("EmailLineEdit_reg");
        EmailLineEdit_reg->setGeometry(QRect(60, 150, 280, 40));
        EmailLineEdit_reg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        PasswordLineEdit_reg = new QLineEdit(RegisterPage);
        PasswordLineEdit_reg->setObjectName("PasswordLineEdit_reg");
        PasswordLineEdit_reg->setGeometry(QRect(60, 250, 280, 40));
        PasswordLineEdit_reg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding-left:10px;\n"
"	border:1px solid black;\n"
"	border-radius:20px\n"
"}"));
        PasswordLineEdit_reg->setEchoMode(QLineEdit::Password);
        RegisterButton = new QPushButton(RegisterPage);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(50, 370, 300, 50));
        toRegisterLabel_2 = new QLabel(RegisterPage);
        toRegisterLabel_2->setObjectName("toRegisterLabel_2");
        toRegisterLabel_2->setGeometry(QRect(50, 430, 110, 20));
        toRegisterLabel_2->setStyleSheet(QString::fromUtf8(""));
        VerificationCodeLineEdit = new QLineEdit(RegisterPage);
        VerificationCodeLineEdit->setObjectName("VerificationCodeLineEdit");
        VerificationCodeLineEdit->setGeometry(QRect(60, 300, 200, 40));
        VerificationCodeLineEdit->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"border:1px solid black;\n"
"border-top-left-radius: 20px;\n"
"border-bottom-left-radius: 20px;"));
        VerificationCodeLineEdit->setEchoMode(QLineEdit::Normal);
        GetVerificationCodeButton = new QPushButton(RegisterPage);
        GetVerificationCodeButton->setObjectName("GetVerificationCodeButton");
        GetVerificationCodeButton->setGeometry(QRect(260, 300, 80, 40));
        GetVerificationCodeButton->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"							stop: 0 rgb(113, 65, 168), stop: 1 rgba(44, 114, 251, 1));\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;\n"
"color: rgb(255, 255, 255);"));
        PasswordCheckBox_reg = new QCheckBox(RegisterPage);
        PasswordCheckBox_reg->setObjectName("PasswordCheckBox_reg");
        PasswordCheckBox_reg->setGeometry(QRect(60, 350, 100, 20));
        stackedWidget->addWidget(RegisterPage);
        CloseButton = new QPushButton(frame);
        CloseButton->setObjectName("CloseButton");
        CloseButton->setGeometry(QRect(740, 10, 50, 50));

        retranslateUi(LoginWidget);

        stackedWidget->setCurrentIndex(1);


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
        PasswordLineEdit->setText(QString());
        PasswordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        toRegisterLabel->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#0078d4;\">\346\262\241\346\234\211\350\264\246\345\217\267? \345\211\215\345\276\200\346\263\250\345\206\214</span></a></p></body></html>", nullptr));
        PasswordCheckBox->setText(QCoreApplication::translate("LoginWidget", "\346\230\257\345\220\246\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        RegisterLabel->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Register | \346\263\250\345\206\214</span></p></body></html>", nullptr));
        UserNameLineEdit_reg->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        EmailLineEdit_reg->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\351\202\256\347\256\261", nullptr));
        PasswordLineEdit_reg->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\345\257\206\347\240\201", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LoginWidget", "\346\263\250\345\206\214", nullptr));
        toRegisterLabel_2->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#0078d4;\">\345\267\262\346\234\211\350\264\246\345\217\267? \345\211\215\345\276\200\347\231\273\345\275\225</span></a></p></body></html>", nullptr));
        VerificationCodeLineEdit->setPlaceholderText(QCoreApplication::translate("LoginWidget", "\351\202\256\347\256\261\351\252\214\350\257\201\347\240\201", nullptr));
        GetVerificationCodeButton->setText(QCoreApplication::translate("LoginWidget", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        PasswordCheckBox_reg->setText(QCoreApplication::translate("LoginWidget", "\346\230\257\345\220\246\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        CloseButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
