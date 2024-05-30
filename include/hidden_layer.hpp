#include <iostream>
#include <string>
#include <vector>


class hidden_layer
{
private:
        int __number_of_node;
        int __input_nodes;
        std::string activation_fun;
        std::vector<int> __weights;
                
public:
    hidden_layer(int nodes,std::string activation);
    ~hidden_layer();
    int get_layer_number();
    int set_input_nodes(int value);
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

int hidden_layer::set_input_nodes(int values){
    __input_nodes=values;
}


