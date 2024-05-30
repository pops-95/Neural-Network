#include <hidden_layer.hpp>

int main(int argc, char *argv[])
{
    hidden_layer layer=hidden_layer(2,"value");
    layer.set_input_nodes(8);
    layer.show_weights();

    return 0;
}
