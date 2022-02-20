#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/entry.h>
#include <gtkmm/button.h>

class hello_world : public Gtk::Window {
public:
    hello_world();

private:
    Gtk::Box vbox;
    Gtk::Entry entry;
    Gtk::Button button;
    void on_button_clicked();
};

#endif // HELLO_WORLD_H