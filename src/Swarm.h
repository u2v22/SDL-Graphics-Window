/*
 * Swarm.h
 *
 *  Created on: Mar. 11, 2020
 *      Author: veronica
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace vhw {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * getParticles(){ return m_pParticles; };
};

} /* namespace vhw */

#endif /* SWARM_H_ */
