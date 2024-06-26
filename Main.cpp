#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x),y(y),z(z) {}

	Vertex (const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << " , " << vertex.y << " , " << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	vertices.emplace_back( 1,2,3 );
	vertices.emplace_back( 4,5,6 );
	vertices.emplace_back( 7,8,9 );

	//for (size_t i = 0; i < vertices.size(); i++)
	//	std::cout << vertices[i] << std::endl;
	//
	//vertices.erase(vertices.begin() + 1);.

	if (vertices.empty())
		std::cout << "The vector is empty." << std::endl;
	else
		for (Vertex& arr : vertices)
			std::cout << arr << std::endl;
		std::cout << "The vector is not empty." << std::endl;

	std::vector<int> num{ 1,3,4,25,6,9,10 };
	std::cout << "Max : " << *std::max_element(begin(num), end(num)) << std::endl;

	std::vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	int& i = v1.back();
	std::cout << "The last integer of v1 is " << i << std::endl;


	


	std::cin.get();
};