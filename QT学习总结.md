## QT许可证

## 开发环境搭建
1. 
2. 
3. 
4. 

## QT的关键技术
1. 开发环境：QtCreator，VIsualtudioAddIn
2. qmake和cmake
3. 信号与槽机制
4. QString等封装类库
5. QWidget
6. MOdel/View架构
7. qml
8. Qt Quick
9. 文件操作/串口操作/数据库操作/绘图/动画等等
10. 多线程、多媒体、网络变成、3D绘图等高级功能

## QT的开发方式
1. 传统经典主流开发方式：QWidget方式
> 优势：Windows/Linux源生风格UI、成熟类库、大量存量资源。
> 适合：开发PC桌面程序，基于现有QWidget软件的二次开发升级等。
> 劣势：UI不够酷炫、不适合嵌入式触摸屏设备、动画效果不好
2. 官方主推趋势开发方式：QtQuick方式
> 优势：解决上面的劣势，前后段分离、新版本也支持源生UI风格
> 适合：新项目开发，嵌入式设备GUI开发，Qt for MCU
> 劣势：资料少，要额外学qml
3. PyQt(python的方式):PyQt
> 适合不会也不想学c++的py的开发人员，开发不注重效率的GUI程序

## GUI和HMI
> GUI
1. GUI: Graphical User INterface 图形用户界面
2. CMD： Commandline User Interface 命令行用户界面
3. 常见的GUI系统：Windows、Android、web页面
4. GUI的本质：以超越文本的方式做数字显示。高级的还要带用户交互。

> HMI
1. HMI: Human Machine Interface 人机接口，又叫人机界面
2. HMI是系统和用户之间交互和信息交换的媒介，包括显示和交互两部分。
3. HMI一般指的是一种设备，也可能指实现这种设备的软硬件技术。
4. HMI的实现需要借助GUI技术，通常还需要RS485、网络等通信技术，采集器和执行器技术等。

## 显示原理和相关概念
1. 相关概念
* 
* 
* 
2. 显示原理

## GUI显示的关键(显存)
1. 显示内存
* 
* 
* 
2. 双缓冲机制
3. 共享内存
4. mmap映射
5. GUI系统的前段和后段
6. 图像渲染
7. GPU和CPU渲染的不同
8. 