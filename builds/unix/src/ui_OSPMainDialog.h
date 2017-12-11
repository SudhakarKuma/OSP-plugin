/********************************************************************************
** Form generated from reading UI file 'OSPMainDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSPMAINDIALOG_H
#define UI_OSPMAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_OSPMainDialog
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *_2;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QTabWidget *tabWidg;
    QWidget *calTab;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *laserDirControl;
    QGridLayout *gridLayout;
    QPushButton *mvRight;
    QPushButton *mvDown;
    QPushButton *mvLeft;
    QPushButton *mvUp;
    QLineEdit *ySteps;
    QPushButton *reset;
    QLineEdit *xSteps;
    QPushButton *nSteps;
    QGroupBox *MotorSwitchingControl;
    QHBoxLayout *horizontalLayout;
    QRadioButton *CoarseAdj;
    QRadioButton *FineAdj;
    QRadioButton *StepAdj;
    QGroupBox *laserlightControl;
    QFormLayout *formLayout;
    QSlider *intensity;
    QRadioButton *laserOff;
    QRadioButton *laserOn;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *configDevice;
    QVBoxLayout *verticalLayout_5;
    QPushButton *selectDev;
    QPushButton *startCal;
    QPushButton *goTo;
    QGroupBox *refStatus;
    QVBoxLayout *verticalLayout_7;
    QPushButton *setRef;
    QLineEdit *refStat;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *X;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *Y;
    QWidget *scriptTab;
    QSplitter *splitter;
    QSlider *volumeChanged;
    QPushButton *playui;
    QPushButton *stopui;
    QPushButton *openScript;
    QPushButton *saveScript;
    QPushButton *compScript;
    QPushButton *execScript;
    QSplitter *splitter_2;
    QPushButton *gt;
    QPushButton *pl;
    QPushButton *wt;
    QPushButton *lo;
    QTextEdit *scriptEdit;
    QWidget *abtTab;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *OSPMainDialog)
    {
        if (OSPMainDialog->objectName().isEmpty())
            OSPMainDialog->setObjectName(QStringLiteral("OSPMainDialog"));
        OSPMainDialog->resize(572, 413);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OSPMainDialog->sizePolicy().hasHeightForWidth());
        OSPMainDialog->setSizePolicy(sizePolicy);
        OSPMainDialog->setFocusPolicy(Qt::ClickFocus);
        verticalLayout = new QVBoxLayout(OSPMainDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TitleBar = new BarFrame(OSPMainDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
        TitleBar->setMinimumSize(QSize(0, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        _2 = new QHBoxLayout(TitleBar);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        _2->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        _2->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        tabWidg = new QTabWidget(OSPMainDialog);
        tabWidg->setObjectName(QStringLiteral("tabWidg"));
        tabWidg->setTabPosition(QTabWidget::North);
        tabWidg->setTabShape(QTabWidget::Rounded);
        tabWidg->setMovable(false);
        tabWidg->setTabBarAutoHide(false);
        calTab = new QWidget();
        calTab->setObjectName(QStringLiteral("calTab"));
        horizontalLayout_4 = new QHBoxLayout(calTab);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        laserDirControl = new QGroupBox(calTab);
        laserDirControl->setObjectName(QStringLiteral("laserDirControl"));
        gridLayout = new QGridLayout(laserDirControl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mvRight = new QPushButton(laserDirControl);
        mvRight->setObjectName(QStringLiteral("mvRight"));
        mvRight->setEnabled(false);

        gridLayout->addWidget(mvRight, 1, 3, 1, 1);

        mvDown = new QPushButton(laserDirControl);
        mvDown->setObjectName(QStringLiteral("mvDown"));
        mvDown->setEnabled(false);

        gridLayout->addWidget(mvDown, 2, 2, 1, 1);

        mvLeft = new QPushButton(laserDirControl);
        mvLeft->setObjectName(QStringLiteral("mvLeft"));
        mvLeft->setEnabled(false);

        gridLayout->addWidget(mvLeft, 1, 1, 1, 1);

        mvUp = new QPushButton(laserDirControl);
        mvUp->setObjectName(QStringLiteral("mvUp"));
        mvUp->setEnabled(false);

        gridLayout->addWidget(mvUp, 0, 2, 1, 1);

        ySteps = new QLineEdit(laserDirControl);
        ySteps->setObjectName(QStringLiteral("ySteps"));

        gridLayout->addWidget(ySteps, 3, 3, 1, 1);

        reset = new QPushButton(laserDirControl);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setEnabled(false);

        gridLayout->addWidget(reset, 1, 2, 1, 1);

        xSteps = new QLineEdit(laserDirControl);
        xSteps->setObjectName(QStringLiteral("xSteps"));

        gridLayout->addWidget(xSteps, 3, 1, 1, 1);

        nSteps = new QPushButton(laserDirControl);
        nSteps->setObjectName(QStringLiteral("nSteps"));

        gridLayout->addWidget(nSteps, 3, 2, 1, 1);


        verticalLayout_8->addWidget(laserDirControl);

        MotorSwitchingControl = new QGroupBox(calTab);
        MotorSwitchingControl->setObjectName(QStringLiteral("MotorSwitchingControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MotorSwitchingControl->sizePolicy().hasHeightForWidth());
        MotorSwitchingControl->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(MotorSwitchingControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        CoarseAdj = new QRadioButton(MotorSwitchingControl);
        CoarseAdj->setObjectName(QStringLiteral("CoarseAdj"));
        CoarseAdj->setEnabled(false);
        CoarseAdj->setFocusPolicy(Qt::StrongFocus);
        CoarseAdj->setChecked(false);

        horizontalLayout->addWidget(CoarseAdj);

        FineAdj = new QRadioButton(MotorSwitchingControl);
        FineAdj->setObjectName(QStringLiteral("FineAdj"));
        FineAdj->setEnabled(false);
        FineAdj->setChecked(true);

        horizontalLayout->addWidget(FineAdj);

        StepAdj = new QRadioButton(MotorSwitchingControl);
        StepAdj->setObjectName(QStringLiteral("StepAdj"));

        horizontalLayout->addWidget(StepAdj);


        verticalLayout_8->addWidget(MotorSwitchingControl);

        laserlightControl = new QGroupBox(calTab);
        laserlightControl->setObjectName(QStringLiteral("laserlightControl"));
        laserlightControl->setContextMenuPolicy(Qt::PreventContextMenu);
        laserlightControl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout = new QFormLayout(laserlightControl);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        intensity = new QSlider(laserlightControl);
        intensity->setObjectName(QStringLiteral("intensity"));
        intensity->setEnabled(false);
        intensity->setMinimum(50);
        intensity->setMaximum(255);
        intensity->setValue(50);
        intensity->setSliderPosition(50);
        intensity->setTracking(false);
        intensity->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::SpanningRole, intensity);

        laserOff = new QRadioButton(laserlightControl);
        buttonGroup = new QButtonGroup(OSPMainDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(laserOff);
        laserOff->setObjectName(QStringLiteral("laserOff"));
        laserOff->setEnabled(false);
        laserOff->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, laserOff);

        laserOn = new QRadioButton(laserlightControl);
        buttonGroup->addButton(laserOn);
        laserOn->setObjectName(QStringLiteral("laserOn"));
        laserOn->setEnabled(false);
        laserOn->setFocusPolicy(Qt::StrongFocus);
        laserOn->setChecked(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, laserOn);


        verticalLayout_8->addWidget(laserlightControl);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        configDevice = new QGroupBox(calTab);
        configDevice->setObjectName(QStringLiteral("configDevice"));
        verticalLayout_5 = new QVBoxLayout(configDevice);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        selectDev = new QPushButton(configDevice);
        selectDev->setObjectName(QStringLiteral("selectDev"));
        selectDev->setEnabled(true);

        verticalLayout_5->addWidget(selectDev);

        startCal = new QPushButton(configDevice);
        startCal->setObjectName(QStringLiteral("startCal"));
        startCal->setEnabled(false);

        verticalLayout_5->addWidget(startCal);

        goTo = new QPushButton(configDevice);
        goTo->setObjectName(QStringLiteral("goTo"));
        goTo->setEnabled(false);

        verticalLayout_5->addWidget(goTo);


        verticalLayout_6->addWidget(configDevice);

        refStatus = new QGroupBox(calTab);
        refStatus->setObjectName(QStringLiteral("refStatus"));
        verticalLayout_7 = new QVBoxLayout(refStatus);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        setRef = new QPushButton(refStatus);
        setRef->setObjectName(QStringLiteral("setRef"));
        setRef->setEnabled(false);

        verticalLayout_7->addWidget(setRef);

        refStat = new QLineEdit(refStatus);
        refStat->setObjectName(QStringLiteral("refStat"));
        refStat->setEnabled(true);
        refStat->setAlignment(Qt::AlignCenter);
        refStat->setReadOnly(true);

        verticalLayout_7->addWidget(refStat);


        verticalLayout_6->addWidget(refStatus);

        groupBox_2 = new QGroupBox(calTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        X = new QLabel(groupBox_2);
        X->setObjectName(QStringLiteral("X"));

        horizontalLayout_5->addWidget(X);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        Y = new QLabel(groupBox_2);
        Y->setObjectName(QStringLiteral("Y"));

        horizontalLayout_6->addWidget(Y);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_6->addWidget(groupBox_2);


        horizontalLayout_4->addLayout(verticalLayout_6);

        tabWidg->addTab(calTab, QString());
        scriptTab = new QWidget();
        scriptTab->setObjectName(QStringLiteral("scriptTab"));
        splitter = new QSplitter(scriptTab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(341, 41, 101, 291));
        splitter->setOrientation(Qt::Vertical);
        volumeChanged = new QSlider(splitter);
        volumeChanged->setObjectName(QStringLiteral("volumeChanged"));
        volumeChanged->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volumeChanged->sizePolicy().hasHeightForWidth());
        volumeChanged->setSizePolicy(sizePolicy3);
        volumeChanged->setCursor(QCursor(Qt::BusyCursor));
        volumeChanged->setValue(50);
        volumeChanged->setOrientation(Qt::Horizontal);
        splitter->addWidget(volumeChanged);
        playui = new QPushButton(splitter);
        playui->setObjectName(QStringLiteral("playui"));
        playui->setEnabled(false);
        splitter->addWidget(playui);
        stopui = new QPushButton(splitter);
        stopui->setObjectName(QStringLiteral("stopui"));
        stopui->setEnabled(true);
        splitter->addWidget(stopui);
        openScript = new QPushButton(splitter);
        openScript->setObjectName(QStringLiteral("openScript"));
        splitter->addWidget(openScript);
        saveScript = new QPushButton(splitter);
        saveScript->setObjectName(QStringLiteral("saveScript"));
        splitter->addWidget(saveScript);
        compScript = new QPushButton(splitter);
        compScript->setObjectName(QStringLiteral("compScript"));
        splitter->addWidget(compScript);
        execScript = new QPushButton(splitter);
        execScript->setObjectName(QStringLiteral("execScript"));
        execScript->setEnabled(true);
        splitter->addWidget(execScript);
        splitter_2 = new QSplitter(scriptTab);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 10, 431, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        gt = new QPushButton(splitter_2);
        gt->setObjectName(QStringLiteral("gt"));
        splitter_2->addWidget(gt);
        pl = new QPushButton(splitter_2);
        pl->setObjectName(QStringLiteral("pl"));
        splitter_2->addWidget(pl);
        wt = new QPushButton(splitter_2);
        wt->setObjectName(QStringLiteral("wt"));
        splitter_2->addWidget(wt);
        lo = new QPushButton(splitter_2);
        lo->setObjectName(QStringLiteral("lo"));
        splitter_2->addWidget(lo);
        scriptEdit = new QTextEdit(scriptTab);
        scriptEdit->setObjectName(QStringLiteral("scriptEdit"));
        scriptEdit->setGeometry(QRect(13, 42, 321, 291));
        scriptEdit->setAutoFillBackground(true);
        scriptEdit->setInputMethodHints(Qt::ImhLowercaseOnly|Qt::ImhMultiLine|Qt::ImhNoAutoUppercase);
        scriptEdit->setFrameShape(QFrame::StyledPanel);
        scriptEdit->setReadOnly(false);
        tabWidg->addTab(scriptTab, QString());
        abtTab = new QWidget();
        abtTab->setObjectName(QStringLiteral("abtTab"));
        verticalLayout_4 = new QVBoxLayout(abtTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textBrowser = new QTextBrowser(abtTab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_4->addWidget(textBrowser);

        tabWidg->addTab(abtTab, QString());

        verticalLayout->addWidget(tabWidg);


        retranslateUi(OSPMainDialog);

        tabWidg->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OSPMainDialog);
    } // setupUi

    void retranslateUi(QWidget *OSPMainDialog)
    {
        OSPMainDialog->setWindowTitle(QApplication::translate("OSPMainDialog", "Form", 0));
        stelWindowTitle->setText(QApplication::translate("OSPMainDialog", "Open Sky Planetarium", 0));
        closeStelWindow->setText(QString());
#ifndef QT_NO_TOOLTIP
        laserDirControl->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        laserDirControl->setTitle(QApplication::translate("OSPMainDialog", "LASER Direction Control", 0));
#ifndef QT_NO_TOOLTIP
        mvRight->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move rightwards upto 360 degrees from (0,0).", 0));
#endif // QT_NO_TOOLTIP
        mvRight->setText(QApplication::translate("OSPMainDialog", "right", 0));
#ifndef QT_NO_TOOLTIP
        mvDown->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move downward only if it is not at (0,0).", 0));
#endif // QT_NO_TOOLTIP
        mvDown->setText(QApplication::translate("OSPMainDialog", "down", 0));
#ifndef QT_NO_TOOLTIP
        mvLeft->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move leftwards only if it is not at (0,0).", 0));
#endif // QT_NO_TOOLTIP
        mvLeft->setText(QApplication::translate("OSPMainDialog", "left", 0));
#ifndef QT_NO_TOOLTIP
        mvUp->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move upwards upto 90 degrees from (0,0).", 0));
#endif // QT_NO_TOOLTIP
        mvUp->setText(QApplication::translate("OSPMainDialog", "up", 0));
#ifndef QT_NO_TOOLTIP
        ySteps->setToolTip(QApplication::translate("OSPMainDialog", "The number of degrees LASER should move vertically", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ySteps->setWhatsThis(QApplication::translate("OSPMainDialog", "<html><head/><body><p>Y degrees</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        reset->setToolTip(QApplication::translate("OSPMainDialog", "Takes the LASER to (0,0).", 0));
#endif // QT_NO_TOOLTIP
        reset->setText(QApplication::translate("OSPMainDialog", "reset", 0));
#ifndef QT_NO_TOOLTIP
        xSteps->setToolTip(QApplication::translate("OSPMainDialog", "The number of degrees LASER should move horizontally", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        xSteps->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        xSteps->setWhatsThis(QApplication::translate("OSPMainDialog", "<html><head/><body><p>X degrees</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        nSteps->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move x,y degrees", 0));
#endif // QT_NO_TOOLTIP
        nSteps->setText(QApplication::translate("OSPMainDialog", "Ok", 0));
        MotorSwitchingControl->setTitle(QApplication::translate("OSPMainDialog", "Motor Speed Control", 0));
#ifndef QT_NO_TOOLTIP
        CoarseAdj->setToolTip(QApplication::translate("OSPMainDialog", "Makes the movement of LASER fast during its direction control.", 0));
#endif // QT_NO_TOOLTIP
        CoarseAdj->setText(QApplication::translate("OSPMainDialog", "Coarse", 0));
#ifndef QT_NO_TOOLTIP
        FineAdj->setToolTip(QApplication::translate("OSPMainDialog", "Makes the movement of LASER slow during its direction control. ", 0));
#endif // QT_NO_TOOLTIP
        FineAdj->setText(QApplication::translate("OSPMainDialog", "Fine", 0));
#ifndef QT_NO_TOOLTIP
        StepAdj->setToolTip(QApplication::translate("OSPMainDialog", "Makes the LASER move one step at a time during its direction control. ", 0));
#endif // QT_NO_TOOLTIP
        StepAdj->setText(QApplication::translate("OSPMainDialog", "Step", 0));
#ifndef QT_NO_TOOLTIP
        laserlightControl->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        laserlightControl->setTitle(QApplication::translate("OSPMainDialog", "LASER  Light Control", 0));
#ifndef QT_NO_TOOLTIP
        intensity->setToolTip(QApplication::translate("OSPMainDialog", "Controls the intensity of LASER. Drag the slider to change the intensity.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        laserOff->setToolTip(QApplication::translate("OSPMainDialog", "Turns the LASER off and sends the slider to its initial position. ", 0));
#endif // QT_NO_TOOLTIP
        laserOff->setText(QApplication::translate("OSPMainDialog", "Turn OFF", 0));
#ifndef QT_NO_TOOLTIP
        laserOn->setToolTip(QApplication::translate("OSPMainDialog", "Turns the LASER on and enables slider to control intensity.", 0));
#endif // QT_NO_TOOLTIP
        laserOn->setText(QApplication::translate("OSPMainDialog", "Turn ON", 0));
        configDevice->setTitle(QApplication::translate("OSPMainDialog", "Device Configuration", 0));
#ifndef QT_NO_TOOLTIP
        selectDev->setToolTip(QApplication::translate("OSPMainDialog", "Selects the connected device.", 0));
#endif // QT_NO_TOOLTIP
        selectDev->setText(QApplication::translate("OSPMainDialog", "Select", 0));
#ifndef QT_NO_TOOLTIP
        startCal->setToolTip(QApplication::translate("OSPMainDialog", "Initializes calibration using 2 or 3 reference stars. Also, it sets the current position of LASER as (0,0).", 0));
#endif // QT_NO_TOOLTIP
        startCal->setText(QApplication::translate("OSPMainDialog", "Start Calibrate", 0));
#ifndef QT_NO_TOOLTIP
        goTo->setToolTip(QApplication::translate("OSPMainDialog", "Takes the LASER to selected star after calibration has been accomplished.", 0));
#endif // QT_NO_TOOLTIP
        goTo->setText(QApplication::translate("OSPMainDialog", "GoTo", 0));
        refStatus->setTitle(QApplication::translate("OSPMainDialog", "Reference Status", 0));
#ifndef QT_NO_TOOLTIP
        setRef->setToolTip(QApplication::translate("OSPMainDialog", "Sets reference when a star is selected. It is disabled when three references have been set successfully.", 0));
#endif // QT_NO_TOOLTIP
        setRef->setText(QApplication::translate("OSPMainDialog", "Set Ref.", 0));
#ifndef QT_NO_TOOLTIP
        refStat->setToolTip(QApplication::translate("OSPMainDialog", "Displays the number of references set.", 0));
#endif // QT_NO_TOOLTIP
        refStat->setText(QApplication::translate("OSPMainDialog", "0/3", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("OSPMainDialog", "Current Coordinates", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("OSPMainDialog", "Displays the current horizontal position of LASER in degrees. ", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OSPMainDialog", "X:", 0));
        X->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("OSPMainDialog", "Displays the current vertical position of LASER in degrees.", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OSPMainDialog", "Y:", 0));
        Y->setText(QString());
        tabWidg->setTabText(tabWidg->indexOf(calTab), QApplication::translate("OSPMainDialog", "Calibration", 0));
        playui->setText(QApplication::translate("OSPMainDialog", "Play", 0));
        stopui->setText(QApplication::translate("OSPMainDialog", "Stop", 0));
        openScript->setText(QApplication::translate("OSPMainDialog", "Open", 0));
        saveScript->setText(QApplication::translate("OSPMainDialog", "Save", 0));
        compScript->setText(QApplication::translate("OSPMainDialog", "Build", 0));
        execScript->setText(QApplication::translate("OSPMainDialog", "Build + Run", 0));
        gt->setText(QApplication::translate("OSPMainDialog", "Goto", 0));
        pl->setText(QApplication::translate("OSPMainDialog", "Audio", 0));
        wt->setText(QApplication::translate("OSPMainDialog", "WAIT", 0));
        lo->setText(QApplication::translate("OSPMainDialog", "LASER ON/OFF", 0));
        tabWidg->setTabText(tabWidg->indexOf(scriptTab), QApplication::translate("OSPMainDialog", "ScriptEngine", 0));
        textBrowser->setHtml(QApplication::translate("OSPMainDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; text-decoration: underline;\">OpenSkyPlanetarium</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">An Open Sour"
                        "ce Initiative by IIT Bombay to bring interesting objects in the Open Sky closer to the common masses and school childrens.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Contact: IIT Bombay</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Email: openskyplanetarium@fossee.in</p></body></html>", 0));
        tabWidg->setTabText(tabWidg->indexOf(abtTab), QApplication::translate("OSPMainDialog", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class OSPMainDialog: public Ui_OSPMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSPMAINDIALOG_H
