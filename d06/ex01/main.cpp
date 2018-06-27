#include <string>
#include <iostream>

struct Data {

	std::string s1;
	int n;
	std::string s2;
};

void	*serialize( void )
{
	srand(time(0));
	Data	*data = new Data;
	std::string k = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++) {
		data->s1 += k[rand() % 62];
		data->s2 += k[rand() % 62];
	}
	data->n = (rand());
	return (reinterpret_cast<void *>(data));
}

Data * deserialize( void * raw )
{
	return (reinterpret_cast<Data *>(raw));
}

int		main()
{
	void	*test;
	Data	*data;

	test = serialize();
	data = deserialize(test);
	std::cout << data->s1 << std::endl << data->n
			  << std::endl << data->s2 << std::endl;

}