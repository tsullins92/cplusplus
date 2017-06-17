#include "mainwindow.h"
#include <iostream>
#include <gtkmm.h>

MainWindow::MainWindow()
: 
  m_button_recipes("Recipes"),
  m_button("Start"),   // creates a new button with label "Start".
  m_frame(),
  m_frame_recipes(),
  m_HBox(Gtk::ORIENTATION_HORIZONTAL, 5)
{
  // Sets the border width of the window.
  set_border_width(10);
  add(m_HBox);
  m_frame.add(m_button);
  m_frame_recipes.add(m_button_recipes);
  m_HBox.pack_start(m_frame, Gtk::PACK_SHRINK);
  m_HBox.pack_start(m_frame_recipes, Gtk::PACK_SHRINK);
  
  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &MainWindow::on_button_clicked));

  m_button_recipes.signal_clicked().connect(sigc::mem_fun(*this,
              &MainWindow::on_button_recipes_clicked));

  // The final step is to display this newly created widget...
  show_all_children();
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_button_clicked()
{
  std::cout << "Start" << std::endl;
}

void MainWindow::on_button_recipes_clicked()
{
  std::cout << "Recipes" << std::endl;
}
