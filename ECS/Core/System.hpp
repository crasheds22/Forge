#pragma once

#include "Types.hpp"
#include <set>

namespace Forge_ECS
{
	class System
	{
	public:
		std::set<Entity> mEntities;
	};
}
