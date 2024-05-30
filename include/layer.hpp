#include <hidden_layer.hpp>

class layer{
	private:
		int __number_hidden_layer;
		std::vector<int> hidden_layer_nodes;
		
	public:
		layer(int number,std::vector<int> nodes_num);
		
};

layer::layer(int number,std::vector<int> nodes_num){
	__number_hidden_layer=number;
	hidden_layer_nodes=nodes_num;
}




