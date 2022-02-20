#include "hello_world.hpp"
#include <gtkmm/application.h>

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create("mgeck64.hello_world");
    return app->make_window_and_run<hello_world>(argc, argv);
}