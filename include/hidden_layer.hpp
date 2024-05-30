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
        void init_weights();
                
public:
    hidden_layer(int nodes,std::string activation);
    ~hidden_layer();
    int get_layer_number();
    void set_input_nodes(int value);
    void show_weights();
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

void hidden_layer::set_input_nodes(int values){
    __input_nodes=values;
    init_weights();
}

void hidden_layer::show_weights()
{
    for(int i: __weights){
        std::cout<<i<<"\n";
    }
}

void hidden_layer::init_weights(){
    if(__input_nodes!=0){
        for (int i=0;i<(__input_nodes*__number_of_node);i++){
            __weights.push_back(i);
        }
    }
    else{
        std::cout<<"input node not defined"<<"\n";
    }
    
}




