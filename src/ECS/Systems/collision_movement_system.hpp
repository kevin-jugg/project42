#pragma once

#include "ECS/Components/collider_component.hpp"
#include "ECS/Components/velocity_component.hpp"
#include "ECS/Components/position_component.hpp"
#include "ECS/entity_manager.hpp"
#include "common.hpp"

class CollisionMovementSystem : public EntitySystem
{
public:
    void init() override;
    void update(float elapsed_sec) override;

private:
    shared_ptr<EntityQuery> m_entity_query;
};
