#include <hidden_layer.hpp>

int main(int argc, char *argv[])
{
    hidden_layer layer=hidden_layer(2,"value");
    std::cout << layer.get_layer_number() << std::endl;
}
