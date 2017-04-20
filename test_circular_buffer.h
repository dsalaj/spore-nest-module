/* 
 * This file is part of SPORE.
 *
 * Copyright (c) 2016, Institute for Theoretical Computer Science,
 * Graz University of Technology
 *
 * SPORE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * SPORE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SPORE.  If not, see <http://www.gnu.org/licenses/>.
 *
 * For more information see: https://github.com/IGITUGraz/spore-nest-module
 *
 * File:   test_circular_buffer.h
 */

#ifndef TEST_CIRCULAR_BUFFER_H
#define	TEST_CIRCULAR_BUFFER_H

#include "spore_test_base.h"

namespace spore
{
/**
 * Test class for circular buffer container.
 */
class TestCircularBuffer : public SporeTestBase
{
public:
    TestCircularBuffer();
    virtual void init();
};

}

#endif	/* TEST_CIRCULAR_BUFFER_H */
