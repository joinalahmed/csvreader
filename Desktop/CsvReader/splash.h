#ifndef SPLASH_H
#define SPLASH_H
#include <QtWidgets>

class MySplashScreen:public QSplashScreen
{
  Q_OBJECT
  public:
    MySplashScreen():movie("/home/joy/Desktop/LOAD.gif")
    {
      setPixmap(QPixmap::fromImage(QImage("/home/joy/Desktop/LOAD.gif")));
      movie.start();
      connect(&movie,SIGNAL(updated(QRect)),this,SLOT(frameUpdate()));
    }

    ~MySplashScreen()
    {}

    void paintEvent(QPaintEvent* event)
    {
      QPainter painter(this);
      painter.drawPixmap(movie.frameRect(), movie.currentPixmap());
      //painter.drawText(50,movie.frameRect().height()-fontMetrics().height(),
                         //QString::number(QDateTime::currentMSecsSinceEpoch()));
    }

  private slots:
    void frameUpdate()
    {
      setPixmap(movie.currentPixmap());
      update();
    }

  private:
    QMovie movie;

};
#endif // SPLASH_H
