#ifndef GTKMM_EXAMPLE_MAINWINDOW_H
#define GTKMM_EXAMPLE_MAINWINDOW_H

#include <gtkmm.h>

class MainWindow : public Gtk::Window
{

public:
  MainWindow();
  virtual ~MainWindow();

protected:
  //Signal handlers:
  void on_button_clicked();
  void on_button_recipes_clicked();
  //Member widgets:
  Gtk::Box m_HBox;
  Gtk::Button m_button, m_button_recipes;
  Gtk::Frame m_frame, m_frame_recipes;
};

#endif // GTKMM_EXAMPLE_MAINWINDOW_H mas
