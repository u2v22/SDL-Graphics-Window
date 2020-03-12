/*
 * Particle.h
 *
 *  Created on: Mar. 11, 2020
 *      Author: veronica
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace vhw {

class Particle {
public:
	double m_x;
	double m_y;

	double m_speed;
	double m_direction;

	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

}

#endif /* PARTICLE_H_ */
