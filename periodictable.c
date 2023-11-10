#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
 
void DisplayElement(const char * elementName){
        if(strcmp(elementName, "Hydrogen") == 0){
        printf("Atomic Number | Symbol | Element Name | Atomic Weight | Melting point |  Boiling point  | Discovery date\n");
        printf("      1       |    H   |   Hydrogen   |    1.0078 u   |  -259.16°C    |    -252.87°C    |      1766     \n");
        printf("-Description; "); sleep(1); 
        printf("Hydrogen is a colorless, odorless, tasteless, and nonpoisonous gas under normal conditions on Earth. It typically exists as a diatomic molecule, meaning each molecule has two atoms of hydrogen; this is why pure hydrogen is commonly expressed as “H2“.\n");
        }
        else if(strcmp(elementName, "Helium") == 0){
        printf("Atomic Number | Symbol | Element Name |  Atomic Weight  | Melting point   |  Boiling point   | Discovery date\n");
        printf("      2       |    He  |   Helium     |    4.0026 u     |   -268.93°C     |    -268.9 °C     |      1868     \n");
        printf("-Description; "); sleep(1);
        printf("helium (He), chemical element, inert gas of Group 18 (noble gases) of the periodic table. The second lightest element (only hydrogen is lighter), helium is a colourless, odourless, and tasteless gas that becomes liquid at -268.9 °C (-452 °F)\n");
        }
        else if(strcmp(elementName, "Lithium") == 0){
        printf("Atomic Number | Symbol   | Element Name | Atomic Weight | Melting point | Boiling point  | Discovery date\n");
        printf("      3       |    Li    |   Lithium    |    6.9410 u   |    180.54°C   |     1342°C     |      1817     \n");
        printf("-Description; "); sleep(1);
        printf("Lithium is a soft, silvery-white, metal that heads group 1, the alkali metals group, of the periodic table of the elements. It reacts vigorously with water. Storing it is a problem. It cannot be kept under oil, as sodium can, because it is less dense and floats.\n");
        }
        else if(strcmp(elementName, "Beryllium") == 0){
        printf("Atomic Number | Symbol | Element Name | Atomic Weight | Melting point | Boiling point  | Discovery date\n");
        printf("      4       |    Be  |   Beryllium  |    9.0122 u   |   1286.85°C   |     2469°C     |      1797     \n");
        printf("-Description; "); sleep(1);
        printf("Beryllium is a steel-gray metal that is quite brittle at room temperature, and its chemical properties somewhat resemble those of aluminum. It does not occur free in nature. Beryllium is found in beryl and emerald, minerals that were known to the ancient Egyptians\n");
        }
        else if(strcmp(elementName, "Boron") == 0){
        printf("Atomic Number |  Symbol  |  Element Name | Atomic Weight  | Melting point |  Boiling point  | Discovery date\n");
        printf("      5       |    B     |     Boron     |   10.811 u     |    2076°C     |     4000°C      |      1808     \n");
        printf("-Description; "); sleep(1);
        printf("Boron is a non metallic element and the only non-metal of the group 13 of the periodic table the elements. Boron is electron-deficient, possessing a vacant p-orbital. It has several forms, the most common of which is amorphous boron, a dark powder, unreactive to oxygen, water, acids and alkalis.\n");
        }
        else if(strcmp(elementName, "Carbon") == 0){
        printf("Atomic Number |  Symbol  | Element Name  |   Atomic Weight  | Melting point | Boiling point |         Discovery date                   \n");
        printf("      6       |     C    |    Carbon     |      12.011 u    |    3,550 °C   |   4,827 °C    |   Egyptians and Sumerians (3750 BCE)     \n");
        printf("-Description; "); sleep(1);
        printf("carbon (C), nonmetallic chemical element in Group 14 (IVa) of the periodic table. Although widely distributed in nature, carbon is not particularly plentiful—it makes up only about 0.025 percent of Earth's crust—yet it forms more compounds than all the other elements combined\n");
        }
        else if(strcmp(elementName, "Nitrogen") == 0){
        printf("Atomic Number |  Symbol |  Element Name  | Atomic Weight | Melting point  |   Boiling point  | Discovery date\n");
        printf("      7       |    N    |    Nitrogen    |    14.007 u   |    -210.01°C   |     -195.79°C    |      1772     \n");
        printf("-Description; "); sleep(1);
        printf("nitrogen (N), nonmetallic element of Group 15 [Va] of the periodic table. It is a colourless, odourless, tasteless gas that is the most plentiful element in Earth's atmosphere and is a constituent of all living matter.\n");
        }
        else if(strcmp(elementName, "Oxygen") == 0){
        printf("Atomic Number | Symbol  | Element Name | Atomic Weight |  Melting point  |  Boiling point  | Discovery date\n");
        printf("      8       |    O    |   Oxygen     |  15.999 u     |    -218.79°C    |    -182.96°C    |      1774     \n");
        printf("-Description; "); sleep(1);
        printf("Oxygen is a chemical element - a substance that contains only one type of atom. Its official chemical symbol is O, and its atomic number is 8, which means that an oxygen atom has eight protons in its nucleus. Oxygen is a gas at room temperature and has no colour, smell or taste. Oxygen is found naturally as a molecule.\n");
        }
        else if(strcmp(elementName, "Fluorine") == 0){
        printf("Atomic Number |  Symbol  | Element Name |  Atomic Weight |  Melting point | Boiling point  | Discovery date\n");
        printf("      9       |    Li    |   Fluorine   |    18.998 u    |    -219.62°C   |   -188.11°C    |      1886     \n");
        printf("-Description; "); sleep(1);
        printf("Fluorine is an univalent poisonous gaseous halogen, it is pale yellow-green and it is the most chemically reactive and electronegative of all the elements. Fluorine readily forms compounds with most other elements, even with the noble gases krypton, xenon and radon.\n");
        }
        else if(strcmp(elementName, "Neon") == 0){
        printf("Atomic Number |  Symbol  | Element Name | Atomic Weight | Melting point |   Boiling point  | Discovery date\n");
        printf("      10      |    Ne    |     Neon     |    20.180 u   |   -248.59°C   |     -246.05°C    |      1898     \n");
        printf("-Description; "); sleep(1);
        printf("neon (Ne), chemical element, inert gas of Group 18 (noble gases) of the periodic table, used in electric signs and fluorescent lamps. Colourless, odourless, tasteless, and lighter than air, neon gas occurs in minute quantities in Earth's atmosphere and trapped within the rocks of Earth's crust.\n");
        }
    }
    

int main(void){
    char elementName[150];
    string choose = get_string("choose if you want to search by: name, atomic number, mass number; ");
        if(strcmp(choose, "name") == 0){
        string elementName = get_string("enter the name of your atom (start with Capital): ");
            if(strcmp(elementName, "Hydrogen") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Helium") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Lithium") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Beryllium") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Boron") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Carbon") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Nitrogen") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Oxygen") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Fluorine") == 0){
            DisplayElement(elementName);
            }
            else if(strcmp(elementName, "Neon") == 0){
            DisplayElement(elementName);
            }
        }
            else if(strcmp(choose, "atomic number") == 0){
                int atomicNumber = get_int("Enter the atomic number of the element: ");
                if(atomicNumber == 1){
                strcpy(elementName, "Hydrogen");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 2){
                strcpy(elementName, "Helium");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 3){
                strcpy(elementName, "Lithium");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 4){
                strcpy(elementName, "Beryllium");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 5){
                strcpy(elementName, "Boron");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 6){
                strcpy(elementName, "Carbon");
                DisplayElement(elementName);
                }
                else if(atomicNumber == 7){
                strcpy(elementName, "Nitrogen");
                DisplayElement(elementName);
                } else if(atomicNumber == 8){
                     strcpy(elementName, "Oxygen");
                     DisplayElement(elementName);
                } else if(atomicNumber == 9){
                     strcpy(elementName, "Fluorine");
                     DisplayElement(elementName);
                
                }
                else if(atomicNumber == 10){
                strcpy(elementName, "Neon");
                DisplayElement(elementName);
                }

            }

                else if(strcmp(choose, "mass number") == 0){
                double massNumber = get_double("Enter the exact mass number without u : ");
                    if(massNumber == 1.0078){
                    strcpy(elementName, "Hydrogen");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 4.0026){
                    strcpy(elementName, "Helium");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 6.9410){
                    strcpy(elementName, "Lithium");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 9.0122){
                    strcpy(elementName, "Beryllium");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 10.811){
                    strcpy(elementName, "Boron");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 12.011){
                    strcpy(elementName, "Carbon");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 14.007){
                    strcpy(elementName, "Nitrogen");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 15.999){
                    strcpy(elementName, "Oxygen");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 18.998){
                    strcpy(elementName, "Fluorine");
                    DisplayElement(elementName);
                    }
                    else if(massNumber == 20.180){
                    strcpy(elementName, "Neon");
                    DisplayElement(elementName);
                    }
                    
                }

}