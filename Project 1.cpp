#include <iostream> 


class stats 
{
    public:
    int hp;
    int str;
};

void lwpn()
{
    std::cout <<  "You must now choose the weapon of your choice." << std::endl;
    std::cout << "1. Sword/Saber: Melee weapon, can be used by any fighter at any strength." << std::endl;
    std::cout << "2. Spear: Melee weapon, can be used by any spearman to attack from far." << std::endl;
    std::cout << "3. Bow: Ranged weapon, can be used by any archer to attack from far." << std::endl;
    std::cout << "4. Axe: Melee weapon, can be used by to attack from a close or a far." << std::endl;
    std::cout << "5. Pistol: Ranged weapon, can be used by any sharp shooter." << std::endl;
    std::cout << "6. Bombs: Ranged weapon, rare weapon that can be used for any large damage." << std::endl;
    std::cout << "7. Brass Knuckes: Close range weapon, efficient yet very effective to break down your enemies." << std::endl;
    std::cout << "8. Sniper: Long ranged weapon, can be used by any sharp shooter to attack from far distances." << std::endl;
    std::cout << "9. Nunchak: Close range weapon, perfect for attacking at small distance to avoid getting hit." << std::endl;
    std::cout << "10. Throwing Knives: Ranged weapon, these can be used to hit your enemies from a couple yards away." << std::endl;
    std::cout << "Please enter your choice: ";
};
struct Player{
    std::string name;  
    int health;        
    int xp;            
    std::string inventory[10];  
    int inventoryCount = 0;
};

int main()
{
    std::cout << "Welcome to the Castle of Kings! This game is all about being the being the bravest warrior in all the Valley. Are you ready for the journey ahead?" << std::endl;

    Player player;
    player.health = 100; 

    std::cout << "Please enter your name: ";
    std::cin >> player.name;

    std::cout << "Welcome " << player.name << " to the Castle of Kings!" << std::endl;

    int choice;
    
    int nestedChoice;

    bool exploring = true;
    
    while(exploring) {
 
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << player.name << ", choose your character?" << std::endl;
        std::cout << "1. Titan Tamer: The ultimate beast! The strongest fighter in all the valley." << std::endl;
        std::cout << "2. Nova Ninja: The quickest and sneakiest ninja to ever set foot in the valley." << std::endl;
        std::cout << "3. Storm striker: The most precise shooter and smartest combat fighter in the valley. " << std::endl;
        std::cout << "Please enter your choice: ";
        
        stats SS;
        SS.hp = 9;
        SS.str; 
        
        stats NN;
        NN.hp = 8;
        NN.str;

        stats TT;
        TT.hp = 10; 
        TT.str;
        
        std::cin >> choice;
        

        
        switch(choice) {
            
            case 1:
                std::cout << "You chose the Titan Tamer. Your stats are: " << std::endl;
                std::cout << "HP: " << TT.hp << " STR: " << TT.str << std::endl;
                lwpn();
                
                std::cin >> nestedChoice;
                
                if (nestedChoice == 1)
                {
                    std::cout << "Nice job going with the sword, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sword";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
                
                else if (nestedChoice == 2)
                {
                    std::cout << "Nice job going with the Spear, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Spear";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }

                }

                else if (nestedChoice == 3)
                {
                    std::cout << "Nice job going with the Bow, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bow";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            
                 else if (nestedChoice == 4)
                {
                    std::cout << "Nice job going with the Axe, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Axe";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 5)
                {
                    std::cout << "Nice job going with the Pistol, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Pistol";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 6)
                {
                    std::cout << "Nice job going with the Bombs, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bombs";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 7)
                {
                    std::cout << "Nice job going with the Brass Knuckles, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Brass Knuckles";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 8)
                {
                    std::cout << "Nice job going with the Sniper, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sniper";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 9)
                {
                    std::cout << "Nice job going with the Nunchak, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Nunchak";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                    
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 10)
                {
                    std::cout << "Nice job going with the Throwing Knives, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Throwing Knives";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
    
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            break;
            case 2:
                std::cout << "You chose the Nova Ninja.  Your stats are: " << std::endl;
                std::cout << "HP: " << NN.hp << " STR: " << NN.str << std::endl;
                lwpn();
                
                std::cin >> nestedChoice;

                
                if (nestedChoice == 1)
                {
                    std::cout << "Nice job going with the sword, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sword";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
                
                else if (nestedChoice == 2)
                {
                    std::cout << "Nice job going with the Spear, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Spear";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }

                }

                else if (nestedChoice == 3)
                {
                    std::cout << "Nice job going with the Bow, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bow";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            
                 else if (nestedChoice == 4)
                {
                    std::cout << "Nice job going with the Axe, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Axe";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 5)
                {
                    std::cout << "Nice job going with the Pistol, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Pistol";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 6)
                {
                    std::cout << "Nice job going with the Bombs, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bombs";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 7)
                {
                    std::cout << "Nice job going with the Brass Knuckles, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Brass Knuckles";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 8)
                {
                    std::cout << "Nice job going with the Sniper, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sniper";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 9)
                {
                    std::cout << "Nice job going with the Nunchak, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Nunchak";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 10)
                {
                    std::cout << "Nice job going with the Throwing Knives, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Throwing Knives";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                           
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            break;
            case 3:
                std::cout << "You chose the Storm Striker.  Your stats are: " << std::endl;
                std::cout << "HP: " << SS.hp << " STR: " << SS.str << std::endl;
                lwpn();

                
                std::cin >> nestedChoice;
                 
                if (nestedChoice == 1)
                {
                    std::cout << "Nice job going with the sword, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sword";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
                
                else if (nestedChoice == 2)
                {
                    std::cout << "Nice job going with the Spear, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Spear";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }

                }

                else if (nestedChoice == 3)
                {
                    std::cout << "Nice job going with the Bow, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bow";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            
                 else if (nestedChoice == 4)
                {
                    std::cout << "Nice job going with the Axe, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Axe";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 5)
                {
                    std::cout << "Nice job going with the Pistol, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Pistol";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 6)
                {
                    std::cout << "Nice job going with the Bombs, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Bombs";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 7)
                {
                    std::cout << "Nice job going with the Brass Knuckles, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Brass Knuckles";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 8)
                {
                    std::cout << "Nice job going with the Sniper, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Sniper";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 9)
                {
                    std::cout << "Nice job going with the Nunchak, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Nunchak";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }

                else if (nestedChoice == 10)
                {
                    std::cout << "Nice job going with the Throwing Knives, now let's see what you got." << std::endl;
                    player.inventory[player.inventoryCount] = "Throwing Knives";
                    player.inventoryCount++;
                    std::cout << player.name << "'s Inventory:" << std::endl;
                    
                    for (int i = 0; i < player.inventoryCount; i++)
                    {
                        
                        if (!player.inventory[i].empty())
                        {
                            
                            std::cout << "- " << player.inventory[i] << std::endl;
                        }
                    }
                }
            break;
            case 4:
                exploring = false;
                break;
            
            default:
                std::cout << "You did not enter a valid choice." << std::endl;
                continue; 
        }
                        exploring = false; //From Andy Zhang (Remove when gameplay starts)
    }

    
    return 0;
}