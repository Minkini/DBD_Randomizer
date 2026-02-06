//
// Created by nicolas on 8/13/25.
//

#ifndef SURV_DB_H
    #define SURV_DB_H

#include "project.h"

#define NB_SURV_PERK 149
#define NB_KILLER_PERK 133
#define NB_SURV 46
#define NB_KILLER 39

#define DWIGHT "Dwight Fairfield"
#define MEG "Meg Thomas"
#define CLAUDETTE "Claudette Morel"
#define JAKE "Jake Park"
#define NEA "Nea Karlsson"
#define LAURIE "Laurie Strode"
#define ACE "Ace Visconti"
#define BILL "Bill Overbeck"
#define FENG "Feng Min"
#define DAVID "David King"
#define QUENTIN "Quentin Smith"
#define TAPP "David Tapp"
#define KATE "Kate Denson"
#define ADAM "Adam Francis"
#define JEFF "Jeff Johansen"
#define JANE "Jane Romero"
#define ASH "Ash Williams"
#define NANCY "Nancy Wheeler"
#define STEVE "Steve Harrington"
#define YUI "Yui Kimura"
#define ZARINA "Zarina Kassir"
#define CHERYL "Cheryl Mason"
#define FELIX "Felix Richter"
#define ELODIE "Elodie Rakoto"
#define YUN_JIN "Yun_Jin Lee"
#define JILL "Jill Valentine"
#define LEON "Leon Scott Kennedy"
#define MIKAELA "Mikalea Reid"
#define JONAH "Jonah Vasquez"
#define YOICHI "Yoichi Asakawa"
#define HADDIE "Haddie Kaur"
#define ADA "Ada Wong"
#define REBECCA "Rebecca Chambers"
#define VITTORIO "Vittorio Toscano"
#define THALITA "Thalita Lyra"
#define RENATO "Renato lyra"
#define GABRIEL "Gabriel Soma"
#define NICOLAS "Nicolas Cage"
#define ELLEN "Ellen Ripley"
#define ALAN "Alan Wake"
#define SABLE "Sable Ward"
#define AESTRI "The Troupe"
#define LARA "Lara Croft"
#define TREVOR "Trevor Belmont"
#define TAURIE "Taurie Cain"
#define SURV_ALL "All"

#define KILLER_ALL "All"
#define SPRINGTRAP "Animatronic"
#define ARTIST "Artist"
#define BLIGHT "Blight"
#define BUBBA "Cannibal"
#define CLOWN "Clown"
#define DRACULA "The Dark Lord"
#define CALEB "Deathslinger"
#define DEMOGORGON "Demogorgon"
#define DOCTOR "Doctor"
#define DREDGE "Dredge"
#define PYRAMID_HEAD "Executioner"
#define GHOST_FACE "Ghost Face"
#define KANEKI "Ghoul"
#define CHUCKY "Good Guy"
#define HAG "Hag"
#define BILLY "Billy"
#define HOUNDMASTER "Houdmaster"
#define HUNTRESS "Huntress"
#define KNIGHT "Knight"
#define LEGION "Legion"
#define LICH "Lich"
#define WESKER "Mastermind"
#define NEMESIS "Nemesis"
#define FREDDY "Freddy"
#define NURSE "Nurse"
#define ONI "Oni"
#define SADAKO "Onryô"
#define PIGGY "Pig"
#define PLAGUE "Plague"
#define MYERS "Shape"
#define SINGULARITY "Singularity"
#define CORDULA "Skull Merchant"
#define SPIRIT "Spirit"
#define TRAPPER "Trapper"
#define TRICKSTER "Trickster"
#define TWINS "Twins"
#define UNKNOWN "Unknown"
#define WRAITH "Wraith"
#define ALIEN "Xénomorph"

typedef struct perks_s {
    int id;
    char *owner_name;
    char *en_name;
    char *fr_name;
    char *icon_path;
    char *en_description;
    char *fr_description;
    sfSprite *perk_sprite;
} perks_t;

extern perks_t SURV_PERKS_LIST[NB_SURV_PERK];
extern perks_t KILLER_PERKS_LIST[NB_SURV_PERK];

#endif //SURV_DB_H
