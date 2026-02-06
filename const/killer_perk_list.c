//
// Created by nicol on 08/01/2026.
//

#include "../include/db.h"

perks_t KILLER_PERKS_LIST[] = {
    {0, KILLER_ALL, "Bitter Murmur", "Murmure amer", "assets/icons/perks/killers/IconPerks_bitterMurmur.png",
        "Each time a generator is fully repaired, Survivors within 16 meters of the completed generator will be revealed for 5 seconds.\n"
        "When the last generator is fully repaired, all the Survivors' auras are revealed for 10 seconds.",
        "Chaque fois qu'un générateur est complètement réparé, les survivants dans un rayon de 16 mètres du générateur réparé sont révélés pendant 5 secondes.\n"
        "Lorsque le dernier générateur est entièrement réparé, toutes les auras des survivants sont révélées pendant 10 secondes.", NULL},

    {1, KILLER_ALL, "Deerstalker", "Pisteur", "assets/icons/perks/killers/IconPerks_deerstalker.png",
        "While a Survivor sees your aura, you see their aura.\n"
        "Every 30 seconds, reveal your aura to the Survivor with the lowest chase time for 3 seconds.",
        "Lorsqu'un survivant voit votre aura, vous voyez la sienne.\n"
        "Toutes les 30 secondes, votre aura est révélée au survivant avec la durée de poursuite la moins longue pendant 3 secondes.", NULL},

    {2, KILLER_ALL, "Distressing", "Inquiétant", "assets/icons/perks/killers/IconPerks_distressing.png",
        "Your Terror Radius is increased by 30%.",
        "Votre rayon de terreur augmente de 30 %.", NULL},

    {3, KILLER_ALL, "Hex: No One Escapes Death", "Sort : Personne n'échappe à la mort", "assets/icons/perks/killers/IconPerks_hexNoOneEscapeDeath.png",
        "Once the exit gates are powered, if there is a Dull Totem remaining on the map, this Hex is applied to it.\n"
        "While this Hex is active,\n"
        "- Survivors suffer from the Exposed status effect.\n"
        "- You have 4% Haste.\n"
        "Once the Hex's effect is revealed to the Survivors, its Hex Totem's aura is shown to the Survivors at a range of 4 meters. This range increases steadily over the next 30 seconds to 24 meters.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Une fois les portes de sortie alimentées, si un totem passif est encore présent sur la carte, ce sort s'y applique.\n"
        "Tant que le sort est actif,\n"
        "- les survivants subissent l'effet de statut À découvert.\n"
        "- vous bénéficiez de 4 % de Rapidité.\n"
        "Dès que l'effet du sort est révélé aux survivants, l'aura de son totem ensorcelé est révélée aux survivants dans un rayon de 4 mètres. Ce rayon augmente progressivement pendant les 30 secondes suivantes jusqu'à 24 mètres.\n"
        "L'effet du sort persiste tant que le totem ensorcelé est présent.", NULL},

    {4, KILLER_ALL, "Hex: Thrill of the Hunt", "sort : Euphorie de la chasse", "assets/icons/perks/killers/IconPerks_hexThrillOfTheHunt.png",
        "For each Dull and Hex Totem remaining on the map gain a token.\n"
        "Survivors' cleansing and blessing speed is reduced by 12% for each token.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Vous gagnez un jeton pour chaque totem ensorcelé ou passif restant sur la carte.\n"
        "La vitesse de purification et de bénédiction de totem des survivants est réduite de 12 % pour chaque jeton.\n"
        "L’effet du sort persiste aussi longtemps que le totem ensorcelé correspondant est debout.", NULL},

    {5, KILLER_ALL, "Insidious", "Insidieux", "assets/icons/perks/killers/IconPerks_insidious.png",
        "Standing still for 1 seconds grants you the Undetectable status effect until you move or act again.",
        "Rester immobile pendant 1 secondes pour bénéficier de l’effet de statut Indétectable jusqu’à ce que vous bougiez ou agissiez à nouveau.", NULL},

    {6, KILLER_ALL, "Iron Grasp", "Poigne de fer", "assets/icons/perks/killers/IconPerks_ironGrasp.png",
        "Effects of Survivor struggling are reduced by 75%. Time to struggle out of your grasp is increased by 12%.",
        "L'effet des ruades des survivants est réduit de 75 %. Le temps nécessaire pour se libérer de votre étreinte augmente de 12 %.", NULL},

    {7, KILLER_ALL, "Scourge Hook: Monstrous Shrine", "Crochet flagellateur : Sanctuaire monstrueux", "assets/icons/perks/killers/IconPerks_scourgeHookMonstrousShrine.png",
        "At the start of the trial, 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "Scourge Hooks grant 20% faster Entity progression if the Killer is not within 24 meters.\n"
        "Basement hooks count as Scourge Hooks.",
        "Au début de l'épreuve, 4 crochets aléatoires sont changés en crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Les crochets flagellateurs accordent une progression d'Entité 20 % plus rapide si le tueur n'est pas dans un rayon de 24 mètres.\n"
        "Les crochets de la cave comptent comme des crochets flagellateurs.", NULL},

    {8, KILLER_ALL, "Shattered Hope", "Espoir brisé", "assets/icons/perks/killers/IconPerks_shatteredHope.png",
        "Whenever you snuff a Boon Totem, the totem is destroyed instead.\n"
        "When you destroy a Boon Totem this way, the auras of all Survivors inside the Boon Totem range are revealed to you for 8 seconds.",
        "Chaque fois que vous éteignez un totem de bénédiction, le totem est détruit à la place.\n"
        "Lorsque vous détruisez ainsi un totem de bénédiction, l'aura de tous les survivants dans le rayon du totem de bénédiction vous est révélée pendant 8 secondes.", NULL},

    {9, KILLER_ALL, "Sloppy Butcher", "Boucher sadique", "assets/icons/perks/killers/IconPerks_sloppyButcher.png",
        "Wounds inflicted by basic attacks cause Survivors to suffer from the Hemorrhage and Mangled status effects for 90 seconds.\n"
        "Increases the rate at which healing progression is lost from Hemorrhage by 25%.",
        "Les blessures causées par des attaques de base infligent aux survivants les effets de statut Hémorragie et Estropiement pendant 90 secondes.\n"
        "Augmente la vitesse à laquelle la progression des soins est perdue à cause d'Hémorragie de 25 %.", NULL},

    {10, KILLER_ALL, "Spies from the Shadows", "Espions de l'ombre", "assets/icons/perks/killers/IconPerks_spiesFromTheShadows.png",
        "100% of the time, cawing crows give you a visual cue when you are within a 36 meter range.\n"
        "Spies From The Shadows has a cooldown of 5 seconds.",
        "Dans 100 % des cas, les corbeaux vous donnent un signal visuel quand vous vous trouvez dans un rayon de 36 mètres.\n"
        "Espions de l'ombre a un temps de recharge de 5 secondes.", NULL},

    {11, KILLER_ALL, "Unrelenting", "Implacable", "assets/icons/perks/killers/IconPerks_unrelenting.png",
        "The cooldown after missed basic attacks is reduced by 30%.",
        "Le temps de rechargement des attaques de base manquées est réduit de 30 %.", NULL},

    {12, KILLER_ALL, "Whispers", "Murmures", "assets/icons/perks/killers/IconPerks_whispers.png",
        "Sporadically hear The Entity's whisper when standing within a 32 meter range of a Survivor.",
        "Entendez sporadiquement le murmure de l'Entité lorsqu'un survivant se trouve dans un rayon de 32 mètres.", NULL},

    {13, KILLER_ALL, "Hex: Fortune's Fool", "Part d'infortune", "assets/icons/perks/killers/IconPerks_hexFortunesFool.png",
        "The first time you hook a Survivor, they become Cursed and Hex: Fortune's Fool activates on a Dull Totem.\n"
        "The Cursed Survivor suffers from the Oblivious status effect until Hex: Fortune's Fool is cleansed.\n"
        "Hex: Fortune's Fool's totem aura is revealed to the Cursed Survivor when within 16 meters of it. For the first 90 seconds, only the Cursed Survivor can cleanse the totem.",
        "La première fois où vous suspendez un survivant à un crochet, il subit Malédiction et le sort : Part d'infortune s’active sur un totem passif.\n"
        "Le survivant maudit souffre de l’effet de statut Inconscient jusqu’à ce que le sort : Part d'infortune soit purifié.\n"
        "L’aura du totem affecté par le sort : Part d'infortune est dévoilée au survivant maudit lorsqu’il s’en trouve à moins de 16 mètres. Pendant les premières 90 secondes, seul le survivant maudit peut purifier le totem.", NULL},

    {14, KILLER_ALL, "Scourge Hook: Weeping Wounds", "crochet flagellateur : Blessures béantes", "assets/icons/perks/killers/IconPerks_scourgeHoohWeepingWounds.png",
        "At the start of the trial, 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "When a Survivor is unhooked from a scourge hook, they suffer from the Hemorrhage and Mangled status effect for 90 seconds.\n"
        "The first time the Survivor is healed, they suffer a 16% speed penalty to healing and repairing actions until injured again.",
        "Au début de la partie, 4 crochets aléatoires sont changés en crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Quand un survivant est libéré d’un crochet flagellateur, il souffre des effets de statut Hémorragie et Estropiement pendant 90 secondes.\n"
        "La première fois que le survivant est soigné, il subit une pénalité de 16 % à la vitesse des soins et réparations jusqu’à ce qu’il soit de nouveau blessé.", NULL},

    {15, KILLER_ALL, "No Holds Barred", "Tous les coups sont permis", "assets/icons/perks/killers/IconPerks_noHoldsBarred.png",
        "After a generator is repaired, The Entity blocks the generator with the most progress for 25 seconds. You see its white aura during this time.",
        "Quand un générateur est réparé, l’Entité bloque le générateur avec la meilleure progression pendant 25 secondes. Vous voyez son aura blanche pendant ce temps.", NULL},

    {16, SPRINGTRAP, "Haywire", "Détraqué", "assets/icons/perks/killers/IconPerks_haywire.png",
        "Exit gate switches with at least 80% progress regress at a rate of 100% of gate opening speed.\n"
        "While they are regressing, Survivors see the exit gate lights flicker randomly.",
        "Les interrupteurs des portes de sortie ayant au moins 80 % de progression régressent à un rythme de 100 % de la vitesse d'ouverture de la porte.\n"
        "Pendant qu'ils régressent, les survivants voient les lumières des portes de sortie clignoter aléatoirement.", NULL},

    {17, SPRINGTRAP, "Help Wanted", "On embauche", "assets/icons/perks/killers/IconPerks_helpWanted.png",
        "When you damage a generator, it becomes Compromised. Only one generator can be Compromised at a time.\n"
        "When the Compromised generator is completed, your successful basic attack cooldowns are 25% faster for 60 seconds.",
        "Lorsque vous endommagez un générateur, celui-ci se retrouve compromis. Il ne peut y avoir qu'un seul générateur compromis à la fois.\n"
        "Lorsque le générateur compromis est complété, vos recharges d'attaque de base réussies sont 25 % plus rapides pendant 60 secondes.", NULL},

    {18, SPRINGTRAP, "Phantom Fear", "Frayeur fantôme", "assets/icons/perks/killers/IconPerks_phantomFear.png",
        "When a Survivor within your Terror Radius looks at you, they scream and you see their aura for 2 seconds.\n"
        "This perk has a 60-second cooldown.",
        "Quand un survivant dans votre rayon de terreur vous regarde, il hurle et vous voyez son aura pendant 2 secondes.\n"
        "Cette compétence a un temps de recharge de 60 secondes.", NULL},

    {19, ARTIST, "Grim Embrace", "Sombre étreinte", "assets/icons/perks/killers/IconPerks_grimEmbrace.png",
        "Each time a Survivor is hooked for the first time, gain a token. When moving 16 meters away from the hook, all generators are blocked for 10 seconds.\n"
        "Upon reaching 4 tokens, when moving 16 meters away from the hook, The Entity instead blocks all generators for 40 seconds. The Obsession's aura is revealed to you for 6 seconds.\n"
        "Then, Grim Embrace deactivates.",
        "Chaque fois qu’un survivant est suspendu à un crochet pour la première fois, vous gagnez un jeton. Lorsque vous vous éloignez de 16 mètres du crochet, tous les générateurs sont bloqués pendant 10 secondes.\n"
        "Dès que vous aurez atteint 4 jetons, lorsque vous vous éloignerez de 16 mètres du crochet, l’Entité bloquera alors tous les générateurs pendant 40 secondes. Vous voyez l’aura de l’obsession pendant 6 secondes.\n"
        "Puis, Sombre étreinte se désactive.", NULL},

    {20, ARTIST, "Hex: Pentimento", "Sort : Repentir", "assets/icons/perks/killers/IconPerks_hexPentimento.png",
        "You see the aura of cleansed totems and can Rekindle each Totem once.\n"
        "While a Totem is Rekindled, Survivors Heal and Repair 20% slower +3% for each additional Rekindled Totem.\n"
        "If all five totems are Rekindled simultaneously, all Totems are permanently blocked by The Entity.\n"
        "Survivors cursed by this perk see the auras of Rekindled Totems within 16 meters.",
        "Vous voyez l’aura des totems purifiés et vous pouvez raviver chaque totem une fois.\n"
        "Lorsqu'un totem est ravivé, la vitesse de réparation et de soins des survivants est réduite de 20 %, + 3 % pour chaque totem ravivé supplémentaire.\n"
        "Si cinq totems sont ravivés simultanément, tous les totems sont bloqués par l’Entité de manière permanente.\n"
        "Les survivants maudits par cette compétence voient l'aura des totems ravivés à partir de 16 mètres de distance.", NULL},

    {21, ARTIST, "Scourge Hook: Pain Resonance", "Crochet flagellateur : Écho de douleur", "assets/icons/perks/killers/IconPerks_scourgeHookPainResonance.png",
        "At the start of the trial, 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "You start the Trial with 4 tokens, 1 for each Survivor. If a generator is available when that Survivor is hooked on a scourge hook, lose 1 token.\n"
        "The generator with the most progress explodes, instantly losing 20% progress, and will start to regress. Survivors repairing the generator will scream.\n"
        "Once you have no tokens, Pain Resonance deactivates for the rest of the Trial.",
        "Au début de l'épreuve, 4 crochets aléatoires sont changés en crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Vous commencez l'épreuve avec 4 jetons, 1 pour chaque survivant. Si un générateur est disponible lorsque ce survivant est suspendu à un crochet flagellateur, vous perdez 1 jeton.\n"
        "Le générateur avec la meilleure progression explose, perdant immédiatement 20 % de sa progression, et il commencera à régresser. Les survivants en train de réparer le générateur hurleront.\n"
        "Lorsque vous n'avez plus aucun jeton, Écho de douleur se désactive pour le restant de l'épreuve.", NULL},

    {22, BLIGHT, "Dragon's Grip", "Prise du Dragon", "assets/icons/perks/killers/IconPerks_dragonsGrip.png",
        "After damaging a generator, for the next 30 seconds, the first Survivor that interacts with it will scream, revealing their location for 4 seconds, and becoming afflicted with the Exposed status effect for 60 seconds.\n"
        "Dragon’s Grip has a cooldown of 30 seconds.",
        "Après avoir endommagé un générateur, le premier survivant qui interagit avec dans les 30 prochaines secondes se met à crier, dévoilant sa position pendant 4 secondes, et il souffre de l’effet de statut À découvert pendant 60 secondes.\n"
        "Prise du dragon a un temps de recharge de 30 secondes.", NULL},

    {23, BLIGHT, "Hex: Blood Favor", "Sort : Faveur de sang", "assets/icons/perks/killers/IconPerks_hexBloodFavor.png",
        "Injuring a Survivor will call upon The Entity to block pallets from being pulled down within a 32 meter radius of the Survivor location for 15 seconds.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Blesser un survivant invoque l’Entité pour bloquer les palettes dans un rayon de 32 mètre(s) autour de la position du survivant pendant 15 secondes.\n"
        "Les effets du sort persistent tant que le totem ensorcelé est debout.", NULL},

    {24, BLIGHT, "Hex: Undying", "Sort : Immortel", "assets/icons/perks/killers/IconPerks_hexUndying.png",
        "While Hex: Undying is active, Survivors within 4 meters of any Dull Totem have their aura revealed.\n"
        "When another Hex Totem would be cleansed, that Totem's Hex transfers to the Hex: Undying Totem, deactivating Hex: Undying. Any tokens the transferred Hex had are transferred as well.",
        "Pendant que le Sort : Immortel est actif, l’aura des survivants à moins de 4 mètres d’un totem passif est révélée.\n"
        "Lorsqu'un autre totem ensorcelé est purifié, le sort de ce totem est transféré au totem Sort : Immortel, désactivant ce sort. Tous les jetons du sort transféré le sont également.", NULL},

    {25, BUBBA, "Barbecue & Chili", "Chili et barbecue", "assets/icons/perks/killers/IconPerks_barbecueAndChilli.png",
        "After hooking a Survivor, all other Survivors' auras are revealed to you for 5 seconds when they are further than 40 meters from the hook.",
        "Après avoir accroché un survivant, les auras de tous les autres survivants vous sont révélées pendant 5 secondes lorsqu'ils se trouvent à plus de 40 mètres du crochet.", NULL},

    {26, BUBBA, "Franklin's Demise", "Trépas de Franklin", "assets/icons/perks/killers/IconPerks_franklinsDemise.png",
        "Your basic attacks make Survivors drop their item on impact.\n"
        "Reveal items on the ground within 64 meters with a white aura.",
        "Vos attaques de base forcent les survivants à lâcher leur objet à l’impact.\n"
        "Dévoile les objets au sol à moins de 64 mètres avec une aura blanche.", NULL},

    {27, BUBBA, "Knock Out", "K.O.", "assets/icons/perks/killers/IconPerks_knockOut.png",
        "When a Survivor drops a pallet, if they move 6 meters away from it within 6 seconds, they gain 5% Hindered for 5 seconds.",
        "Lorsqu'un survivant lâche une palette, s'il s'en éloigne de 6 mètres en moins de 6 secondes il subit 5 % d'Entrave pendant 5 secondes.", NULL},

    {28, CLOWN, "Bamboozole", "Déboussoler", "assets/icons/perks/killers/IconPerks_bamboozole.png",
        "Your vault speed is 15% faster.\n"
        "Performing a vault action calls upon The Entity to block that vault location to Survivors for 16 seconds.\n"
        "Only 1 vault location may be blocked in this way at any time.\n"
        "Does not affect pallets.",
        "Votre vitesse lors d'un saut d'obstacles est 15 % plus rapide.\n"
        "Sauter par-dessus un obstacle fait que l'Entité bloque le lieu de cette action aux survivants pendant 16 secondes.\n"
        "Un seul lieu peut être bloqué de cette manière à tout moment.\n"
        "N'affecte pas les palettes", NULL},

    {29, CLOWN, "Coulrophobia", "Coulrophobie", "assets/icons/perks/killers/IconPerks_coulrophobia.png",
        "Survivors within your Terror Radius have a 50% penalty to healing progression speed, and healing Skill Checks move 50% faster.",
        "Les survivants dans votre rayon de terreur ont 50 % de malus de vitesse de progression des soins, et les tests d'habileté de soins bougent 50 % plus vite.", NULL},

    {30, CLOWN, "Pop Goes the Weasel", "Le tour est joué", "assets/icons/perks/killers/IconPerks_popGoesTheWeasel.png",
        "After hooking a Survivor, the next generator you damage instantly loses 20% of its current progress. Normal generator regression applies after the Damage Generator action.\n"
        "Pop Goes the Weasel is active for 45 seconds after the Survivor is hooked.",
        "Après avoir suspendu un survivant à un crochet, le générateur suivant que vous endommagez perd immédiatement 20 % de sa progression actuelle. La régression normale est appliquée au générateur suite à l'action Endommager le générateur.\n"
        "Le tour est joué est actif pendant 45 secondes après que le survivant a été suspendu.", NULL},

    {31, DRACULA, "Dominance", "Domination", "assets/icons/perks/killers/IconPerks_dominance.png",
        "The first time each totem and each chest is interacted with by a Survivor, that totem or chest is blocked by the Entity for 16 seconds.\n"
        "The auras of blocked totems and chests are revealed to you in white.",
        "La première fois que chaque totem et chaque coffre est manipulé par un survivant, ce totem ou ce coffre est bloqué par l’Entité pendant 16 secondes.\n"
        "L'aura des totems et des coffres bloqués vous est révélée en blanc.", NULL},

    {32, DRACULA, "Human Greed", "Avidité humaine", "assets/icons/perks/killers/IconPerks_humanGreed.png",
        "You see the auras of Unopened chests and Survivors' auras are revealed for 5 seconds when they enter a 8-meter range.\n"
        "You also gain the ability to kick chests to close them. This ability has a 10-second cooldown.",
        "Vous voyez l’aura des coffres fermés et celle des survivants est révélée pendant 5 secondes lorsqu’ils entrent dans un rayon de 8 mètres.\n"
        "Vous obtenez la capacité de frapper les coffres pour les fermer. Cette capacité a un temps de recharge de 10 secondes.", NULL},

    {33, DRACULA, "Hex: Wretched Fate", "Sort : Destin misérable", "assets/icons/perks/killers/IconPerks_hexWretchedFate.png",
        "After one generator has been repaired, a random Dull Totem becomes a Hex Totem and curses the Obsession.\n"
        "The Obsession suffers a 33% repair speed penalty. They also see this Hex Totem's aura when within 12 meters.\n"
        "This effect persists until the Hex Totem is cleansed.",
        "Lorsqu'un générateur a été réparé, un totem passif aléatoire devient un totem ensorcelé et maudit l’obsession.\n"
        "L’obsession subit une pénalité de 33 % à la vitesse de réparation. Elle voit également l’aura de ce totem ensorcelé lorsqu’elle se trouve à moins de 12 mètres.\n"
        "Cet effet persiste tant que le totem ensorcelé n’est pas purifié.", NULL},

    {34, CALEB, "Hex: Retribution", "Sort : Châtiment", "assets/icons/perks/killers/IconPerks_hexRetribution.png",
        "Any Survivor interacting with a Dull Totem or a Hex Totem will suffer from the Oblivious status effect for 60 seconds.\n"
        "If any Hex Totem is removed, including this one, the auras of all Survivors are revealed for 20 seconds.",
        "Tout survivant qui interagit avec un totem passif ou ensorcelé subira l’effet de statut Inconscient pendant 60 secondes.\n"
        "Si un totem ensorcelé est retiré, y compris celui-ci, l’aura de tous les survivants est révélée pendant 20 secondes.", NULL},

    {35, CALEB, "Gearhead", "Bricolo", "assets/icons/perks/killers/IconPerks_gearhead.png",
        "After a survivor loses a health state by any means, Gearhead activates for 30 seconds.\n"
        "While Gearhead is active, every time a Survivor performs a good Skill Check while repairing, their aura is revealed to you for 8 seconds.",
        "Quand un survivant perd un état de santé par n'importe quel moyen, Bricolo s’active pendant 30 secondes.\n"
        "Quand Bricolo est actif, chaque fois qu'un survivant effectue un bon test d’habileté pendant une réparation, vous voyez son aura pendant 8 secondes.", NULL},

    {36, CALEB, "Dead Man’s Switch", "Dispositif de l’homme mort", "assets/icons/perks/killers/IconPerks_deadMansSwitch.png",
        "When you hook a Survivor, Dead Man’s Switch activates. The first Survivor that stops repairing a generator causes The Entity to block it for 35 seconds.\n"
        "The affected generator is highlighted by a white aura.\n"
        "Dead Man’s Switch cannot reactivate while it is blocking a generator.",
        "Lorsque vous accrochez un survivant, Dispositif de l’homme mort s'active. Le premier survivant qui interrompt ses réparations d'un générateur fait que l’Entité bloque celui-ci pendant 35 secondes.\n"
        "Le générateur affecté est entouré d’une aura blanche.\n"
        "Dispositif de l’homme mort ne peut pas être réactivé tant qu'il bloque un générateur.", NULL},

    {37, DEMOGORGON, "Mindbreaker", "Briseur d’esprit", "assets/icons/perks/killers/IconPerks_mindbreaker.png",
        "While repairing generators, Survivors are afflicted by the Blindness and Exhausted status effect.\n"
        "Any existing Exhausted status effect timers are paused while the Survivor is repairing a generator. After ending the repair action, the Survivor is afflicted by the Blindness and Exhausted status effect for 5 seconds.",
        "Quand ils réparent les générateurs, les survivants souffrent des effets de statut Aveuglement et Épuisement.\n"
        "Tout chronomètre d’effet de statut Épuisement existant est mis en pause pendant que le survivant répare un générateur. Après avoir terminé la réparation, le survivant souffre des effets de statut Aveuglement et Épuisement pendant 5 secondes.", NULL},

    {38, DEMOGORGON, "Cruel Limits", "Limites cruelles", "assets/icons/perks/killers/IconPerks_cruelLimits.png",
        "Chaque fois qu’un générateur est terminé, les fenêtres et les sauts d’obstacles sont tous bloqués pour tous les survivants pendant les 30 secondes qui suivent.\n"
        "Vous voyez l’aura des emplacements de saut bloqués par Limites cruelles pendant toute la durée.", NULL},

    {39, DEMOGORGON, "Surge", "Surtension", "assets/icons/perks/killers/IconPerks_surge.png",
        "Putting a Survivor into the dying state with a basic attack causes all generators within a 32-meter radius to explode instantly and begin regressing. Survivors repairing the generator will scream. Generators affected by Surge immediately lose 8% of their progress.",
        "Plonger un survivant en état critique avec une attaque de base provoque l’explosion immédiate de tous les générateurs dans un rayon de 32 mètres et ils commencent à régresser. Les survivants en train de réparer les générateurs hurleront. Les générateurs affectés par Surtension perdent immédiatement 8 % de leur progression.", NULL},

    {40, DOCTOR, "Overwhelming Presence", "Présence écrasante", "assets/icons/perks/killers/IconPerks_overwhelmingPresence.png",
        "When a Survivor starts using an item within 32 meters of you, they gain Exhausted for 15 seconds.\n"
        "When a Survivor within 32 meters of you gains Exhausted, you see the closest Exhausted Survivor's aura for 4 seconds.\n"
        "This perk has a 25-second cooldown.",
        "Lorsqu'un survivant utilise un objet dans votre Rayon de terreur, il subit Épuisement pendant 32 secondes.\n"
        "Quand un survivant dans votre Rayon de terreur gagne Épuisement, vous voyez son aura pendant 15 secondes.\n"
        "Cette compétence a un temps de recharge de 4 secondes.", NULL},

    {41, DOCTOR, "Overcharge", "Surcharge", "assets/icons/perks/killers/IconPerks_overcharge.png",
        "Overcharge a generator by performing the Damage Generator action. The next Survivor interacting with that generator is faced with a difficult Skill Check. Failing the Skill Check results in an additional 4% loss of progress.\n"
        "Succeeding the Skill Check grants no progress but prevents the generator explosion.\n"
        "After Overcharge is applied to a generator, its regression speed increases from 85% of normal to 130% of normal over the next 30 seconds.",
        "Surchargez un générateur en effectuant l'action Endommager le générateur. Le prochain survivant à interagir avec ce générateur doit faire face à un test d'habileté difficile. Échouer au test d'habileté génère une perte de progression supplémentaire de 4 %.\n"
        "Réussir le test d'habileté n'accorde aucune progression mais empêche le générateur d'exploser.\n"
        "Après l'application de Surcharge sur un générateur, sa vitesse de régression augmente de 85 % de la normale à 130 % de la normale pendant les 30 secondes suivantes.", NULL},

    {42, DOCTOR, "Monitor & Abuse", "Surveillance et maltraitance", "assets/icons/perks/killers/IconPerks_monitorAndAbuse.png",
        "While in a chase, your Terror Radius is increased by 15%. Otherwise, your Terror Radius is decreased by 25%.",
        "Pendant une poursuite, votre rayon de terreur est augmenté de 15 %. Autrement, votre rayon de terreur est réduit de 25 %.", NULL},

    {43, DREDGE, "Dissolution", "Dissolution", "assets/icons/perks/killers/IconPerks_dissolution.png",
        "3 seconds after injuring a Survivor by any means, Dissolution activates for 20 seconds. While Dissolution is active, if a Survivor fast vaults over a pallet inside of your Terror Radius, The Entity will break the pallet at the end of the vault, and Dissolution deactivates.",
        "3 secondes après avoir blessé un survivant par n'importe quel moyen, Dissolution s'active pendant 20 secondes. Tant que Dissolution est actif, si un survivant saute en courant par-dessus une palette dans votre rayon de terreur, l'Entité brisera la palette à l'issue du saut et Dissolution se désactivera.", NULL},

    {44, DREDGE, "Septic Touch", "Toucher septique", "assets/icons/perks/killers/IconPerks_septicTouch.png",
        "Whenever a Survivor performs the healing action within your Terror Radius, that Survivor suffers from Blindness and Exhausted.\n"
        "These effects linger for 30 seconds after a healing action is interrupted by any means.",
        "Quand un survivant effectue l'action de soins dans votre rayon de terreur, ce survivant subit Aveuglement et Épuisement.\n"
        "Ces effets perdurent 30 secondes après l'interruption par n'importe quel moyen d'une action de soins.", NULL},

    {45, DREDGE, "Darkness Revealed", "Ténèbres révélées", "assets/icons/perks/killers/IconPerks_darknessRevealed.png",
        "When you search a locker, the auras of all Survivors within 8 meters of any lockers are revealed to you for 8 seconds.\n"
        "Darkness Revealed has a cooldown of 30 seconds.",
        "Lorsque vous fouillez un casier, l'aura de tous les survivants dans un rayon de 8 mètres autour de chaque casier vous est révélée pendant 8 secondes.\n"
        "Ténèbres révélées se recharge en 30 secondes.", NULL},

    {46, PYRAMID_HEAD, "Deathbound", "Lien mortel", "assets/icons/perks/killers/IconPerks_deathbound.png",
        "When a Survivor heals another Survivor, the healer Survivor screams and activates Deathbound. While they are at least 4 meters apart, the healer Survivor sees the aura of the Survivor they healed and suffers from the Oblivious status effect. Deathbound lasts until the healer loses a health state.",
        "Quand un survivant soigne un autre survivant, le soigneur hurle et active Lien mortel. Lorsqu'ils sont à moins de 4 mètres l'un de l'autre, le soigneur voit l'aura du survivant qu'il a soigné et souffre de l’effet de statut Inconscient. Lien mortel dure jusqu'à ce que le soigneur perde un état de santé.", NULL},

    {47, PYRAMID_HEAD, "Forced Penance", "Pénitence forcée", "assets/icons/perks/killers/IconPerks_forcedPenance.png",
        "Survivors who take a protection hit are inflicted with the Broken status effect for 80 seconds.",
        "Les survivants qui subissent un coup de protection souffrent de l’effet de statut Brisé pendant 80 secondes.", NULL},

    {48, PYRAMID_HEAD, "Trail of Torment", "Piste de souffrance", "assets/icons/perks/killers/IconPerks_trailOfTorment.png",
        "After damaging a generator, you become Undetectable until the generator stops regressing. During this time, the generator’s yellow aura is revealed to Survivors.\n"
        "This effect can only trigger once every 30 seconds.",
        "Après avoir endommagé un générateur, vous devenez Indétectable jusqu’à ce que le générateur cesse de régresser. Pendant ce temps, l’aura jaune du générateur est révélée aux survivants.\n"
        "Cet effet ne peut être activé qu’une seule fois toutes les 30 secondes.", NULL},

    {49, GHOST_FACE, "Thrilling Tremors", "Frissons palpitants", "assets/icons/perks/killers/IconPerks_thrillingTremors.png",
        "After picking up a Survivor, all Generators not being repaired by Survivors are blocked by The Entity and cannot be repaired for the next 16 seconds. Affected generators are highlighted by a white aura.\n"
        "Thrilling Tremors can only be triggered once every 30 seconds.",
        "Après avoir ramassé un survivant, tous les générateurs non réparés par les survivants sont bloqués par l'Entité et ne peuvent pas être réparés pendant les 16 prochaines secondes. Les générateurs affectés sont entourés d'une aura blanche.\n"
        "Frissons palpitants ne peut être activé qu'une fois toutes les 30 secondes.", NULL},

    {50, GHOST_FACE, "I'm All Ears", "Je vous écoute", "assets/icons/perks/killers/IconPerks_imAllEars.png",
        "Unlocks potential in one's aura reading ability. Any Survivor performing a rushed action within 48 meters from your location will have their aura revealed for 8 seconds.\n"
        "I'm All Ears can only be triggered once every 30 seconds.", NULL},

    {51, GHOST_FACE, "Furtive Chase", "Poursuite furtive", "assets/icons/perks/killers/IconPerks_furtiveChase.png",
        "You become obsessed with one Survivor. When your Obsession is hooked, gain the Undetectable status effect and a 10% Haste status effect for 18 seconds.\n"
        "When a Survivor rescues the Obsession from a hook, the rescuer becomes the Obsession.",
        "Vous devenez obsédé par un survivant. Quand votre obsession est suspendue à un crochet, vous gagnez l'effet de statut Indétectable et 10 % d'effet de statut de Rapidité pendant 18 secondes.\n"
        "Quand un survivant sauve l’obsession d’un crochet, le sauveteur devient l’obsession.", NULL},

    {52, KANEKI, "Hex: Nothing But Misery", "Sort : Que du malheur", "assets/icons/perks/killers/IconPerks_hexNothingButMisery.png",
        "After you damage Survivors 8 times with basic attacks, a Dull Totem becomes a Hex Totem, cursing all Survivors.\n"
        "When you damage a Survivor with a basic attack, they gain 5% Hindered for 15 seconds.\n"
        "The effects last until the Hex Totem is cleansed.",
        "Dès que vous aurez blessé des survivants 8 fois avec des attaques de base, un totem passif deviendra un totem ensorcelé et maudira tous les survivants.\n"
        "Lorsque vous blessez un survivant avec une attaque de base, il reçoit 5 % d'Entrave pendant 15 secondes.\n"
        "Les effets durent jusqu'à ce que le totem ensorcelé soit purifié.", NULL},

    {53, KANEKI, "Forever Entwined", "À jamais liés", "assets/icons/perks/killers/IconPerks_foreverEntwined.png",
        "When a Survivor takes damage, gain 1 token, up to 8.\n"
        "For each token, you pick up, drop and hook Survivors 4% faster.",
        "Lorsqu'un survivant est blessé, gagnez 1 jeton, pour un maximum de 8.\n"
        "Pour chaque jeton, vous ramassez, lâchez et accrochez les survivants 4 % plus vite.", NULL},

    {54, KANEKI, "None Are Free", "Personne n'est libre", "assets/icons/perks/killers/IconPerks_noneAreFree.png",
        "When you hook a Survivor for the first time, gain 1 token, up to 4.\n"
        "When all generators are completed, for each token, all windows and upright pallets are blocked for 16 seconds.",
        "Lorsque vous accrochez un survivant pour la première fois, vous gagnez 1 jeton, jusqu'à 4 au maximum.\n"
        "Lorsque tous les générateurs sont achevés, pour chaque jeton, toutes les fenêtres et les palettes debout sont bloquées pendant 16 secondes.", NULL},

    {55, CHUCKY, "Hex: Two Can Play", "Sort : On peut jouer à deux", "assets/icons/perks/killers/IconPerks_hexTwoCanPlay.png",
        "Anytime you are stunned or blinded by any Survivor 2 times, if there is no Hex Totem associated with Hex: Two Can Play, a Dull Totem becomes a Hex Totem.\n"
        "Survivors who stun or blind you are blinded for 1.5 seconds. This does not affect carried Survivors.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Lorsque vous vous faites étourdir ou aveugler par des survivants 2 fois, si aucun totem ensorcelé n'est associé à Sort : On peut jouer à deux, un totem passif devient un totem ensorcelé.\n"
        "Les survivants qui vous étourdissent ou vous aveuglent se retrouvent aveuglés pendant 1.5 seconde. Ceci n'affecte pas les survivants transportés.\n"
        "Les effets du sort persistent aussi longtemps que le totem ensorcelé correspondant est intact.", NULL},

    {56, CHUCKY, "Friends ‘Til the End", "Amis pour la vie", "assets/icons/perks/killers/IconPerks_friendsTilTheEnd.png",
        "When you hook a Survivor that is not the Obsession, the Obsession becomes Exposed for 20 seconds and reveals their aura for 10 seconds.\n"
        "When you hook the Obsession, another random Survivor screams and reveals their position and becomes the Obsession.",
        "Lorsque vous suspendez à un crochet un survivant qui n'est pas l'obsession, l'obsession se retrouve À découvert pendant 20 secondes et son aura est révélée pendant 10 secondes.\n"
        "Lorsque vous suspendez l'obsession à un crochet, un autre survivant aléatoire crie tout en révélant sa position et devient l'obsession.", NULL},

    {57, CHUCKY, "Batteries Included", "Piles incluses", "assets/icons/perks/killers/IconPerks_batteriesIncluded.png",
        "When within 16 meters of a completed generator, you have 5% Haste.\n"
        "The movement speed bonus lingers for 5 seconds after leaving the generator's range.",
        "Dans un rayon de 16 mètres d'un générateur complété, vous avez 5 % de Rapidité.\n"
        "Le bonus de vitesse de déplacement perdure 5 secondes après que vous avez quitté la zone du générateur.", NULL},

    {58, HAG, "Hex: Devour Hope", "Sort : Mangeur d'espoir", "assets/icons/perks/killers/IconPerks_hexDevourHope.png",
        "When a Survivor is rescued from a hook at least 24 meters away, Devour Hope receives a token.\n"
        "- 2 Tokens: Gain a 5% Haste status effect, 10 seconds after hooking a Survivor, for a duration of 10 seconds.\n"
        "- 3 Tokens: Survivors suffer from the Exposed status effect.\n"
        "- 5 Tokens: Grants the ability to kill Survivors by your own hand.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Quand un survivant est sauvé d’un crochet qui se trouve au moins à 24 mètres, Mangeur d’espoir reçoit un jeton.\n"
        "- 2 jetons : Gain d’un effet de statut de 5 % en Rapidité, 10 secondes après avoir libéré un survivant d’un crochet, pendant 10 secondes.\n"
        "- 3 jetons : les survivants souffrent de l’effet de statut À découvert.\n"
        "- 5 jetons : donne la faculté de tuer les survivants de vos propres mains\n"
        "Les effets du sort persistent tant que le totem ensorcelé est en place.", NULL},

    {59, HAG, "Hex: Ruin", "Sort : Ruine", "assets/icons/perks/killers/IconPerks_hexRuin.png",
        "All generators are affected by Hex: Ruin. While a generator is not being repaired by a Survivor, it will immediately and automatically regress repair progress at 150% of the normal regression speed.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Tous les générateurs sont affectés par le sort : Ruine. Si un générateur n'est pas en train d'être réparé par un survivant, la progression de ses réparations régresse immédiatement et automatiquement à 150 % de la vitesse de régression normale.\n"
        "Les effets du sort persistent tant que le totem ensorcelé est en place.", NULL},

    {60, HAG, "Hex: The Third Seal", "Sort : Le troisième sceau", "assets/icons/perks/killers/IconPerks_hexTheThirdSeal.png",
        "Hitting a Survivor with a basic attack or a special attack while the Hex Totem is active applies the Blindness status effect. This effect applies to the last 4 Survivors hit.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Frapper un survivant avec une attaque de base ou une attaque spéciale pendant que le totem ensorcelé est actif applique l’effet de statut Aveuglement. Cet effet s’applique aux 4 derniers survivants frappés.\n"
        "Les effets du sort persistent tant que le totem ensorcelé est en place.", NULL},

    {61, BILLY, "Lightborn", "Rejeton de la lumière", "assets/icons/perks/killers/IconPerks_lightborn.png",
        "You are immune to blindness caused by Flashlights, firecrackers, flashbangs, and blast mines. Survivors that attempt blinding you have their aura revealed for 10 seconds.",
        "Vous êtes immunisé à l’Aveuglement provoqué par les lampes de poche, les pétards, les grenades aveuglantes et les mines explosives. L’aura des survivants qui tentent de vous aveugler est révélée pendant 10 secondes.", NULL},

    {62, BILLY, "Tinkerer", "Réparateur", "assets/icons/perks/killers/IconPerks_tinkerer.png",
        "Whenever a generator is repaired to 70% progress, it triggers a loud noise notification and you are granted the Undetectable status effect for the next 16 seconds. This effect can only be triggered once on each generator.",
        "Lorsqu'un générateur est réparé à 70 %, une notification sonore est déclenchée et vous bénéficiez de l’effet de statut Indétectable pendant 16 secondes. Cet effet ne peut être déclenché qu'une fois par générateur.", NULL},

    {63, BILLY, "Enduring", "Tenace", "assets/icons/perks/killers/IconPerks_enduring.png",
        "You reduce the duration of pallet stuns by 50%. Has no effect while carrying a Survivor.",
        "Vous résistez à la douleur. Vous réduisez la durée des étourdissements par palette de 50 %. N'a aucun effet pendant le transport d'un survivant.", NULL},

    {64, HOUNDMASTER, "Scourge Hook: Jagged Compass", "Crochet flagellateur : Boussole de douleur", "assets/icons/perks/killers/IconPerks_scourgeHookJaggedCompass.png",
        "At the start of the trial, up to 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "When a Survivor is unhooked from a hook, it becomes a scourge hook.\n"
        "When you hook a Survivor on a scourge hook, the aura of the generator with the most progress is revealed in yellow for 10 seconds.",
        "Au début de l'épreuve, jusqu'à 4 crochets aléatoires deviennent des crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Lorsqu'un survivant est décroché, le crochet qu'il occupait devient un crochet flagellateur.\n"
        "Lorsque vous suspendez un survivant à un crochet flagellateur, l'aura du générateur ayant le plus progressé est révélée en jaune pendant 10 secondes.", NULL},

    {65, HOUNDMASTER, "All-Shaking Thunder", "Coup de tonnerre", "assets/icons/perks/killers/IconPerks_allShakingThunder.png",
        "After you fall from a height, your lunge attack distance is increased by 75% for 25 seconds.\n"
        "This perk has a 5-second cooldown.",
        "Lorsque vous tombez d'une hauteur, la distance de votre attaque chargée est augmentée de 75 % pendant 25 secondes.\n"
        "Cette compétence a un temps de recharge de 5 secondes.", NULL},

    {66, HOUNDMASTER, "No Quarter", "Pas de quartier", "assets/icons/perks/killers/IconPerks_noQuarter.png",
        "When a Survivor reaches 75% healing progress while self-healing, they are faced with continuous Skill Checks.\n"
        "If one of these Skill Checks is missed or the heal is interrupted, the Survivor suffers from the Broken status effect for 30 seconds.",
        "Lorsqu'un survivant atteint 75 % de progression en se soignant, il est bombardé de tests d'habileté continus.\n"
        "Si l'un de ces tests d'habileté est raté, ou que les soins sont interrompus, le survivant souffre de l'effet de statut Brisé pendant 30 secondes.", NULL},

    {67, HUNTRESS, "Hex: Huntress Lullaby", "Sort : Berceuse de la Chasseuse", "assets/icons/perks/killers/IconPerks_hexHuntressLullaby.png",
        "Survivors receive a 6% regression penalty when missing a Skill Check while healing or repairing.\n"
        "Each time a Survivor is hooked, Huntress Lullaby grows in power. It affects healing and repairing Skill Check warnings:\n"
        "- 1 to 4 Tokens: Time between the Skill Check warning sound and the Skill Check becomes shorter.\n"
        "5 Tokens: No Skill Check warning.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Les survivants subissent un malus de régression de 6 % quand ils ratent un test d’habileté en soignant ou en réparant.\n"
        "Chaque fois qu’un survivant est suspendu à un crochet, la Berceuse de la Chasseuse gagne en puissance et affecte les avertissements de tests d’habileté de soins et de réparations.\n"
        "- 1 à 4 jetons : le délai entre le son d’avertissement du test d’habileté et ce dernier se raccourcit.\n"
        "- 5 jetons : aucun avertissement de test d’habileté.\n"
        "Les effets du sort persistent tant que le totem ensorcelé est debout.", NULL},

    {68, HUNTRESS, "Beast of Prey", "Prédation", "assets/icons/perks/killers/IconPerks_beastOfPrey.png",
        "When you gain Bloodlust, gain Undetectable for 40 seconds.",
        "Lorsque vous gagnez Soif de sang, vous gagnez Indétectable pendant 40 secondes.", NULL},

    {69, HUNTRESS, "Territorial Imperative", "Instinct territorial", "assets/icons/perks/killers/IconPerks_territorialImperative.png",
        "Survivors' auras are revealed to you for 6 seconds when they enter the basement and you are more than 24 meters away from the basement entrance.\n"
        "Territorial Imperative can only be triggered once every 45 seconds.",
        "Les auras des survivants vous sont révélées pendant 6 secondes lorsqu'ils entrent dans la cave et que vous vous trouvez à plus de 24 mètres de l'entrée de cette dernière.\n"
        "Instinct territorial ne peut être activé qu'une fois toutes les 45 secondes.", NULL},

    {70, KNIGHT, "Nowhere to Hide", "Nulle part où se cacher", "assets/icons/perks/killers/IconPerks_nowhereToHide.png",
        "Whenever you damage a generator, reveal the aura of all Survivors standing within 24 meters of your position for 5 seconds.",
        "Dès que vous endommagez un générateur, révélez l’aura de tous les survivants qui se tiennent à moins de 24 mètres de votre position pendant 5 secondes.", NULL},

    {71, KNIGHT, "Hubris", "Hubris", "assets/icons/perks/killers/IconPerks_hubris.png",
        "Whenever you are stunned by a Survivor, that Survivor suffers from the Exposed status effect for 30 seconds.\n"
        "Hubris has a cooldown of 20 seconds.",
        "Lorsqu'un survivant vous étourdit, ce survivant souffre de l'effet de statut À découvert pendant 30 secondes.\n"
        "Hubris a un temps de recharge de 20 secondes.", NULL},

    {72, KNIGHT, "Hex: Face the Darkness", "Sort : Affrontez les ténèbres", "assets/icons/perks/killers/IconPerks_hexFaceTheDarkness.png",
        "Injuring a Survivor by any means lights a Dull Totem, activating the Hex.\n"
        "While the Hex is active, all other Survivors outside of your Terror Radius will scream every 25 seconds, revealing their positions and auras for 2 seconds.\n"
        "When the Survivor enters the dying state or becomes healthy, the Hex totem becomes dull again and this perk deactivates.\n"
        "If the Hex totem is cleansed, this perk is permanently disabled.",
        "Blesser un survivant par n'importe quel moyen allume un totem passif, ce qui active le sort.\n"
        "Tant que le sort est actif, tous les autres survivants hors de votre rayon de terreur hurleront toutes les 25 secondes, révélant leur aura et leur position pendant 2 secondes.\n"
        "Lorsque le survivant se retrouve en état critique ou intégralement rétabli, le totem ensorcelé s'éteint et cette compétence se désactive.\n"
        "La compétence est définitivement désactivée dès que son totem ensorcelé est purifié.", NULL},

    {73, LEGION, "Discordance", "Discordance", "assets/icons/perks/killers/IconPerks_discordance.png",
        "Any generator within a range of 128 meters that is being repaired by two or more Survivors is marked by a yellow aura. When the generator is first highlighted, Discordance triggers a loud noise notification on the generator. After the generator is no longer within range or is no longer being repaired by two or more Survivors, the aura remains for another 4 seconds.",
        "Tout générateur à une distance de 128 mètres en cours de réparation par au moins deux survivants est signalé par une aura jaune. Quand le générateur est illuminé pour la première fois, Discorde déclenche un fort avertissement sonore sur le générateur. Lorsque le générateur n’est plus à portée ou n’est plus en cours de réparation par au moins deux survivants, l’aura subsiste pendant 4 secondes.", NULL},

    {74, LEGION, "Iron Maiden", "Vierge de fer", "assets/icons/perks/killers/IconPerks_ironMaiden.png",
        "You open lockers 50% faster.\n"
        "Survivors who exit lockers suffer from the Exposed status effect for 30 seconds and scream, revealing their location for 4 seconds.",
        "Vous ouvrez les casiers 50 % plus vite.\n"
        "Quand un survivant sort d’un casier, il souffre de l’effet de statut À découvert pendant 30 secondes et crie, ce qui révèle sa position pendant 4 secondes.", NULL},

    {75, LEGION, "Mad Grit", "Cran dément", "assets/icons/perks/killers/IconPerks_madGrit.png",
        "While carrying a Survivor, you suffer no cooldown for missed basic attacks and successfully hitting another Survivor with a basic attack will pause the carried Survivor’s wiggle timer for 4 seconds.",
        "Quand vous portez un survivant, vous ne subissez pas de temps de récupération pour les attaques de base manquées, et toucher un autre survivant avec une attaque de base interrompt le chronomètre durant lequel le survivant porté peut se débattre pendant 4 secondes.", NULL},

    {76, LICH, "Dark Arrogance", "Arrogance ténébreuse", "assets/icons/perks/killers/IconPerks_darkArrogance.png",
        "Increases the duration you are blinded by any means and the duration of pallet stuns by 15%.\n"
        "Increases regular vault speed by 25%.",
        "Augmente la durée de votre aveuglement par n'importe quel moyen et la durée des étourdissements causés par les palettes de 15 %.\n"
        "Augmente la vitesse de saut normale de 25 %.", NULL},

    {77, LICH, "Languid Touch", "Contact languide", "assets/icons/perks/killers/IconPerks_languidTouch.png",
        "When a Survivor within 36 meters of you scares a crow, they suffer from the Exhausted status effect for 10 seconds.\n"
        "Languid Touch has a cooldown of 5 seconds.",
        "Lorsqu'un survivant effraie un corbeau dans un rayon de 36 mètres autour de vous, il subit l'effet de statut Épuisement pendant 10 secondes.\n"
        "Contact languide a 5 secondes de temps de recharge.", NULL},

    {78, LICH, "Weave Attunement", "Lien avec la Trame", "assets/icons/perks/killers/IconPerks_weaveAttunement.png",
        "When an item becomes depleted for the first time, it is dropped. You see the auras of dropped items.\n"
        "Survivors within 12 meters of dropped items have their auras revealed to you. Affected Survivors see the item's aura.\n"
        "When a Survivor picks up a Survivor item, they suffer from the Oblivious status effect for 30 seconds.",
        "Lorsqu'un objet est épuisé pour la première fois, il est lâché. Vous voyez l'aura des objets lâchés.\n"
        "L'aura des survivants dans un rayon de 12 mètres des objets sur le sol vous est révélée. Les survivants affectés voient l'aura de l'objet.\n"
        "Lorsqu'un survivant ramasse un objet de survivant, il subit l'effet de statut Inconscient pendant 30 secondes.", NULL},

    {79, WESKER, "Terminus", "Terminus", "assets/icons/perks/killers/IconPerks_terminus.png",
        "When exit gates are powered, this perk activates. While Terminus is active, injured, downed and hooked Survivors are inflicted with the Broken status effect until exit gates are open.\n"
        "When exit gates are open, Survivors will stay Broken for an additional 45 seconds.",
        "Lorsque les portes de sortie sont alimentées, cette compétence s'active. Tant que Terminus est activée, les survivants blessés, abattus et suspendus à un crochet subissent l'effet de statut Brisé jusqu'à l'ouverture des portes de sortie.\n"
        "Lorsque les portes de sortie sont ouvertes, les survivants demeurent Brisés pendant 45 secondes supplémentaires.", NULL},

    {80, WESKER, "Superior Anatomy", "Anatomie supérieure", "assets/icons/perks/killers/IconPerks_superiorAnatomy.png",
        "When a Survivor performs a fast vault within 12 meters of you, this perk activates. The next time you vault a window, your vaulting speed is increased by 40%.\n"
        "This perk deactivates after vaulting a window.\n"
        "This perk has a 25 second cooldown.",
        "Lorsqu'un survivant effectue un saut rapide à moins de 12 mètres de vous, cette compétence s'active. La prochaine fois que vous sautez à travers une fenêtre, votre vitesse de saut augmente de 40 %.\n"
        "Cette compétence se désactive après avoir sauté à travers une fenêtre.\n"
        "Cette compétence a un temps de recharge de 25 secondes.", NULL},

    {81, WESKER, "Awakened Awareness", "Perception éveillée", "assets/icons/perks/killers/IconPerks_awakenedAwareness.png",
        "When carrying a Survivor, you can see the aura of other Survivors within 20 meters of your position.",
        "Pendant le transport d'un survivant, vous pouvez voir l'aura des autres survivants à 20 mètres de votre position.", NULL},

    {82, NEMESIS, "Lethal Pursuer", "Poursuivant meurtrier", "assets/icons/perks/killers/IconPerks_lethalPursuer.png",
        "At the start of the trial, the auras of all Survivors are revealed to you for 9 seconds.\n"
        "Any time a Survivor's aura is shown for a period of time, its duration is increased by 2 seconds.",
        "Au début de la partie, vous voyez l’aura de tous les survivants pendant 9 secondes.\n"
        "Chaque fois que l'aura d'un survivant est révélée pour une certaine durée, cette durée est augmentée de 2 secondes.", NULL},

    {83, NEMESIS, "Hysteria", "Hystérie", "assets/icons/perks/killers/IconPerks_hysteria.png",
        "Whenever a healthy Survivor becomes injured by any means, all injured Survivors suffer from the Oblivious status effect for 40 seconds.\n"
        "Hysteria can only trigger once every 20 seconds.",
        "Lorsqu’un survivant est blessé par n’importe quel moyen, tous les survivants blessés souffrent de l’effet de statut Inconscient pendant 40 secondes.\n"
        "Hystérie peut uniquement être déclenchée toutes les 20 secondes.", NULL},

    {84, NEMESIS, "Eruption", "Éruption", "assets/icons/perks/killers/IconPerks_eruption.png",
        "After kicking a generator, its aura is highlighted in yellow.\n"
        "Whenever a Survivor enters the dying state, every affected generator explodes, losing 10% worth of progress, and starts to regress.\n"
        "Any Survivor repairing a generator when it explodes will scream and reveal their aura for 12 seconds.\n"
        "Eruption has a cooldown of 30 seconds.",
        "Après avoir frappé un générateur, son aura devient jaune.\n"
        "Lorsqu’un survivant se retrouve en état critique, chaque générateur affecté explose, perdant 10 % de progression et il commence à régresser.\n"
        "Tout survivant qui répare un générateur quand celui-ci explose se met à crier et son aura est révélée pendant 12 secondes.\n"
        "Éruption a un temps de récupération de 30 secondes.", NULL},

    {85, FREDDY, "Remember Me", "Souviens-toi de moi", "assets/icons/perks/killers/IconPerks_rememberMe.png",
        "When The Obsession takes damage, gain 1 token, up to 5.\n"
        "Other Survivors open exit gates 30% slower for each token.",
        "Lorsque l'obsession subit une blessure, vous gagnez 1 jeton, jusqu'à 5 au maximum.\n"
        "Les autres survivants ouvrent les portes de sortie 30 % plus lentement pour chaque jeton.", NULL},

    {86, FREDDY, "Blood Warden", "Gardien du sang", "assets/icons/perks/killers/IconPerks_bloodWarden.png",
        "As soon as an exit gate is opened, Blood Warden is activated. The auras of any Survivors located within Exit areas are revealed to you.\n"
        "Once per match, hooking a Survivor while Blood Warden is active calls upon The Entity to block both Exits for all Survivors for 60 seconds.",
        "Dès qu’une porte de sortie est ouverte, Gardien du sang est activé. Les auras des survivants situés dans les zones de sortie vous sont révélées.\n"
        "Une fois par partie, pendre un survivant à un crochet lorsque Gardien du sang est activé fait appel à l’Entité pour empêcher tous les survivants de sortir pendant 60 secondes.", NULL},

    {87, FREDDY, "Fire Up", "Intensité ardente", "assets/icons/perks/killers/IconPerks_fireUp.png",
        "Each time the Survivors complete repairs on a generator, Fire Up grows in power.\n"
        "For each generator completed, gain a 6% stackable buff that grants a speed bonus to picking up, dropping, vaulting, damaging generators, and breaking pallets and breakable walls for the remainder of the trial.",
        "Chaque fois qu’un survivant termine la réparation d’un générateur, Intensité ardente gagne en puissance.\n"
        "Pour chaque générateur réparé, vous obtenez un bonus cumulable de 6 % jusqu’à la fin de la partie sur la vitesse de ramassage, de lâcher, de saut d’obstacles, de destruction de palettes, de générateurs et des murs qui peuvent l’être.", NULL},

    {88, NURSE, "Thanatophobia", "Thanatophobie", "assets/icons/perks/killers/IconPerks_thanatophobia.png",
        "For each injured, dying, or hooked Survivor, all Survivors receive a penalty of 2% to repair, sabotage and Totem-cleansing speeds.\n"
        "If there are 4 injured, dying or hooked Survivors, there is an additional 12% penalty to repair, sabotage and Totem-cleansing speeds.",
        "Pour chaque survivant blessé, en état critique ou suspendu à un crochet, tous les survivants reçoivent une pénalité de 2 % aux vitesses de réparation, de sabotage et de purification de totem.\n"
        "S'il y a 4 survivants blessés, en état critique ou suspendus à des crochets, il y a une pénalité de 12 % supplémentaires aux vitesses de réparation, de sabotage et de purification de totem.", NULL},

    {89, NURSE, "Stridor", "Stridor", "assets/icons/perks/killers/IconPerks_stridor.png",
        "Breathing of Survivors in pain is 50% louder and regular breathing is 25% louder.",
        "La respiration des survivants en difficulté est 50 % plus forte et la respiration normale est 25 % plus forte.", NULL},

    {90, NURSE, "A Nurse's Calling", "Vocation de l'Infirmière", "assets/icons/perks/killers/IconPerks_aNursesCalling.png",
        "The auras of injured Survivors who are healing or being healed are revealed to you when they are within a 32 meter range.",
        "Les auras des survivants blessés qui soignent ou reçoivent des soins vous sont révélées dans un rayon de 32 mètres.", NULL},

    {91, ONI, "Zanshin Tactics", "Tactiques de Zanshin", "assets/icons/perks/killers/IconPerks_zanshinTactics.png",
        "Reveal the aura of pallets and vaults within 32 meters. Survivors who drop pallets are revealed to you for 5 seconds.",
        "Révèle l'aura des palettes et des zones de saut dans un rayon de 32 mètres. Les survivants qui renversent des palettes vous sont révélés pendant 5 secondes.", NULL},

    {92, ONI, "Blood Echo", "Écho sanguin", "assets/icons/perks/killers/IconPerks_bloodEcho.png",
        "When hooking a Survivor, all injured Survivors suffer from the Hemorrhage and Exhausted status effects for 30 seconds.",
        "Lorsque vous accrochez un survivant, tous les autres survivants blessés souffrent des effets de statut Hémorragie et Épuisement pendant 30 secondes.", NULL},

    {93, ONI, "Nemesis", "Ennemi juré", "assets/icons/perks/killers/IconPerks_nemesis.png",
        "A Survivor who blinds you or stuns you using a pallet or locker becomes your Obsession. Anytime a new Survivor becomes the Obsession, they are affected by the Oblivious status effect for 60 seconds and their aura is shown to you for 8 seconds.",
        "Un survivant qui parvient à vous aveugler ou à vous étourdir avec une palette ou un casier devient votre obsession. Dès qu’un nouveau survivant devient l’obsession, il est affecté par l’effet de statut Inconscient pendant 60 secondes et vous voyez son aura pendant 8 secondes.", NULL},

    {94, SADAKO, "Scourge Hook: Floods of Rage", "Crochet flagellateur : Flots de rage", "assets/icons/perks/killers/IconPerks_scourgeHookFloodsOfRage.png",
        "At the start of the trial, 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "When a Survivor is unhooked from a scourge hook, all other Survivors have their auras revealed for 7 seconds.",
        "Au début de la partie, 4 crochets aléatoires sont changés en crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Quand un survivant est libéré d’un crochet flagellateur, l'aura de tous les survivants est révélée pendant 7 secondes.", NULL},

    {95, SADAKO, "Merciless Storm", "Tempête impitoyable", "assets/icons/perks/killers/IconPerks_mercilessStorm.png",
        "When a generator reaches 90% progress, Survivors working on the generator will be faced with continuous Skill Checks. If they miss or stop repairing, the generator is blocked by the Entity for 20 seconds.\n"
        "Merciless Storm can only trigger once per generator per trial.",
        "Quand un générateur atteint 90 % de progression, les survivants qui travaillent sur ce générateur se retrouvent confrontés à des tests d'habileté en continu. S'ils en ratent un ou interrompent leurs réparations, le générateur est bloqué par l'Entité pendant 20 secondes.\n"
        "Tempête impitoyable ne peut être déclenché qu'une fois par générateur par partie.", NULL},

    {96, SADAKO, "Call of Brine", "Appel de la mer", "assets/icons/perks/killers/IconPerks_callOfBrine.png",
        "After damaging a generator this perk becomes active for 70 seconds.\n"
        "The generator regresses at 150% of the normal regression speed and you can see its aura in yellow.\n"
        "Each time a Survivor completes a good Skill Check on a generator affected by this perk, you receive a loud noise notification.",
        "Après avoir endommagé un générateur, cette compétence s’active pendant 70 secondes.\n"
        "Le générateur régresse à 150 % de la vitesse normale de régression et vous pouvez voir son aura en jaune.\n"
        "Chaque fois qu’un survivant réussit un bon test d’habileté sur un générateur affecté par cette compétence, vous recevez une notification sonore.", NULL},

    {97, PIGGY, "Surveillance", "Surveillance", "assets/icons/perks/killers/IconPerks_surveillance.png",
        "Any regressing generator will be highlighted by a white aura. If the regression is interrupted on a generator, it will be highlighted by a yellow aura for 16 seconds.\n"
        "Noises created by generator repairs are audible at an additional 8 meters.",
        "Tous les générateurs inversés sont entourés d'une aura blanche. Si l'inversion est interrompue, le générateur se retrouve entouré d'une aura jaune pendant 16 secondes.\n"
        "Les bruits causés par la réparation d'un générateur sont audibles à 8 mètres de plus.", NULL},

    {98, PIGGY, "Make your Choice", "Fais ton choix", "assets/icons/perks/killers/IconPerks_makeYourChoice.png",
        "When a Survivor rescues another from a hook at least 32 meters away from you, Make your Choice causes the Survivor to scream and applies the Exposed status effect to them for 60 seconds.\n"
        "Make your Choice has a cooldown of 60 seconds.",
        "Quand un survivant en libère un autre d’un crochet, à au moins 32 mètres de vous, Fais ton choix force le survivant à crier et lui applique l’effet de statut À découvert pendant 60 secondes.\n"
        "Fais ton choix a un temps de récupération de 60 secondes.", NULL},

    {99, PIGGY, "Scourge Hook: Hangman's Trick", "Crochet flagellateur : Coup du pendu", "assets/icons/perks/killers/IconPerks_scourgeHookHangmansTrick.png",
        "At the start of the trial, 4 random hooks are changed into scourge hooks. You see their auras in white.\n"
        "Gain a notification when a Survivor begins sabotaging a hook.\n"
        "While carrying a Survivor, see the aura of any Survivor within 16 meters of a scourge hook.",
        "Au début de la partie, 4 crochets aléatoires deviennent des crochets flagellateurs. Vous voyez leur aura en blanc.\n"
        "Recevez une notification lorsqu'un survivant commence à saboter un crochet.\n"
        "Lorsque vous transportez un survivant, vous voyez l'aura de tout survivant dans un rayon de 16 mètres autour d'un crochet flagellateur.", NULL},

    {100, PLAGUE, "Dark Devotion", "Sombre dévotion", "assets/icons/perks/killers/IconPerks_darkDevotion.png",
        "You become obsessed with one Survivor. When the Obsession loses a health state, your Terror Radius transfers to the Obsession for 45 seconds, and its radius is set to 40 meters.\n"
        "You are granted the Undetectable status effect for the duration.\n"
        "The Survivor with the transferred Terror Radius is also considered to be 'inside the Terror Radius' for other purposes.",
        "Vous devenez obsédé par un survivant. Quand l'obsession perd un état de santé, vous lui transférez votre rayon de terreur pendant 45 secondes avec un rayon établi à 40 mètres.\n"
        "Vous bénéficiez de l’effet de statut Indétectable pendant toute cette durée.\n"
        "Le survivant avec le rayon de terreur transféré est également considéré comme étant « à l’intérieur du rayon de terreur » à toutes fins utiles.", NULL},

    {101, PLAGUE, "Infectious Fright", "Peur contagieuse", "assets/icons/perks/killers/IconPerks_infectiousFright.png",
        "Any Survivors that are within your Terror Radius while another Survivor is put into the dying state will scream and reveal their location to you for 6 seconds.",
        "Les survivants présents dans votre rayon de terreur pendant qu’un autre survivant entre en état critique hurleront, vous révélant leur position pendant 6 secondes.", NULL},

    {102, PLAGUE, "Corrupt Intervention", "Intervention impure", "assets/icons/perks/killers/IconPerks_corruptIntervention.png",
        "3 generators located furthest from you are blocked by The Entity for 120 seconds at the start of the trial.\n"
        "Survivors cannot repair these generators for the duration. Affected generators are highlighted by a white aura.\n"
        "Corrupt Intervention deactivates when any Survivor enters the dying state.",
        "Les 3 générateurs les plus éloignés de vous sont bloqués par l’Entité pendant 120 secondes au début de la partie.\n"
        "Pendant ce laps de temps, les survivants ne peuvent pas les réparer. Les générateurs affectés sont entourés d’une aura blanche.\n"
        "Intervention impure se désactive quand un survivant se retrouve en état critique.", NULL},

    {103, MYERS, "Save the best for last", "Garder le meilleur pour la fin", "assets/icons/perks/killers/IconPerks_saveTheBestForLast.png",
        "Earn a token for each successful basic attack that is not dealt to the Obsession. Each token grants a stackable 4% decreased successful basic attack cooldown, you can earn up to 8 tokens.\n"
        "When you hit the Obsession with a Basic Attack or Special Attack, lose 2 tokens. You cannot gain tokens as long as your Obsession is sacrificed or killed.",
        "Vous obtenez un jeton pour chaque attaque de base réussie qui n’est pas infligée à votre obsession. Chaque jeton octroie une réduction cumulable de 4 % sur la récupération des attaques de base réussies et vous pouvez engranger jusqu’à 8 jetons.\n"
        "Lorsque vous frappez l'obsession avec une attaque de base ou une attaque spéciale, vous perdez 2 jetons. Vous ne pouvez plus gagner de jetons si votre obsession est sacrifiée ou tuée.", NULL},

    {104, MYERS, "Play With Your Food", "Jouer avec la nourriture", "assets/icons/perks/killers/IconPerks_playWithYourFood.png",
        "Every time you chase your Obsession and let them escape, you receive a token up to a maximum of 3 tokens.\n"
        "For each token, you have 5% Haste.\n"
        "Performing a Basic Attack or Special Attack spends one token.",
        "Chaque fois que vous chassez votre obsession et que vous la laissez s’échapper, vous recevez un jeton jusqu’à un maximum de 3 jetons.\n"
        "Pour chaque jeton, vous gagnez 5 % de Rapidité.\n"
        "Effectuer une attaque de base ou une attaque spéciale consomme un jeton.", NULL},

    {105, MYERS, "Dying Light", "Lumière mourante", "assets/icons/perks/killers/IconPerks_dyingLight.png",
        "Your Obsession gains a 33% action speed bonus to unhooking and healing other Survivors.\n"
        "Each time you hook a Survivor other than the Obsession, if the Obsession is alive, gain a token.\n"
        "If the Obsession is alive, all Survivors who are not the Obsession get 3% penalty to repair, healing and sabotage speeds for each token.",
        "Votre obsession bénéficie d’un bonus de 33 % à la vitesse d’action pour décrocher et soigner d’autres survivants.\n"
        "Chaque fois que vous accrochez un survivant autre que votre obsession, si celle-ci est en vie, vous gagnez un jeton.\n"
        "Si l’obsession est en vie, tous les autres survivants reçoivent une pénalité de vitesse de réparation, de sabotage et de soins de 3 % pour chaque jeton.", NULL},

    {106, SINGULARITY, "Forced Hesitation", "Hésitation forcée", "assets/icons/perks/killers/IconPerks_forcedHesitation.png",
        "When a Survivor is put into the dying state by any means, all other Survivors standing within a 16 meter range around them suffer from the Hindered status effect for 10 seconds, reducing their movement speed by 20%.\n"
        "This perk goes on cooldown for 30 seconds.",
        "Lorsqu’un survivant se retrouve en état critique par n'importe quel moyen, tous les autres survivants se tenant dans un rayon de 16 mètres autour de lui souffrent de l’effet de statut Entrave pendant 10 secondes, ce qui réduit leur vitesse de déplacement de 20 %.\n"
        "Cette compétence se recharge pendant 30 secondes.", NULL},

    {107, SINGULARITY, "Machine Learning", "Apprentissage automatique", "assets/icons/perks/killers/IconPerks_machineLearning.png",
        "When you damage a generator, it becomes Compromised. Only one generator can be Compromised at a time.\n"
        "When the Compromised generator is completed, you gain Undetectable and 8% Haste for 60 seconds.",
        "Après avoir endommagé un générateur, celui-ci devient compromis. Un seul générateur peut être compromis à la fois.\n"
        "Lorsque le générateur compromis est réparé, vous devenez indétectable et vous gagnez 8 % de Rapidité pendant 60 secondes.", NULL},

    {108, SINGULARITY, "Genetic Limits", "Limites génétiques", "assets/icons/perks/killers/IconPerks_geneticLimits.png",
        "Anytime a Survivor loses a health state, they suffer from the Exhausted status effect for 8 seconds.",
        "Lorsqu'un survivant perd un état de santé, il souffre de l'effet de statut Épuisement pendant 8 secondes.", NULL},

    {109, CORDULA, "Leverage", "Effet de levier", "assets/icons/perks/killers/IconPerks_leverage.png",
        "When a Survivor performs the unhook action, their healing speed is reduced by 30% for 60 seconds.",
        "Lorsqu'un survivant effectue l'action Décrocher, sa vitesse de soin est réduite de 30 pendant 60 secondes.", NULL},

    {110, CORDULA, "THWACK!", "VLAN !", "assets/icons/perks/killers/IconPerks_thwack.png",
        "THWACK! starts with 3 tokens.\n"
        "When breaking a pallet or breakable wall, consume a token.\n"
        "Survivors within 36 meters scream, and their auras are revealed for 6 seconds.\n"
        "When hooking a Survivor, regain 1 token.",
        "VLAN ! commence avec 3 jetons.\n"
        "Lorsque vous détruisez une palette ou un mur destructible, vous consommez un jeton.\n"
        "Les survivants dans un rayon de 36 mètres hurlent et leur aura est révélée pendant 6 secondes.\n"
        "Lorsque vous accrochez un survivant, vous regagnez 1 jeton.", NULL},

    {111, CORDULA, "Game Afoot", "Ouverture de la chasse", "assets/icons/perks/killers/IconPerks_gameAfoot.png",
        "While you are chasing the Obsession, this perk activates.\n"
        "Damaging generators and breaking walls or pallets gives you a 7% Haste Status for 10 seconds.\n"
        "Whenever you hit the Survivor with the total most time in chase with a basic attack, they become the obsession.",
        "Pendant que vous pourchassez l'obsession, cette compétence s'active.\n"
        "Endommager les générateurs et détruire les murs ou les palettes vous donne un statut de Rapidité de 7 % pendant 10 secondes.\n"
        "Quel que soit le moment où vous frappez le survivant qui a été pourchassé le plus longtemps avec une attaque de base, celui-ci devient l'obsession.", NULL},

    {112, SPIRIT, "Rancor", "Rancœur", "assets/icons/perks/killers/IconPerks_rancor.png",
        "Each time a generator is completed, your Obsession sees your aura for 3 seconds.\n"
        "Each time a generator is completed, all Survivors' locations are revealed to you for 3 seconds.\n"
        "Once the exit gates are powered, the Obsession has the Exposed status effect and you can kill them.",
        "Chaque fois qu’un générateur est terminé, votre obsession voit votre aura pendant 3 secondes.\n"
        "Chaque fois qu’un générateur est terminé, les positions de tous les survivants vous sont révélées pendant 3 secondes.\n"
        "Une fois que les portes de sortie sont alimentées, l’obsession subit l’effet de statut À découvert et vous pouvez la tuer.", NULL},

    {113, SPIRIT, "Hex: Haunted Ground", "Sort : Terrain hanté", "assets/icons/perks/killers/IconPerks_hexHauntedGround.png",
        "Two trapped Hex Totems will spawn in the trial.\n"
        "When either one of the two trapped Hex Totems is cleansed by a Survivor, all Survivors suffer from the Exposed status effect for 60 seconds.\n"
        "The remaining trapped Hex Totem immediately becomes a Dull Totem.",
        "Deux totems ensorcelés piégés apparaissent durant la partie.\n"
        "Lorsque l'un des deux totems ensorcelés piégés est purifié par un Survivant, tous les Survivants souffrent de l'effet de statut À découvert pendant 60 secondes.\n"
        "Le totem ensorcelé piégé restant devient immédiatement un totem passif.", NULL},

    {114, SPIRIT, "Spirit Fury", "Fureur de l'esprit", "assets/icons/perks/killers/IconPerks_spiritFury.png",
        "After you break 2 pallets, the next time you are stunned by a pallet, The Entity will instantly break the pallet.\n"
        "You still suffer from the stun effect penalty.",
        "Après que vous aurez détruit 2 palettes, la prochaine fois que vous serez étourdi par une palette, l'Entité détruira instantanément celle-ci.\n"
        "Vous souffrirez tout de même de la pénalité de l'effet Étourdi.", NULL},

    {115, TRAPPER, "Unnerving Presence", "Présence perturbante", "assets/icons/perks/killers/IconPerks_unnervingPresence.png",
        "Survivors within your Terror Radius have a 10% greater chance of triggering Skill Checks when repairing or healing.\n"
        "Triggered Skill Checks' success zones are reduced by 60%.",
        "Votre seule présence inspire l'effroi. Les survivants qui se trouvent dans votre rayon de terreur ont 10 % de chances supplémentaires d'activer des tests d'habileté lors des réparations ou des soins. Les zones de succès sont réduites de 60 %.", NULL},

    {116, TRAPPER, "Brutal Strength", "Force brute", "assets/icons/perks/killers/IconPerks_brutalStrength.png",
        "Destroy dropped pallets, breakable walls, and generators 20% faster.",
        "Détruisez les palettes lâchées, les murs destructibles et les générateurs 20 % plus vite.", NULL},

    {117, TRAPPER, "Agitation", "Agitation", "assets/icons/perks/killers/IconPerks_agitation.png",
        "While transporting a body, your Terror Radius is increased by 12 meters and you have 18% Haste.",
        "Lorsque vous transportez un corps, votre rayon de terreur augmente de 12 mètres et vous gagnez 18 % de Rapidité.", NULL},

    {118, TRICKSTER, "Hex: Crowd Control", "Sort : Contrôle des foules", "assets/icons/perks/killers/IconPerks_hexCrowdControl.png",
        "When a Survivor performs a rushed vault, the vault becomes blocked by The Entity. This applies for up to 5 vaults.\n"
        "The Hex effects persist as long as the related Hex Totem is standing.",
        "Quand un survivant franchit un point de saut en courant, l’Entité bloque ce point de saut. Ceci s'applique à un maximum de 5 points de saut.\n"
        "Les effets du sort persistent tant que le Totem ensorcelé est debout.", NULL},

    {119, TRICKSTER, "Starstruck", "Fascination", "assets/icons/perks/killers/IconPerks_starstruck.png",
        "While carrying a Survivor, any other Survivors within your Terror Radius suffer from the Exposed status effect.\n"
        "The effect persists for 30 seconds on Survivors who leave your Terror Radius, as well as those within the radius when you hook or release the carried Survivor.\n"
        "Starstruck has a cooldown of 60 seconds once a Survivor is no longer carried.",
        "Quand vous portez un survivant, tout autre survivant dans votre rayon de terreur subit l’effet de statut À découvert.\n"
        "L’effet persiste pendant 30 secondes sur les survivants qui quittent votre rayon de terreur, et sur ceux dans le rayon lorsque vous suspendez ou relâchez le survivant porté.\n"
        "Fascination a un temps de recharge de 60 secondes une fois que vous ne portez plus le survivant.", NULL},

    {120, TRICKSTER, "No Way Out", "Aucune issue", "assets/icons/perks/killers/IconPerks_noWayOut.png",
        "After hooking a Survivor for the first time, No Way Out gains a token. Once the exit gates have been powered, No Way Out activates.\n"
        "When a Survivor interacts with an exit gate switch, you receive a loud noise notification. The Entity then blocks both exit gate switches for 12 seconds, plus an additional 12 seconds for each token in your possession.",
        "Après avoir suspendu un survivant à un crochet pour la première fois, Aucune issue gagne un jeton. Une fois les portes de sortie alimentées, Aucune issue s’active.\n"
        "Quand un survivant interagit avec un interrupteur de porte de sortie, vous recevez une alerte sous forme d'une notification sonore. L’Entité bloque alors les interrupteurs des portes de sortie pendant 12 secondes, plus 12 secondes supplémentaires pour chaque jeton en votre possession.", NULL},

    {121, TWINS, "Coup de Grâce", "Coup de grâce", "assets/icons/perks/killers/IconPerks_coupDeGrace.png",
        "Each time a generator is completed, Coup de Grâce grows in power. Gain 2 tokens, with a maximum of 5 tokens.\n"
        "Consume one token to increase the distance of your next lunge attack by 80%.",
        "Chaque fois qu’un générateur est terminé, Coup de grâce gagne en puissance. Vous gagnez 2 jetons, pour un maximum de 5 jetons.\n"
        "Dépensez un jeton pour augmenter la distance de votre prochaine attaque chargée de 80 %.", NULL},

    {122, TWINS, "Hoarder", "Amasseur", "assets/icons/perks/killers/IconPerks_hoarder.png",
        "Survivors reveal their location when they interact with a chest or when they pick up an item within 64 meters of your location.\n"
        "The trial begins with up to 2 additional Chests in the environment.",
        "Les survivants dévoilent leur position quand ils interagissent avec un coffre ou lorsqu’ils ramassent un objet à moins de 64 mètres de votre position.\n"
        "La partie commence avec un maximum de 2 coffres supplémentaires sur la carte.", NULL},

    {123, TWINS, "Opression", "Oppression", "assets/icons/perks/killers/IconPerks_opression.png",
        "When you damage a generator, up to 4 other random generators also begin regressing.\n"
        "If the affected generators are being repaired, any Survivors repairing them receive a difficult Skill Check.\n"
        "Oppression has a cooldown of 35 seconds.",
        "Lorsque vous endommagez un générateur, un maximum de 4 autres générateurs aléatoires régressent également.\n"
        "Si les générateurs affectés sont en cours de réparation, tout survivant en train de les réparer doit effectuer un test d’habileté difficile.\n"
        "Oppression a un temps de recharge de 35 secondes.", NULL},

    {124, UNKNOWN, "Unbound", "Inexorable", "assets/icons/perks/killers/IconPerks_unbound.png",
        "This perk activates for 30 seconds after a Survivor becomes injured by any means.\n"
        "After vaulting a window, you gain 7% Haste for 10 seconds.",
        "Cette compétence s'active pendant 30 secondes après qu'un survivant se retrouve blessé de quelque manière que ce soit.\n"
        "Après avoir franchi une fenêtre, vous gagnez 7 % de Rapidité pendant 10 secondes.", NULL},

    {125, UNKNOWN, "Undone", "Interrompu", "assets/icons/perks/killers/IconPerks_undone.png",
        "When a Survivor misses a healing or repair Skill Check, gain 3 tokens, up to 30.\n"
        "When you perform the damage action on a generator, if you have any tokens, consume all of them. For each token consumed, the generator loses 1% total progress and then becomes blocked for 1 second. Then, once the generator is unblocked, it starts regressing.\n"
        "This perk goes on cooldown for 60 seconds.",
        "Lorsqu'un survivant rate un test d'habileté de soins ou de réparation, gagnez 3 jetons, jusqu'à 30 au maximum.\n"
        "Lorsque vous effectuez l'action Endommager sur un générateur et que vous avez des jetons, cela les consomme tous. Pour chaque jeton consommé, le générateur perd 1 % de son progrès total et est bloqué pendant 1 seconde. Ensuite, une fois le générateur débloqué, il commence à régresser.\n"
        "Cette compétence se met en recharge pendant 60 secondes.", NULL},

    {126, UNKNOWN, "Unforeseen", "Inattendu", "assets/icons/perks/killers/IconPerks_unforeseen.png",
        "When you perform the damage action on a generator, your Terror Radius transfers to the generator for 30 seconds and its radius is set to 32 meters.\n"
        "You gain Undetectable for that duration.\n"
        "Then, this perk goes on cooldown for 30 seconds.",
        "Lorsque vous endommagez un générateur, votre rayon de terreur est transféré au générateur pendant 30 secondes et son rayon augmente de 32 mètres.\n"
        "Vous obtenez Indétectable pendant cette durée.\n"
        "Ensuite, cette compétence se recharge pendant 30 secondes.", NULL},

    {127, WRAITH, "Predator", "Prédateur", "assets/icons/perks/killers/IconPerks_predator.png",
        "When a Survivor escapes a chase, reveal their aura for 4 seconds. This perk has a 40-second cooldown.",
        "Lorsqu'un survivant échappe à une poursuite, son aura est révélée pendant 4 secondes. Cette compétence a un temps de recharge de 40 secondes.", NULL},

    {128, WRAITH, "Bloodhound", "Limier", "assets/icons/perks/killers/IconPerks_bloodhound.png",
        "Fresh blood marks are considerably more discernible than normal and can be tracked for 4 seconds longer than normal.",
        "Les traces de sang frais sont considérablement plus visibles et peuvent être suivies pendant 4 secondes de plus que la normale.", NULL},

    {129, WRAITH, "Shadowborn", "Rejeton de l'ombre", "assets/icons/perks/killers/IconPerks_shadowborn.png",
        "When blinded by any means, gain 10% Haste for 10 seconds.",
        "Lorsque vous subissez Aveuglement par n'importe quel moyen, vous gagnez 10 % d'effet de statut Rapidité pendant 10 secondes.", NULL},

    {130, ALIEN, "Ultimate Weapon", "Arme ultime", "assets/icons/perks/killers/IconPerks_ultimateWeapon.png",
        "When you open a locker, all Survivors within 40 meters of the locker scream and reveal their position, then gain Blindness for 30 seconds.\n"
        "This perk goes on cooldown for 45 seconds.",
        "Lorsque vous ouvrez un casier, tous les survivants dans un rayon de 40 mètres du casier hurlent et révèlent leur position, puis gagnent Aveuglement pendant 30 secondes. Cette compétence se recharge pendant 45 secondes.", NULL},

    {131, ALIEN, "Alien Instinct", "Instinct d'Alien", "assets/icons/perks/killers/IconPerks_alienInstinct.png",
        "This perk activates when you hook a Survivor.\n"
        "You see the aura of the farthest injured Survivor for 8 seconds and that Survivor is Oblivious for 60 seconds.",
        "Cette compétence s'active lorsque vous suspendez un survivant à un crochet.\n"
        "Vous voyez l'aura du survivant blessé le plus éloigné pendant 8 secondes et il subit Inconscient pendant 60 secondes.", NULL},

    {132, ALIEN, "Rapid Brutality", "Brutalité rapide", "assets/icons/perks/killers/IconPerks_rapidBrutality.png",
        "You can no longer gain Bloodlust.\n"
        "Hitting a Survivor with a basic attack gives you 5% Haste for 10 seconds.",
        "Vous ne gagnez plus Soif de sang.\n"
        "Blesser un survivant avec une attaque de base vous donne 5 % de Rapidité pendant 10 secondes.", NULL}
};
