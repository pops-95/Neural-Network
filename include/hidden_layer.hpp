#include <iostream>
#include <string>


class hidden_layer
{
private:
        int __number_of_node;
        static int __input_nodes;
        std::string activation_fun;
        int __weights[__input_nodes];
                
public:
    hidden_layer(int nodes,std::string activation);
    ~hidden_layer();
    int get_layer_number();
};

hidden_layer::hidden_layer(int nodes,std::string activation)
{
    __number_of_node=nodes;
    activation_fun=activation;
}

hidden_layer::~hidden_layer()
{
}

int hidden_layer::get_layer_number(){
    return __number_of_node;
}
