#include "glm/vec3.hpp"
#include "glm/glm.hpp"
#include "Triangle.hpp"

#include <array>
#include <vector>

class Scene {

public:
	Scene();
	void drawRoom();
	
private:
	std::vector<Triangle> room;
};
	void Scene::drawRoom() {

		//VERTEXES

		//
		//		p3-----p5
		// p1				 p6
		//		p2-----p4
		//
		glm::vec3 p1_up{-3.0f, 0.0f, 5.0f}, p1_down{-3.0f, 0.0f, -5.0f};
		glm::vec3 p2_up{0.0f, -6.0f, 5.0f}, p2_down{0.0f, -6.0f, -5.0f};
		glm::vec3 p3_up{0.0f, 6.0f, 5.0f}, p3_down{0.0f, 6.0f, -5.0f};
		glm::vec3 p4_up{10.0f, -6.0f, 5.0f}, p4_down{10.0f, -6.0f, -5.0f};
		glm::vec3 p5_up{10.0f, 6.0f, 5.0f}, p5_down{10.0f, 6.0f, -5.0f};
		glm::vec3 p6_up{13.0f, 0.0f, 5.0f}, p6_down{13.0f, 0.0f, -5.0f};

		//Colors
		glm::vec3 White{1.0f, 1.0f, 1.0f};
		glm::vec3 Red{1.0f, 0.0f, 0.0f};
		glm::vec3 Green{0.0f, 1.0f, 0.0f};
		glm::vec3 Blue{0.0f, 0.0f, 1.0f};
		glm::vec3 Yellow{1.0f, 1.0f, 0.0f};
		glm::vec3 Teal{0.0f, 0.5f, 0.5f};
		glm::vec3 Purple{1.0f, 0.0f, 1.0f};

		//ROOF
		//((-3, 0, 5))
		//(0, 6 , 5)
		//(0, -6, 5)

		// (-3, 0, 5)
		// (0, 0, 5)
		// (0, -6, 5)

		//(0, -6, 5)
		//(0, 6, 5)
		//(10, 6, 5)

		//(0, -6, 5)
		//(10, 6, 5)
		//(10, -6, 5)

		//((10, 0, 5))
		//(10, 6 , 5)
		//(13, 0, 5)

		//(10, 0, 5)
		//(13, 0, 5)
		//(10, -6, 5)


		//FLOOR
		//((-3, 0, -5))
		//(0, 0, -5)
		//(0, 6 , -5)

		//(-3, 0, -5)
		//(0, -6, -5)
		//(0, 0, -5)

		//(0, -6, -5)
		//(10, 6, -5)
		//(0, 6, -5)

		//(0, -6, -5)
		//(10, -6, -5)
		//(10, 6, -5)

		//(10, 0, -5)
		//(13, 0, -5)
		//(10, 6 , -5)

		//(10, 0, -5)
		//(10, -6, -5)
		//(13, 0, -5)

		//Negativ xy 1
		//(-3, 0, 5)
		//(0, -6, -5)
		//(-3, 0, -5)

		//Negativ xy 2
		//(-3, 0, 5)
		//(0, -6, 5)
		//(0, -6, -5)

		//Negativ x pos y 1
		//(-3, 0, 5)
		//(-3, 0, -5)
		//(0, 6, -5)

		//Negativ x pos y 2
		//(-3, 0, 5)
		//(0, 6, -5)
		//(0, 6, 5)

		//Långsida neg Y
		//(10, -6, 5)
		//(0, -6, -5)
		//(0, -6, 5)
		
		//(10, -6, 5)
		//(10, -6, -5)
		//(0, -6, -5)

		//Långsida neg Y
		//(10, 6, 5)
		//(0, 6, 5)
		//(0, 6, -5)
		
		//(10, 6, 5)
		//(0, 6, -5)
		//(10, 6, -5)

		//Pos x neg y 1
		//(13, 0, 5)
		//(13, 0, -5)
		//(10, -6, -5)

		//Pos x neg y 2
		//(13, 0, 5)
		//(10, -6, -5)
		//(10, -6, 5)

		//pos x pos y 1
		//(13, 0, 5)
		//(10, 6, -5)
		//(13, 0, -5)

		//pos x pos y 2
		//(13, 0, 5)
		//(10, 6, 5)
		//(10, 6, -5)
	}