#include "../../header/Enemy/Controller/SubzeroController.h"
#include "../../header/Enemy/EnemyView.h"
#include "../../header/Enemy/EnemyModel.h"
#include "../../header/Enemy/EnemyConfig.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Bullet/BulletConfig.h"

namespace Enemy
{
	using namespace Global;
	using namespace Time;
	using namespace Bullet;

	namespace Controller
	{
		SubzeroController::SubzeroController(EnemyType type) : EnemyController(type) { }

		SubzeroController::~SubzeroController() { }

		void SubzeroController::initialize()
		{
			EnemyController::initialize();
			enemy_model->setMovementDirection(MovementDirection::DOWN);
			rate_of_fire = subzero_rate_of_fire;
		}

		void SubzeroController::moveLeft() { }

		void SubzeroController::moveRight() { }

		void SubzeroController::moveDown()
		{
			sf::Vector2f currentPosition = enemy_model->getEnemyPosition();
			currentPosition.y += vertical_movement_speed * ServiceLocator::getInstance()->getTimeService()->getDeltaTime();

			enemy_model->setEnemyPosition(currentPosition);
		}

		void SubzeroController::moveDiagonalLeft() { }

		void SubzeroController::moveDiagonalRight() { }

		void SubzeroController::fireBullet()
		{
			ServiceLocator::getInstance()->getBulletService()->spawnBullet(BulletType::TORPEDOE,
				enemy_model->getEnemyPosition() + enemy_model->barrel_position_offset,
				Bullet::MovementDirection::DOWN);
		}
	}
}
