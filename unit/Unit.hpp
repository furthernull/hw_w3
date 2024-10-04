#pragma once
#ifndef UNIT_HPP 
#define UNIT_HPP

#include <iostream>

class Unit {
    private:
        std::string title;
        int hp;
        int maxHP;
        int damage;

    public:
        Unit(const std::string& title, int maxHP, int damage);

        const std::string& getTitle() const;
        int getMaxHP() const;
        int getHP() const;
        int getDamage() const;
        void setTitle(std::string& newTitle);
        void setMaxHP(int maxHP);
        void setHP(int hp);
        void setDamage(int damage);
        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_HPP
