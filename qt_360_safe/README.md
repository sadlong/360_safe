# qt_360_safe
qt高仿360安全卫士



## mainwindow.cpp

**setStyleSheet的三种用法**

```cpp
//字体'360安全卫士11' FFFFFF为白色 000000为黑色
ui->title->setStyleSheet ("color: #000000");
//对应左上角logo
ui->icon->setStyleSheet ("border-image: url(:/other/images/other/icon.png)");
ui->pb360->setStyleSheet ("color: #FFFFFF; font-family: \"微软雅黑\"; font-size: 20px;");
```

有点像css的style用法，整个函数里面要用字符串包起来，用分号区分属性，注意使用字体类型的时候用了转义字符。



**optionToolButton (QToolButton * tb, QIcon icon, QString text)**

```cpp
void MainWindow::optionToolButton (QToolButton * tb, QIcon icon, QString text) {
    //QAction 在 Qt 框架中常用于表示一个可执行的动作，它可以和各种界面元素（如菜单、工具栏按钮等）关联起来，赋予它们具体的功能
    QAction *pAction = new QAction(this);
    pAction->setText(text);
    pAction->setIcon(icon);
    tb->setIconSize(QSize(50, 50));
    tb->setDefaultAction(pAction);
    tb->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);    //字体显示在图片之下
    tb->setProperty ("mainwindow_toolbutton", true);    //为按钮设置了一个自定义属性，属性名为 "mainwindow_toolbutton"，属性值为 true
}
```

这里的QAction相当于是以代码来代替ui了，`setProperty`函数个人感觉主要是为qss服务的，我尝试注释掉那一行导致按钮的背景颜色改变了



**实现网页跳转**

```cpp
QAction *mianfei = new QAction( tr("360为什么免费"), this);
connect(mianfei, SIGNAL(triggered()), this, SLOT(mianfeiActionSlot()));
mianfei->setIcon (QIcon(":/menu/images/menu/menu_mian.png"));

void MainWindow::mianfeiActionSlot(){
    const QUrl url("http://se.360.cn/wel/whyFree.html");
    QDesktopServices::openUrl(url);
}	
```



## home2widget.cpp

**emit发射信号关键字**

在home2widget.h中声明

```cpp
signals:
    void onHome2IntoNextSignal();
```

然后即可使用

```cpp
emit onHome2IntoNextSignal();
```





## 界面框架概述

拿homewidget.cpp和home2widget.cpp为例，这两个文件主要展示的是`电脑体检`的功能和点击`立即体检`按钮后动态展示扫描的过程，其它的功能按钮都大致一样，所以就拿homewidget来举例，在构造函数中用setStyleSheet来给控件赋值上属性，这里面有一个很特殊的成员属性叫`wallBallWidget`，在其它窗口中都有这个属性，它来自于一个自定义类，这个主要是实现了一个动图的效果和通过不同进度来展示不同颜色的效果，然后就是初始化其它属性，如按钮，widget，然后就是动态开辟一个内存用来展示另一个子窗口，这里通常是需要通过某个按钮来实现的，所以很自然的就会用到信号与槽来实现连接，在这个项目中有一个bug，就是从子窗口返回到父窗口的时候不会销毁内存，导致再次进入子窗口的时候会接着上一次的状态继续，主要实现实在home2widget.cpp中的reset、start和stop函数中。然后就是解决了一直困扰我的一个问题，就是项目中根本没有循环，是怎么做到循环的效果的？答案就在计时器上，一般在成员变量中会有一个`QTimer`类的成员变量指针，假设这个变量叫做timer，然后执行`timer->start(1000)`表示设置时间间隔为1秒钟，然后通过信号槽函数绑定这个timer来实现一定时间间隔来执行槽函数，信号与槽函数大致这样写：`connect(timer, SIGNAL(timeout()), this, SLOT(onScanTimerOut()));`，这里只有槽函数的名称和src名称是自己取的