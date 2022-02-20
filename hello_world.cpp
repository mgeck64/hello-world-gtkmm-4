#include "hello_world.hpp"
#include <iostream>

constexpr auto default_margin = 10;

hello_world::hello_world() :
        vbox(Gtk::Orientation::VERTICAL),
        button("Hello World") {
    set_child(vbox);

    entry.set_margin(default_margin);
    vbox.append(entry);

    button.set_margin(default_margin);
    button.signal_clicked().connect(sigc::mem_fun(*this, &hello_world::on_button_clicked));
    vbox.append(button);
}

void hello_world::on_button_clicked() {
    entry.set_text("Hello, world!");
}