#include "homewidget.h"
#include "ui_homewidget.h"
#include "qaction.h"

//电脑体检界面

HomeWidget::HomeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeWidget)
{
    //将ui文件下的控件全部布置好
    ui->setupUi(this);

    //这一行不要好像也行 因为主要颜色是通过mainwindow中的颜色影响的
    ui->background->setStyleSheet("background-color: #FFFFFF;");
    //设置按钮样式 “立即体检按钮”
    ui->pushButton->setStyleSheet("background-color: #16da6c;border-radius: 30px;color: #00000;font-size: 25px;");
    ui->title->setStyleSheet("color: #444444;font-size: 25px;");
    ui->subtitle->setStyleSheet("color: #9b9999;font-size: 16px;");
    //wallBallWidget是自定义的类 实现了动图的效果
    ui->wallBallWidget->setProgress(0.6);   //设置了圆形里面的容量 0-0.5为橙色 0.6-1为绿色

    //右下角四个图标
    optionToolButtons();
    //左下角三个图标
    optionStateWidgets();

    //这里好像有点bug 故障检测第九次之后点击取消检测就会卡死
    home2Widget = new Home2Widget(this);
    home2Widget->setVisible(false);
//    home2Widget = NULL;
    connect(home2Widget, SIGNAL(onHome2IntoNextSignal()), this, SLOT(onHome2IntoNextSlot()));
}

HomeWidget::~HomeWidget()
{
    delete ui;
}

//StateWidget也是自定义类
void HomeWidget::optionStateWidgets () {
    //第三个参数是用来设置小图标的 1就是√图标 0就是×图标
    ui->fangHuZhongXin->show(":/other/images/other/icon_fanghuzhongxin.png", "防护中心", 1);
    ui->wangGouXianPei->show(":/other/images/other/icon_wanggou.png", "网购先陪", 1);
    ui->fanLeSuo->show(":/other/images/other/icon_fanlesuo.png", "反勒索服务", 0);
    ui->yanZheng->show(":/other/images/other/icon_fanghuzhongxin.png", "验证", 0);


    //以下信号与槽函数并未实现
    connect(ui->fangHuZhongXin, SIGNAL(onStateWidgetHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetHoverSlot(StateWidget*)));
    connect(ui->fangHuZhongXin, SIGNAL(onStateWidgetNoHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetNoHoverSlot(StateWidget*)));
    connect(ui->wangGouXianPei, SIGNAL(onStateWidgetHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetHoverSlot(StateWidget*)));
    connect(ui->wangGouXianPei, SIGNAL(onStateWidgetNoHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetNoHoverSlot(StateWidget*)));
    connect(ui->fanLeSuo, SIGNAL(onStateWidgetHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetHoverSlot(StateWidget*)));
    connect(ui->fanLeSuo, SIGNAL(onStateWidgetNoHoverSinal(StateWidget*)),
             this, SLOT(onStateWidgetNoHoverSlot(StateWidget*)));
}

void HomeWidget::optionToolButtons() {
    optionToolButton(ui->tbApp, QIcon(":/other/images/other/icon_app.png"), "软件管理");
    optionToolButton(ui->tbFix, QIcon(":/other/images/other/icon_fix.png"), "主页修复");
    optionToolButton(ui->tbHandler, QIcon(":/other/images/other/icon_handler.png"), "手机助手");
    optionToolButton(ui->tbMore, QIcon(":/other/images/other/icon_more.png"), "更多功能");
    optionToolButton(ui->tbService, QIcon(":/other/images/other/icon_help.png"), "人工服务");
    optionToolButton(ui->sadLiu, QIcon(":/question/images/question/next_icon2.png"), "云聊天");
}

void HomeWidget::optionToolButton(QToolButton * tb, QIcon icon, QString text) {
    QAction *pAction = new QAction(this);
    pAction->setText(text);
    pAction->setIcon(icon);
    tb->setIconSize(QSize(42, 42));
    tb->setDefaultAction(pAction);
    tb->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    tb->setProperty ("homewidget_toolbutton", true);
}

void HomeWidget::onStateWidgetHoverSlot(StateWidget*s) {

}

void HomeWidget::onStateWidgetNoHoverSlot(StateWidget*s) {

}

void HomeWidget::on_pushButton_clicked()
{
//    home2Widget = new Home2Widget(this);
    home2Widget->setVisible (true); //子窗口显示
    ui->home->setVisible (false);   //当前这个隐藏
    home2Widget->start();
}

void HomeWidget::onHome2IntoNextSlot() {
    home2Widget->setVisible(false);
    ui->home->setVisible(true);
    home2Widget->stop();    //这个stop函数只是将计时器stop了，所以再点击“立即检测”就会接着上一次的追加展示
//    delete home2Widget;
}
