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