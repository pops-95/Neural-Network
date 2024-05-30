#include <hidden_layer.hpp>

int main(int argc, char *argv[])
{   
    std::vector<int> values={1,2};
    hidden_layer layer=hidden_layer(4,"value");
    layer.set_input_nodes(values.size());
    layer.show_weights();
    layer.output_calcu(values);

    layer.show_outputs();

    return 0;
}
