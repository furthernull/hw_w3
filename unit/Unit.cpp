#include "Unit.hpp"
#include "../exception/UnitIsDeadException.hpp"

Unit::Unit(const std::string& title, int maxHP, int damage) {
    this->title = title;
    this->maxHP = maxHP;
    this->hp = maxHP;
    this->damage = damage;
}

const std::string& Unit::getTitle() const {
    return this->title;
}

int Unit::getMaxHP() const {
    return this->maxHP;
}
        
int Unit::getHP() const {
    return this->hp;
}

int Unit::getDamage() const {
    return this->damage;
}

void Unit::setTitle(std::string& newTitle) {
    this->title = newTitle;
}

void Unit::setMaxHP(int maxHP) {
    if (maxHP < 0) {
        this->maxHP = 0;
        return;
    }
    this->maxHP = maxHP;
}

void Unit::setHP(int hp) {
    if (this->hp > this->maxHP) {
        this->hp = this->maxHP;
        return;
    }
    if (hp < 0) {
        this->hp = 0;
        return;
    }
    this->hp = hp;
}

void Unit::setDamage(int damage) {
    if (damage < 0) {
        this->damage = 0;
        return;
    }
    this->damage = damage;
}

void Unit::attack(Unit& enemy) {
    if (enemy.getHP() == 0) {
        throw UnitIsDeadException("Unit is dead...");
    }
    if (enemy.getHP() <= this->damage) {
        enemy.setHP(0);
        return;
    }
    enemy.setHP(enemy.getHP()-this->damage);
    enemy.counterAttack(*this);
}

void Unit::counterAttack(Unit& enemy) {
    if (enemy.getHP() == 0) {
        throw UnitIsDeadException("Unit is dead...");
    }
    if (enemy.getHP() - this->damage/2 < 0) {
        enemy.setHP(0);
        return;
    }
    enemy.setHP(enemy.getHP() - this->damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getTitle() << ":: hp(" << unit.getHP() << "/" << unit.getMaxHP() << "), ";
    out << "dmg(" << unit.getDamage() << ")";

    return out;
}
