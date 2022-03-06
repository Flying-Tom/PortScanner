# Port Scanner (QT)

这是一个基于 QT5 实现的多线程 GUI 端口扫描器。

已知的bugs：如果选择的超时时间太短，可能会错误地忽略某些打开的端口。

如果超时时间小于 200ms，建议选择较小的线程数（< 5）。

![example](example.png)


