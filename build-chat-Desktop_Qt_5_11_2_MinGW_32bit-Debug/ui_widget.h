/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *messageBrowser;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QToolButton *boldToolBtn;
    QToolButton *italicToolBtn;
    QToolButton *underlineToolBtn;
    QToolButton *colorToolBtn;
    QToolButton *sendToolBtn;
    QToolButton *saveToolBtn;
    QToolButton *clearToolBtn;
    QTextEdit *messageTextEdit;
    QTableWidget *userTableWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *userNumLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 450);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        messageBrowser = new QTextBrowser(Widget);
        messageBrowser->setObjectName(QStringLiteral("messageBrowser"));

        verticalLayout->addWidget(messageBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        sizeComboBox = new QComboBox(Widget);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));

        horizontalLayout->addWidget(sizeComboBox);

        boldToolBtn = new QToolButton(Widget);
        boldToolBtn->setObjectName(QStringLiteral("boldToolBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldToolBtn->setIcon(icon);
        boldToolBtn->setIconSize(QSize(22, 22));
        boldToolBtn->setCheckable(true);
        boldToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(boldToolBtn);

        italicToolBtn = new QToolButton(Widget);
        italicToolBtn->setObjectName(QStringLiteral("italicToolBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicToolBtn->setIcon(icon1);
        italicToolBtn->setIconSize(QSize(22, 22));
        italicToolBtn->setCheckable(true);
        italicToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(italicToolBtn);

        underlineToolBtn = new QToolButton(Widget);
        underlineToolBtn->setObjectName(QStringLiteral("underlineToolBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineToolBtn->setIcon(icon2);
        underlineToolBtn->setIconSize(QSize(22, 22));
        underlineToolBtn->setCheckable(true);
        underlineToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(underlineToolBtn);

        colorToolBtn = new QToolButton(Widget);
        colorToolBtn->setObjectName(QStringLiteral("colorToolBtn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorToolBtn->setIcon(icon3);
        colorToolBtn->setIconSize(QSize(22, 22));
        colorToolBtn->setCheckable(false);
        colorToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(colorToolBtn);

        sendToolBtn = new QToolButton(Widget);
        sendToolBtn->setObjectName(QStringLiteral("sendToolBtn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendToolBtn->setIcon(icon4);
        sendToolBtn->setIconSize(QSize(22, 22));
        sendToolBtn->setCheckable(false);
        sendToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(sendToolBtn);

        saveToolBtn = new QToolButton(Widget);
        saveToolBtn->setObjectName(QStringLiteral("saveToolBtn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveToolBtn->setIcon(icon5);
        saveToolBtn->setIconSize(QSize(22, 22));
        saveToolBtn->setCheckable(false);
        saveToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(saveToolBtn);

        clearToolBtn = new QToolButton(Widget);
        clearToolBtn->setObjectName(QStringLiteral("clearToolBtn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolBtn->setIcon(icon6);
        clearToolBtn->setIconSize(QSize(22, 22));
        clearToolBtn->setCheckable(false);
        clearToolBtn->setAutoRaise(true);

        horizontalLayout->addWidget(clearToolBtn);


        verticalLayout->addLayout(horizontalLayout);

        messageTextEdit = new QTextEdit(Widget);
        messageTextEdit->setObjectName(QStringLiteral("messageTextEdit"));

        verticalLayout->addWidget(messageTextEdit);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout);

        userTableWidget = new QTableWidget(Widget);
        if (userTableWidget->columnCount() < 3)
            userTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        userTableWidget->setObjectName(QStringLiteral("userTableWidget"));
        userTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        userTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        userTableWidget->setShowGrid(false);

        horizontalLayout_2->addWidget(userTableWidget);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_3->addWidget(sendButton);

        horizontalSpacer_2 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        userNumLabel = new QLabel(Widget);
        userNumLabel->setObjectName(QStringLiteral("userNumLabel"));

        horizontalLayout_3->addWidget(userNumLabel);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        exitButton = new QPushButton(Widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout_3->addWidget(exitButton);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 5);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 2);
        horizontalLayout_3->setStretch(5, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        sizeComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\261\200\345\237\237\347\275\221\350\201\212\345\244\251\345\267\245\345\205\267", nullptr));
        sizeComboBox->setItemText(0, QApplication::translate("Widget", "9", nullptr));
        sizeComboBox->setItemText(1, QApplication::translate("Widget", "10", nullptr));
        sizeComboBox->setItemText(2, QApplication::translate("Widget", "11", nullptr));
        sizeComboBox->setItemText(3, QApplication::translate("Widget", "12", nullptr));
        sizeComboBox->setItemText(4, QApplication::translate("Widget", "13", nullptr));
        sizeComboBox->setItemText(5, QApplication::translate("Widget", "14", nullptr));
        sizeComboBox->setItemText(6, QApplication::translate("Widget", "15", nullptr));
        sizeComboBox->setItemText(7, QApplication::translate("Widget", "16", nullptr));
        sizeComboBox->setItemText(8, QApplication::translate("Widget", "17", nullptr));
        sizeComboBox->setItemText(9, QApplication::translate("Widget", "18", nullptr));
        sizeComboBox->setItemText(10, QApplication::translate("Widget", "19", nullptr));
        sizeComboBox->setItemText(11, QApplication::translate("Widget", "20", nullptr));
        sizeComboBox->setItemText(12, QApplication::translate("Widget", "21", nullptr));
        sizeComboBox->setItemText(13, QApplication::translate("Widget", "22", nullptr));

#ifndef QT_NO_TOOLTIP
        boldToolBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
        boldToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        italicToolBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_NO_TOOLTIP
        italicToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        underlineToolBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        underlineToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorToolBtn->setToolTip(QApplication::translate("Widget", "\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        colorToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        sendToolBtn->setToolTip(QApplication::translate("Widget", "\344\274\240\350\276\223\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        sendToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveToolBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        saveToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        clearToolBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        clearToolBtn->setText(QApplication::translate("Widget", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", nullptr));
        sendButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        userNumLabel->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", nullptr));
        exitButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
