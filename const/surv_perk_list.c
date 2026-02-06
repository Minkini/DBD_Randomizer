//
// Created by nicolas on 9/15/25.
//

#include "../include/db.h"

perks_t SURV_PERKS_LIST[] = {
    {0, SURV_ALL, "Dark Sense", "Sentiment Obscur","assets/icons/perks/survivors/IconPerks_darkSense.png",
        "Each time a generator is completed, Dark Sense activates.\n"
        "While Dark Sense is active, the Killer entetering a 24 meter around you reveals their aura for 10 seconds\n"
        "Once the aura's duration expires, Dark Sense deactivates.",
        "Chaque fois qu’un générateur est réparé, Sentiment obscur s'active. Tant que Sentiment obscur est actif, l'aura du tueur est révélée quand celui-ci se trouve dans un rayon de 24 mètres et ce pendant 10 secondes.\n"
        "Dès que la durée de l'aura expire, Sentiment obscur se désactive.", NULL},

    {1, SURV_ALL, "Déjà Vu", "Déjà-Vu","assets/icons/perks/survivors/IconPerks_dejaVu.png",
        "The auras of 3 generators which are in close proximity to one another are revealed to you.\n"
        "Gain a 6% repair speed bonus on the revealed generators.",
        NULL, NULL},

    {2, SURV_ALL, "Hope", "Espoir","assets/icons/perks/survivors/IconPerks_hope.png",
        "As soon as the exit gates are powered you gain a 5% Haste status effect.",
        "Les auras de 3 générateurs proches les uns des autres vous sont révélées.\n"
        "Gagnez un bonus de vitesse de réparation de 6 % sur les générateurs révélés.", NULL},

    {3, SURV_ALL, "Kindred", "Parenté","assets/icons/perks/survivors/IconPerks_kindred.png",
        "While you are on the hook, all Survivor's auras are revealed to all other Survivors. If The Killer is within a 16 meter range, The Killer's aura is revealed to you and all other Survivors.\n"
        "While a Survivor other than you is on the hook, all other Survivors' auras are revealed to you. If The Killer is within a 16 meter range of the hooked Survivor, The Killer's aura is revealed to you.",
        "Quand vous êtes sur le crochet, les auras de tous les survivants sont révélées aux autres survivants. Si le tueur se trouve dans un rayon de 16 mètres, son aura est révélée à tous les survivants, vous compris.\n"
        "Quand un survivant autre que vous est suspendu au crochet, vous voyez l’aura de tous les autres survivants. Si le tueur se trouve dans un rayon de 16 mètres du survivant suspendu, vous voyez l’aura du tueur.", NULL},

    {4, SURV_ALL, "Lightweight", "Poids Plume","assets/icons/perks/survivors/IconPerks_lightweight.png",
        "Scratch marks stay visible 5 seconds less than normal, and their spacing is inconsistent.",
        "Votre foulée souple et légère rend vos traces difficiles à suivre. Les empreintes restent visibles 5 seconde(s) de moins que la normale et leur espacement est irrégulier.", NULL},

    {5, SURV_ALL, "No One Left Behind", "On n'abandonne personne","assets/icons/perks/survivors/IconPerks_noOneLeftBehind.png",
        "Once the exit gates are powered, you gain the following effects:\n"
        "- 100% bonus action speed when healing and unhooking other Survivors.\n"
        "- When unhooking a Survivor, increase the Haste they gain by 10%.\n"
        "- The auras of all other Survivors are revealed to you.",
        "Dès que le courant des portes de sortie est rétabli, vous bénéficiez des effets suivants :\n"
        "- 100 % de vitesse d'action bonus en soignant et en décrochant d’autres survivants.\n"
        "- Lorsque vous décrochez un survivant, vous augmentez la Rapidité qu'il gagne de 10 %.\n"
        "- Vous voyez l’aura de tous les autres survivants.", NULL},

    {6, SURV_ALL, "Plunderer's Instinct", "Instinct de Pillard","assets/icons/perks/survivors/IconPerks_plunderersInstinct.png",
        "Reveal unopened chests and items when within a 64 meter range. Increases the odds of finding an item of higher rarity from chests by 50%.",
        "L’aura des coffres fermés et des objets de l’environnement vous est révélée quand ils se trouvent dans un rayon de 64 mètres. Augmente de 50 % les chances de trouver un objet de rareté supérieure dans les coffres.", NULL},

    {7, SURV_ALL, "Premonition", "Prémonition","assets/icons/perks/survivors/IconPerks_premonition.png",
        "Get an auditory warning when looking in the direction of the Killer in a 45 degree cone within a range of 36 meters. Premonition has a cooldown of 30 seconds each time it activates.",
        "Recevez un avertissement sonore quand vous regardez dans la direction du tueur dans un cône de 45 degrés et dans un rayon de 36 mètres. Prémonition a un temps de recharge de 30 secondes à chaque activation.", NULL},

    {8, SURV_ALL, "Resilience", "Résistance","assets/icons/perks/survivors/IconPerks_resilience.png",
        "Grants 9% additional speed when repairing, sabotaging, healing, unhooking, vaulting, cleansing or blessing a Totem, opening exit gates, and unlocking while injured.",
        "Alloue 9 % de vitesse supplémentaire aux réparations, sabotages, soins, décrochages, sauts d'obstacles, purifications, ouvertures des portes de sortie et déverrouillages quand vous êtes blessé.", NULL},

    {9, SURV_ALL, "Slippery Meat", "Viande Glissante","assets/icons/perks/survivors/IconPerks_slipperyMeat.png",
        "- Unlocks the ability to attempt to unhook yourself.\n"
        "- Grants up to 3 extra escape attempts on the hook.\n"
        "- Hook escape attempts have a 4% increased chance to succeed.",
        "Déverrouille la capacité de tenter de vous décrocher vous-même.\n"
        "- Augmente de 3 le nombre de tentatives supplémentaires pour se libérer du crochet.\n"
        "- Les tentatives de libération du crochet ont une chance de réussite supérieure de 4 %.", NULL},

    {10, SURV_ALL, "Small Game", "Petit Gibier","assets/icons/perks/survivors/IconPerks_smallGame.png",
        "Get an auditory warning when looking in the direction of Totems in a 45-degree cone within a range of 12 meters. Small Game has a cooldown of 10 seconds each time it activates. For each Dull Totem and Hex Totem cleansed by any player, gain a Token. Small Game's detection cone is reduced by 5 degrees per token.",
        "Recevez un avertissement sonore quand vous regardez dans la direction de totems dans un cône de 45 degrés et dans un rayon de 12 mètres. Petit Gibier a un temps de rechargement de 10 secondes à chaque activation. Pour chaque totem passif et totem ensorcelé purifié par un joueur, vous gagnez un jeton. Le cône de détection de Petit gibier est réduit de 5 degrés par jeton.", NULL},

    {11, SURV_ALL, "Spine Chill", "Frisson","assets/icons/perks/survivors/IconPerks_spineChill.png", "Get notified when the Killer is looking at you with a clear line of sight within a 36-meter range. Your speed while repairing, sabotaging, healing, unhooking, cleansing, blessing, opening exit gates and unlocking is increased by 6%.\n"
        "The effects of Spine Chill linger for 0.5 seconds after the Killer looks away or is out of range.",
        "Vous recevez une notification quand le tueur se trouve dans un rayon de 36 mètres autour de vous et qu’il vous regarde sans obstruction dans son champ de vision. Vos vitesses de réparation, de sabotage, de soins, de décrochage, de purification, de bénédiction, d’ouverture de porte de sortie et de déverrouillage augmentent de 6 %.\n"
        "Les effets de Frisson perdurent 0,5 seconde après que le tueur détourne le regard ou n’est plus à portée.", NULL},

    {12, SURV_ALL, "This is not Happening", "Ce n'est pas en Train d'Arriver","assets/icons/perks/survivors/IconPerks_thisIsNotHappening.png",
        "Great Skill Check success zones when repairing and healing get 30% bigger when you are injured.",
        "Les zones de succès des tests d’habileté excellents des réparations et des soins sont élargies de 30 % quand vous êtes blessé.", NULL},

    {13, SURV_ALL, "We'll Make It", "Nous Y Arriverons","assets/icons/perks/survivors/IconPerks_wellMakeIt.png",
        "When you rescue a Survivor from a hook, gain a 100% speed increase while healing others for 90 seconds.",
        "Lorsque vous sauvez un survivant d’un crochet, vous gagnez 100 % d’augmentation de vitesse de soins lorsque vous soignez les autres, et ce pendant 90 secondes.", NULL},

    {14, DWIGHT, "Bond", "Lien", "assets/icons/perks/survivors/IconPerks_bond.png",
        "Allies' auras are revealed to you when they are within a 36 meter range.",
        "L'aura des alliés vous est révélée quand ils se trouvent dans un rayon de 36 mètres.", NULL},

    {15, DWIGHT, "Leader", "Meneur", "assets/icons/perks/survivors/IconPerks_leader.png",
        "Increases other Survivors' healing, sabotage, unhooking, cleansing, opening exit gates, and chest unlocking speeds by 30% when they are within a 10 meter range from you.\n"
        "Survivors can only be affected by one Leader effect at a time.\n"
        "Once out of range, this effect persists for 20 seconds.",
        "Augmente la vitesse de soins, de sabotage, de décrochage, de purification, d'ouverture des portes de sortie et de déverrouillage de coffre des autres survivants de 30 %, quand ils se trouvent dans un rayon de 10 mètres autour de vous.\n"
        "Les survivants ne peuvent pas être affectés par plus d'un effet Meneur à la fois.\n"
        "Une fois hors de portée, l'effet persiste 20 secondes.", NULL},

    {16, DWIGHT, "Prove Thyself", "Fais tes Preuves", "assets/icons/perks/survivors/IconPerks_proveThyself.png",
        "For every other Survivor working on a generator within a 4 meter range, gain 10% repair speed bonus. This same bonus is also applied to all other Survivors within range.\n"
        "Survivors can only be affected by one Prove Thyself effect at a time.",
        "Pour chaque autre survivant travaillant sur un générateur dans un rayon de 4 mètres, gagnez un bonus de10 % de vitesse de réparation. Ce même bonus s'applique aussi à tous les autres survivants à portée.\n"
        "Les survivants ne peuvent être affectés que par un seul effet Fais tes preuves à la fois.", NULL},

    {17, MEG, "Adrenaline", "Adrénaline", "assets/icons/perks/survivors/IconPerks_adrenaline.png",
        "This perk activates when the exit gates are powered.\n"
        "Instantly heal one health state if you are injured or in the dying state and gain 50% Haste for 3 seconds.\n"
        "Adrenaline ignores the Exhausted status effect. Causes the Exhausted status effect for 40 seconds.",
        "Cette compétence s'active quand le courant électrique des portes de sortie est rétabli.\n"
        "Vous récupérez instantanément un état de santé si vous êtes en état Blessé ou Critique et vous gagnez 50 % de Rapidité pendant 3 secondes.\n"
        "Adrénaline ignore l'effet de statut Épuisement. Provoque l'effet de statut Épuisement pendant 40 secondes.", NULL},

    {18, MEG, "Quick & Quiet", "Rapide et Silencieux", "assets/icons/perks/survivors/IconPerks_quickAndQuiet.png",
        "The vault and hide actions' noise detection and audio range is reduced by 100%.\n"
        "This effect can only trigger once every 15 seconds.",
        "Vous faites moins de bruit que les autres en sautant par-dessus les obstacles ou en vous cachant dans des casiers.\n"
        "La distance à laquelle le bruit causé par ces actions est détecté diminue de 100 %.\n"
        "Cet effet ne peut se déclencher qu’une fois toutes les 15 secondes.", NULL},

    {19, MEG, "Sprint Burst", "Course Effrénée", "assets/icons/perks/survivors/IconPerks_sprintBurst.png",
        "When you start running, gain 50% Haste for a maximum of 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Sprint Burst cannot be used while Exhausted.",
        "Quand vous commencez à courir, vous gagnez 50 % de Rapidité pendant un maximum de 3 secondes.\n"
        "Provoque l'effet de statut Épuisement pendant 40 secondes.\n"
        "Course effrénée ne peut pas être utilisée en état d'Épuisement.", NULL},

    {20, CLAUDETTE, "Botany Knowledge", "Connaissance en Botanique", "assets/icons/perks/survivors/IconPerks_botanyKnowledge.png",
        "Healing speed is increased by 50%.",
        "La vitesse de soins augmente de 50 %.", NULL},

    {21, CLAUDETTE, "Empathy", "Empathie", "assets/icons/perks/survivors/IconPerks_empathy.png",
        "Injured Survivors are revealed to you when within a 128 meter range.",
        "Les survivants blessés vous sont révélés lorsqu'ils sont dans un rayon de 128 mètres.", NULL},

    {22, CLAUDETTE, "Self-Care", "Auto-Traitement", "assets/icons/perks/survivors/IconPerks_self-Care.png",
        "Unlocks the Self Care ability, which allows you to heal without a Med-kit at 35% normal healing speed.",
        "Débloque la capacité Auto-traitement, qui vous permet de vous soigner sans trousse de soins à 35 % de la vitesse de soins normale.", NULL},

    {23, JAKE, "Calm Spirit", "Esprit Calme", "assets/icons/perks/survivors/IconPerks_calmSpirit.png",
        "- Reduces chances of alerting woodland creatures by 100%.\n"
        "Allows you to overcome the urge to scream.\n"
        "Allows you to open chests and cleanse/bless Totems silently, but at 30% reduced speed.",
        "Réduit la probabilité d'alerter les animaux des bois de 100  %.\n"
        "Vous permet de surmonter l'envie de crier.\n"
        "Vous permet d'ouvrir des coffres et de purifier/bénir des totems en silence, mais à une vitesse réduite de 30 %.", NULL},

    {24, JAKE, "Iron Will", "Volonté de Fer", "assets/icons/perks/survivors/IconPerks_ironWill.png",
        "Grunts of pain caused by injuries are reduced by 100%. Does not function while Exhausted. Does not inflict Exhausted.",
        "Les gémissements de douleur causés par les blessures sont réduits de 100 %. Ne fonctionne pas si Épuisement vous affecte. N'inflige pas Épuisement.", NULL},

    {25, JAKE, "Saboteur", "Saboteur", "assets/icons/perks/survivors/IconPerks_saboteur.png",
        "- See hook auras in a 56 meter radius from the pickup spot if another Survivor is being carried. Scourge Hooks are shown in yellow.\n"
        "- Unlocks the ability to sabotage hooks without a Toolbox.\n"
        "- Sabotaging a hook without a Toolbox takes 2.3 seconds.\n"
        "- The sabotage action has a 60 second cooldown.",
        "Vous voyez les auras des crochets dans un rayon de 56 mètres autour du point de ramassage si un autre survivant est en train d'être transporté. Les crochets flagellateurs sont montrés en jaune.\n"
        "- Débloque la capacité de sabotage de crochets sans boîte à outils.\n"
        "- Saboter un crochet sans boîte à outils dure 2,3 secondes.\n"
        "- L'action de sabotage a un temps de recharge de 60 secondes.", NULL},

    {26, NEA, "Balanced Landing", "Atterrissage Équilibré", "assets/icons/perks/survivors/IconPerks_balancedLanding.png",
        "After falling from a height, cat-like reflexes reduce your stagger duration from falling by 75% and reduce the volume of grunts from falling by 100%. You gain 50% Haste for a maximum of 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Balanced Landing cannot be used while Exhausted.",
        "Lorsque vous tombez de haut, vos réflexes de chat réduisent la durée du déséquilibre consécutif à la chute de 75 % et le volume des grognements en tombant de 100%. Vous gagnez 50 % de Rapidité pendant un maximum de 3 secondes.\n"
        "Provoque l’effet de statut Épuisement pendant 40 secondes.\n"
        "Impossible d’utiliser Atterrissage équilibré sous l’effet de statut Épuisement.", NULL},

    {27, NEA, "Streetwise", "Débrouillardise", "assets/icons/perks/survivors/IconPerks_streetwise.png",
        "The first time you deplete an Item with charges, see the Killer's Aura for 8 seconds.\n"
        "Items with charges retrieved from Chests have +80% charges.",
        "La première fois que vous épuisez un objet avec des charges, vous voyez l'aura du tueur pendant 8 secondes.\n"
        "Les objets avec des charges trouvés dans des coffres ont 80 charges supplémentaires.", NULL},

    {28, NEA, "Urban Evasion", "Évasion Urbaine", "assets/icons/perks/survivors/IconPerks_urbanEvasion.png",
        "While crouching, you have 100% Haste.",
        "En position accroupie, vous gagnez 100 % de Rapidité.", NULL},

    {29, LAURIE, "Decisive Strike", "Coup Décisif", "assets/icons/perks/survivors/IconPerks_decisiveStrike.png",
        "After being unhooked or unhooking yourself, Decisive Strike activates for 60 seconds.\n"
        "While active, complete a Skill Check when grabbed by the Killer to escape, stunning them for 4 seconds.\n"
        "- Succeeding or failing the Skill Check disables Decisive Strike.\n"
        "- You become the Obsession after stunning the Killer.\n"
        "- The perk and its effects are disabled if the exit gates are powered.\n"
        "Increases your chance to be the Obsession.\n"
        "Taking any Conspicuous Action will deactivate Decisive Strike.",
        "Après votre libération d'un crochet grâce à quelqu'un ou par vos propres moyens, Coup décisif s’active durant 60 secondes.\n"
        "- Si le tueur vous attrape quand Coup décisif est actif, réussissez un test d’habileté pour vous échapper et l’étourdir pendant 4 secondes.\n"
        "- Réussir ou rater le test d’habileté désactive Coup décisif.\n"
        "- Vous devenez l'obsession après avoir étourdi le tueur.\n"
        "- La compétence et ses effets sont désactivés si les portes de sortie sont alimentées.\n"
        "Augmente vos chances de devenir l’obsession.\n"
        "Accomplir toute action perceptible désactivera Coup décisif.", NULL},

    {30, LAURIE, "Object of Obsession", "Objet d'Obsession", "assets/icons/perks/survivors/IconPerks_objectOfObsession.png",
        "While your aura is revealed to the Killer, the Killer's aura becomes visible to you and you gain a 6% bonus to healing, repairing and cleansing speed.\n"
        "If you are the Obsession, your aura is revealed to the Killer for 3 seconds once every 30 seconds.\n"
        "Increases your chances of being the Obsession.",
        "Quand votre aura lui est révélée, vous voyez la sienne en retour et vous gagnez un bonus de 6 % à la vitesse de soin, de réparation et de purification\n"
        "Si vous êtes l’obsession, votre aura est révélée au tueur pendant 3 secondes une fois toutes les 30 secondes.\n"
        "Augmente vos chances de devenir l’obsession.", NULL},

    {31, LAURIE, "Sole Survivor", "Unique Survivant", "assets/icons/perks/survivors/IconPerks_soleSurvivor.png",
        "Every time a fellow Survivor is killed or sacrificed, gain a token. For each token, your aura cannot be read by The Killer within a max range of 24 meters.\n"
        "When you're the last Survivor alive:\n"
        "- Gain 75% action speed when repairing generators.\n"
        "- Gain 50% action speed while opening an exit gate or the Hatch.\n"
        "Increases your chances of being The Killer's Obsession.",
        "Chaque fois qu’un autre survivant est tué ou sacrifié, vous gagnez un jeton. Pour chaque jeton, votre aura est invisible pour le tueur dans un rayon maximal de 24 mètres.\n"
        "Lorsque vous êtes le dernier survivant en vie :\n"
        "- Vous gagnez 75 % de vitesse d'action en réparant des générateurs.\n"
        "- Vous gagnez 50 % de vitesse d'action en ouvrant une porte de sortie ou la trappe.\n"
        "Augmente vos chances d’être l’obsession du tueur.", NULL},

    {32, ACE, "Ace in the hole", "Atout dans la Manche", "assets/icons/perks/survivors/IconPerks_aceInTheHole.png",
        "When retrieving an item from a chest, there is a 100% chance that a Visceral (or lower) add-on will be attached to it.\n"
        "100% chance of finding a second add-on of Uncommon rarity (or lower).\n"
        "When escaping, keep any add-ons your item has.",
        "Quand vous trouvez un objet dans un coffre, il y a 100 % de chances qu’un accessoire de rareté Viscérale (ou inférieure) y soit attaché.\n"
        "100 % de chances de trouver un deuxième accessoire de rareté Insolite (ou inférieure).\n"
        "En vous échappant, conservez tous les accessoires éventuels de votre objet.", NULL},

    {33, ACE, "Open-Handed", "Le cœur sur la main", "assets/icons/perks/survivors/IconPerks_open-Handed.png",
        "- Increases aura reading ranges by 16 meters.\n"
        "Survivors may only be affected by one Open-Handed effect at a time.",
        "Augmente la portée du repérage d’auras de 16 mètres.\n"
        "Les survivants peuvent uniquement être affectés par un effet Le cœur sur la main à la fois.", NULL},

    {34, ACE, "Up the Ante", "Augmenter la Mise", "assets/icons/perks/survivors/IconPerks_upTheAnte.png",
        "For each other Survivor still alive, grant a 3% bonus of luck to all remaining Survivors.\n"
        "Unlocks the ability to attempt to unhook yourself for all Survivors.",
        "Confère 3 % de bonus de chance à tous les survivants pour chaque survivant encore en vie.\n"
        "Déverrouille la capacité de tenter de se décrocher soi-même pour tous les survivants.", NULL},

    {35, BILL, "Borrowed Time", "Sursis","assets/icons/perks/survivors/IconPerks_borrowedTime.png",
        "Survivors you unhook:\n"
        "- Keep their Endurance status effect for an extra 10 seconds.\n"
        "- Retain their Haste for an extra 10 seconds.\n",
        "Les survivants que vous décrochez :\n"
        "- Gardent leur effet de statut d'Endurance pendant 10 secondes de plus.\n"
        "- Gardent leur Rapidité pendant 10 secondes de plus.", NULL},

    {36, BILL, "Left Behind", "Abandonné","assets/icons/perks/survivors/IconPerks_leftBehind.png",
        "If you are the last Survivor remaining in the trial, you can see the aura of the Hatch within a 32 meter range.",
        "Si vous êtes le dernier survivant lors de la partie, vous pouvez voir l’aura de la trappe jusqu’à 32 mètres.", NULL},

    {37, BILL, "Unbreakable", "Indéfectible","assets/icons/perks/survivors/IconPerks_unbreakable.png",
        "Grants the ability to fully recover from the dying state once per trial. Increases dying recovery speed by 35%.",
        NULL, NULL},

    {38, FENG, "Alert", "Vigilant","assets/icons/perks/survivors/IconPerks_alert.png",
        "When the Killer performs a break action, the Killer is revealed to you for 5 seconds.",
        "Une fois par partie, vous avez la capacité de vous rétablir entièrement de l'état critique. Augmente la vitesse de récupération depuis l'état critique de 35 %.", NULL},

    {39, FENG, "Lithe", "Souple","assets/icons/perks/survivors/IconPerks_lithe.png",
        "After performing a rushed vault, you gain 50% Haste for 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Lithe cannot be used while Exhausted.",
        "Après un saut précipité, vous gagnez 50 % de Rapidité pendant 3 secondes.\n"
        "Provoque l'effet de statut Épuisement pendant 40 secondes.\n"
        "Souple ne peut pas être utilisé pendant Épuisement.", NULL},

    {40, FENG, "Technician", "Technicien","assets/icons/perks/survivors/IconPerks_technician.png",
        "The noises caused by your repairs and their hearing distance are reduced by 8 meters.\n"
        "On a failed repair Skill Check, the following effects happen:\n"
        "- The generator explosion will be prevented.\n"
        "- The generator loses progress as usual.\n"
        "- An additional 3% progress is lost.",
        "En cas d'échec du test de compétence de réparation, les effets suivants se produisent :\n"
        "- L'explosion du générateur sera évitée.\n"
        "- Le générateur perd sa progression\n"
        "- Une progression supplémentaire de 3 % est perdue.", NULL},

    {41, DAVID, "Dead Hard", "Dur à Cuire","assets/icons/perks/survivors/IconPerks_deadHard.png",
        "Dead hard activates after you are unhooked or unhook yourself.\n"
        "When injured, tap into your adrenaline bank to avoid incoming damage. Press the Active Ability Button 1 while running to gain the Endurance status effect for the next 0.5 seconds.\n"
        "- Causes the Exhausted status effect for 40 seconds.\n"
        "- Dead Hard then deactivates.",
        "Dur à cuire s'active après avoir été libéré d’un crochet ou après vous en être libéré vous-même.\n"
        "En état Blessé, vous puisez dans vos réserves d’adrénaline pour éviter les dégâts qui arrivent. Appuyez sur le bouton 1 de capacité active en courant pour gagner l'effet de statut Endurance pendant 0,5 seconde.\n"
        "- Inflige l'effet de statut Épuisement pendant 40 secondes.\n"
        "- Dur à cuire se désactive alors.", NULL},

    {42, DAVID, "No Mither", "Même pas Mal","assets/icons/perks/survivors/IconPerks_noMither.png",
        "You are affected by the Broken status effect for the duration of the trial.\n"
        "Your thick blood coagulates practically instantly.\n"
        "- You don't leave pools of blood.\n"
        "- Grunts of pain caused by injuries are reduced by 100% at any time.\n"
        "- Your recovery speed is increased by 25% and you can completely recover from the dying state.",
        "Vous êtes affecté par l’effet de statut Brisé pendant toute la durée de la partie.\n"
        "Votre sang épais coagule presque instantanément.\n"
        "- Vous ne laissez pas de flaques de sang.\n"
        "- Les gémissements de douleur dus aux blessures sont toujours réduits de 100 %.\n"
        "- Votre vitesse de récupération augmente de 25 % et vous pouvez récupérer complètement de l'état critique.", NULL},

    {43, DAVID, "We're Gonna Live Forever", "Nous Vivrons Éternellement","assets/icons/perks/survivors/IconPerks_wereGonnaLiveForever.png",
        "When healing another Survivor in the dying state, your healing speed is increased by 100%.\n"
        "Once healing is complete, the healed Survivor gains the Endurance status effect for 10 seconds. This effect has a 30-second cooldown.",
        "Lorsque vous soignez un autre survivant en état critique, votre vitesse de soins est augmentée de 100 %.\n"
        "Une fois que le soin est achevé, le survivant soigné gagne l'effet de statut Endurance pendant 10 secondes. Cet effet a un temps de recharge de 30 secondes.", NULL},

    {44, QUENTIN, "Pharmacy", "Pharmacie","assets/icons/perks/survivors/IconPerks_pharmacy.png",
        "- Unlocking chests is 125% faster.\n"
        "- The hearing distance for noises from unlocking chests is reduced by 12 meters.\n"
        "- Pharmacy guarantees an Emergency Med-kit upon completing the interaction.",
        "Le déverrouillage des coffres est 125 % plus rapide.\n"
        "La distance à laquelle le bruit de déverrouillage des coffres peut être perçu est réduite de 12 mètres.\n"
        "Pharmacie vous garantit une trousse de soins d’urgence lorsque l'interaction est complétée.", NULL},

    {45, QUENTIN, "Vigil", "Veillée","assets/icons/perks/survivors/IconPerks_vigil.png",
        "You and Survivors within 16 meters recover 66% faster from the Blindness, Broken, Exhausted, Exposed, Hemorrhage, Hindered, Mangled and Oblivious status effects.\n"
        "Survivors can only be affected by one Vigil's effect at a time.\n"
        "Once out of range, this effect persists for 15 seconds.",
        "Vous et les survivants dans un rayon de 16 mètres récupérez 66 % plus vite des effets de statut Aveuglement, Brisé, Épuisement, À découvert, Hémorragie, Entrave, Estropiement et Inconscient.\n"
        "Les survivants ne peuvent être affectés que par un seul effet de Veillée à la fois.\n"
        "Une fois hors de portée, cet effet perdure 15 secondes.", NULL},

    {46, QUENTIN, "Wake Up!", "Debout!","assets/icons/perks/survivors/IconPerks_wakeUp.png",
        "Once all generators are powered, exit gates are revealed to you. While opening the exit gates, reveal your aura to other Survivors.\n"
        "While this perk is active, open the exit gates 12.5% faster for each Survivor still alive.",
        "Une fois que tous les générateurs sont activés, les portes de sortie vous sont révélées. Votre aura est révélée aux autres survivants pendant que vous ouvrez les portes de sortie.\n"
        "Lorsque cette compétence est active, vous ouvrez les portes de sortie 12.5 % plus vite pour chaque survivant encore en vie.", NULL},

    {47, TAPP, "Detective's Hunch", "Intuition de l'Inspecteur","assets/icons/perks/survivors/IconPerks_detectivesHunch.png",
        "When a generator is completed, the auras of Generators, Chests and Totems within 64 meters are revealed to you for 20 seconds.",
        "Quand un générateur est terminé, l'aura des générateurs, des coffres et des totems dans un rayon de 64 mètres vous est révélée pendant 20 secondes.", NULL},

    {48, TAPP, "Stake Out", "En Planque","assets/icons/perks/survivors/IconPerks_stakeOut.png",
        "For each 15 seconds you are standing within the Killer Terror Radius and not in a chase, you gain a token up to a maximum of 4 tokens.\n"
        "When Stake Out has at least 1 token, good Skill Checks are considered great Skill Checks, consume 1 token, and grant an additional 1% bonus to generator repair progress.",
        "À chaque fois que vous passez 15 secondes dans le rayon de terreur du tueur sans être poursuivi, vous gagnez un jeton (jusqu'à 4 jetons maximum).\n"
        "Quand En planque bénéficie d'au moins 1 jeton, les bons tests d'habileté sont considérés comme d'excellents tests d'habileté, ils consomment 1 jeton et octroient un bonus supplémentaire de 1 % à la progression de réparation du générateur.", NULL},

    {49, TAPP, "Tenacity", "Ténacité","assets/icons/perks/survivors/IconPerks_tenacity.png",
        "Your ferocious tenacity in dire situations allows you to, while in the dying state, have 25% Haste and your aura cannot be read by the Killer. Grunts of pain while in the dying state are reduced by 75%.",
        "Votre incroyable ténacité dans les situations difficiles vous fait gagner 25 % de Rapidité en état critique et votre aura ne peut pas être vue par le tueur. Les gémissements de douleur en état critique sont réduits de 75 %.", NULL},

    {50, KATE, "Boil Over", "Effusion","assets/icons/perks/survivors/IconPerks_boilOver.png",
        "Your struggling effects on The Killer are increased by 80%.\n"
        "You obscure The Killer's ability to see hook auras within 16 meters.\n"
        "You gain 33 % of current wiggling progress when the Killer drops from great heights.",
        "Les effets de votre lutte contre le tueur augmentent de 80 %.\n"
        "Vous obscurcissez la capacité du tueur à voir l’aura des crochets dans un rayon de 16 mètres.\n"
        "Vous gagnez 33 % sur votre progression de gigotement actuelle quand le tueur tombe de haut.", NULL},

    {51, KATE, "Dance With Me", "Danse Avec Moi","assets/icons/perks/survivors/IconPerks_danceWithMe.png",
        "When performing a rushed vault or leaving a locker in a sprint, you leave no scratch marks for 5 seconds.\n"
        "Dance With Me has a cooldown of 15 seconds.",
        "Lors d'un saut d'obstacle rapide ou si vous quittez un casier en courant, vous ne laissez pas de marques d'éraflure pendant 5 secondes.\n"
        "Danse avec moi a un temps de récupération de 15 secondes.", NULL},

    {52, KATE, "Windows of Opportunity", "Parfaite Occasion","assets/icons/perks/survivors/IconPerks_windowsOfOpportunity.png",
        "Auras of pallets, breakable walls, and vault locations are revealed to you when within a 32 meter range.",
        "L’aura des palettes, des murs destructibles et des sauts d’obstacles vous est révélée dans un rayon de 32 mètres.", NULL},

    {53, ADAM, "Autodidact", "Autididacte","assets/icons/perks/survivors/IconPerks_autodidact.png",
        "You start the trial with a -15% progress penalty for Skill Checks to heal other Survivors.\n"
        "For every successful Skill Check while healing another Survivor, you receive a token up to a maximum of 5 tokens.\n"
        "Each token grants you a +15% progress bonus.\n"
        "Great Skill Checks cannot be performed while using Autodidact.\n"
        "- Autodidact is not active when using a Med-kit to heal.",
        "Vous commencez la partie avec -15 % de malus de progression pour les tests d’habileté de soins aux autres survivants.\n"
        "Chaque fois que vous réussissez un test d’habileté en soignant un autre survivant, vous recevez un jeton, jusqu’à un maximum de 5 jetons.\n"
        "Chaque jeton vous confère +15 % de progression bonus.\n"
        "Les tests d’habileté excellents ne peuvent pas être réalisés lorsque vous utilisez Autodidacte.\n"
        "Autodidacte n’est pas actif lorsque vous utilisez une trousse de soins.", NULL},

    {54, ADAM, "Deliverance", "Libération","assets/icons/perks/survivors/IconPerks_deliverance.png",
        "After performing a safe hook rescue on another Survivor, Deliverance activates.\n"
        "You now have a 100% chance of unhooking yourself during the escape attempt.\n"
        "A successful Deliverance from the hook triggers the Broken status effect for 60 seconds.",
        "Après avoir réalisé le décrochage sécuritaire d’un autre survivant, Libération s’active.\n"
        "Vous avez désormais 100 % de chances de vous décrocher vous-même lors d’une tentative d’évasion.\n"
        "Une Libération du crochet réussie déclenche l’effet de statut Brisé pendant 60 secondes.", NULL},

    {55, ADAM, "Diversion", "Diversion","assets/icons/perks/survivors/IconPerks_diversion.png",
        "Being within the Killer's Terror Radius while not in a chase for 20 seconds activates Diversion.\n"
        "- Once Diversion is activated, press the Active Ability Button 1 while crouched and motionless to throw a pebble, which creates a distraction for The Killer at a distance of 20 meters.\n"
        "- The perk timer resets once the ability has been activated.\n"
        "The distraction consists of:\n"
        "- A loud noise notification\n"
        "- Scratch marks",
        "Se trouver dans le rayon de terreur du tueur lorsqu’il n’y a pas de poursuite pendant 20 secondes active Diversion.\n"
        "- Une fois Diversion activée, appuyez sur le bouton de capacité active 1 en étant accroupi et immobile afin de jeter un caillou à une distance de 20 mètres, qui crée une distraction pour le tueur.\n"
        "- Le chrono de la compétence est réinitialisé après l’activation de la capacité.\n"
        "Détail de la distraction :\n"
        "- Alerte par une notification sonore\n"
        "- Marques d’éraflure", NULL},

    {56, JEFF, "Aftercare", "Suivi des Soins","assets/icons/perks/survivors/IconPerks_aftercare.png",
        "You see the aura of every Survivor that:\n"
        "- You rescue from a hook, or rescues you from a hook.\n"
        "- You complete a healing action on, or completes a healing action on you.\n"
        "They also see your aura.\n"
        "This occurs for up to 3 Survivors. All effects of Aftercare are reset when you are hooked by The Killer.",
        "Vous voyez l'aura de tout survivant :\n"
        "- Que vous sauvez ou qui vous sauve d'un crochet.\n"
        "- Que vous soignez ou qui vous soigne.\n"
        "Le survivant voit lui aussi votre aura.\n"
        "Vous pouvez faire cela avec un maximum de 3 survivant(s). Tous les effets de cette compétence sont réinitialisés quand le tueur vous suspend à un crochet.", NULL},

    {57, JEFF, "Breakdown", "Effondrement","assets/icons/perks/survivors/IconPerks_breakdown.png",
        "Any time you are removed from a hook (escaped or saved), the hook breaks and the Killer's aura is shown to you for 6 seconds. A hook broken by this perk takes 180 seconds to respawn.",
        "Chaque fois que vous êtes libéré d’un crochet (en vous échappant ou en étant secouru), ce dernier se brise et vous pouvez voir l’aura du tueur pendant 6 secondes. Un crochet brisé par cette compétence met 180 secondes à réapparaître.", NULL},

    {58, JEFF, "Distortion", "Distorsion","assets/icons/perks/survivors/IconPerks_distortion.png",
        "When your aura would be shown to the Killer, the perk activates.\n"
        "Distortion starts with 1 token. When your aura would be read, Distortion activates and consumes a token. For the next 12 seconds, your aura and scratch marks will not be shown to The Killer. For each 15 seconds spent in chase, regain 1 token, up to 2.\n"
        "This effect cannot trigger while in the dying state.",
        "Lorsque votre aura devrait être visible du tueur, la compétence s’active.\n"
        "Distortion commence avec 1 jeton. Lorsque votre aura devrait être révélée, Distortion s'active et consume un jeton. Durant les 12 secondes qui suivent, votre aura et vos marques d'éraflures ne sont pas révélées au tueur. Toutes les 15 secondes passées dans une poursuite, regagnez 1 jeton, pour un maximum de 2.\n"
        "Cet effet ne peut pas se déclencher lorsque vous êtes en état critique.", NULL},

    {59, JANE, "Head On", "De Front","assets/icons/perks/survivors/IconPerks_headOn.png",
        "While standing in a locker, for 3 seconds, the perk activates.\n"
        "While the perk is activated, performing a rushed action to leave a locker stuns The Killer for 3 seconds if they are standing within range.\n"
        "Causes the Exhausted status effect for 40 seconds. Head On cannot be used while Exhausted.",
        "Après 3 secondes à l’intérieur d’un casier, De front s’active.\n"
        "Tant que De front est active, effectuez une action précipitée pour sortir du casier et utiliser De front. Si le tueur se tient dans le rayon d'effet de De front, il est étourdi pendant 3 secondes.\n"
        "Provoque l’effet de statut Épuisement pendant 40 secondes.\n"
        "De front ne peut pas être utilisé quand vous êtes sous l'effet d'Épuisement.", NULL},

    {60, JANE, "Poised", "Assurance","assets/icons/perks/survivors/IconPerks_poised.png",
        "When first starting repairs on a generator, reveal the Killer's aura for 8 seconds. When a generator is completed, you leave no scratch marks for 30 seconds.",
        "Lorsque vous commencez pour la première fois les réparations sur un générateur, vous révélez l'aura du tueur pendant 8 secondes. Lorsqu'un générateur est réparé, vous ne laissez aucune marque d'éraflures pendant 30 secondes.", NULL},

    {61, JANE, "Solidarity", "Solidarité","assets/icons/perks/survivors/IconPerks_solidarity.png",
        "While injured, healing a Survivor without using a Med-kit also heals you at a 70% conversion rate.",
        "Quand vous êtes blessé, soigner un survivant sans trousse de soins vous soigne également à un taux de conversion de 70 %.", NULL},

    {62, ASH, "Buckle Up", "Accrochez-Vous","assets/icons/perks/survivors/IconPerks_buckleUp.png",
        "While healing a Survivor in the dying state:\n"
        "- You both can see the Killer's aura.\n"
        "When completing healing a Survivor from the dying state to injured:\n"
        "The healed Survivor gains 50% Haste for 5 seconds and leaves no scratch marks during this time.",
        "Quand vous soignez un survivant en état critique :\n"
        "- Vous voyez tous les deux l'aura du Tueur.\n"
        "Lorsque vous finissez de soigner le survivant de l'état critique à blessé :\n"
        "le survivant soigné gagne 50%  de Rapidité pendant 5 secondes et ne laisse aucune marque d'éraflure pendant ce temps.", NULL},

    {63, ASH, "Flip-Flop", "À la Revoyure","assets/icons/perks/survivors/IconPerks_flip-Flop.png",
        "While in dying state, 50% of your recovery progression is converted into wiggle progression when you are picked up by The Killer, up to a maximum of 50% total wiggle progression.",
        "En état critique, 50 % de vos progrès de récupération sont convertis en progrès pour vous débattre quand le Tueur vous saisit, jusqu'à un maximum de 50 % de progrès pour vous débattre au total.", NULL},

    {64, ASH, "Mettle of Man", "Force de Caractère","assets/icons/perks/survivors/IconPerks_mettleOfMan.png",
        "After you earn 3 Protection Hit scoring events, Mettle of Man activates.\n"
        "Once activated, the next occasion that would put you into the dying state from the injured state is ignored.\n"
        "The next time you heal back to full health, your aura will be revealed to the Killer when you are further than 16 meters from the Killer.\n"
        "Mettle of Man will deactivate the next time you are put into the dying state.\n"
        "Increases your chances to be the Killer's Obsession.",
        "Après avoir gagné 3 points avec Coup de protection, Force de caractère s’active.\n"
        "Une fois la compétence activée, la prochaine attaque qui devrait vous faire passer d’un état blessé à un état critique est ignorée.\n"
        "La prochaine fois que vous récupérerez 100 % de votre santé, votre aura sera révélée au tueur si vous êtes à plus de 16 mètres de lui.\n"
        "Force de caractère sera désactivée la prochaine fois que vous serez en état critique.\n"
        "Augmente vos chances de devenir l’obsession du tueur.", NULL},

    {65, NANCY, "Better Together", "Mieux Ensemble","assets/icons/perks/survivors/IconPerks_betterTogether.png",
        "The aura of the generator you are currently repairing is revealed to all other Survivors.\n"
        "If The Killer downs a Survivor while you are repairing a generator, you see the aura of all other Survivors for 20/25/30 seconds.",
        "L’aura du générateur que vous êtes en train de réparer apparaît à tous les autres survivants.\n"
        "Si le tueur met à terre un survivant pendant que vous réparez un générateur, vous voyez l’aura de tous les autres survivants pendant 30 secondes.", NULL},

    {66, NANCY, "Fixated", "Obnubilé","assets/icons/perks/survivors/IconPerks_fixated.png",
        "You can see your own scratch marks at all times.\n"
        "While walking, you have 20% Haste.",
        "Vous pouvez voir vos propres marques d’éraflure en permanence.\n"
        "En marchant, vous gagnez 20 % de Rapidité.", NULL},

    {67, NANCY, "Inner Strength", "Force Intérieur","assets/icons/perks/survivors/IconPerks_innerStrength.png",
        "Each time you complete a Totem cleanse action, Inner Strength activates. If you are already afflicted by the Broken status effect, Inner Strength does not activate.\n"
        "While Inner Strength is active, hiding inside a locker for 8 seconds while injured automatically heals you from injured to healthy.\n"
        "Inner Strength becomes deactivated as soon as it has successfully triggered.",
        "Chaque fois que vous réalisez l’action de purifier un totem, Guérison intérieure s’active. Si vous subissez déjà l’effet de statut Brisé, Force intérieure ne s’active pas\n"
        "Tant que Force intérieure est activée, se cacher dans un casier pendant 8 secondes en étant blessé vous soignera automatiquement de blessé à en bonne santé.\n"
        "Force intérieure se désactive dès cela fait.", NULL},

    {68, STEVE, "Babysitter", "Baby-Sitter","assets/icons/perks/survivors/IconPerks_babysitter.png",
        "When you unhook a Survivor, they won't leave scratch marks or pools of blood, and they gain a 10% Haste status effect for 30 seconds.\n"
        "You see the Killer's aura for 8 seconds.",
        "Lorsque vous décrochez un survivant, celui-ci ne laisse ni traces d'éraflures ni flaques de sang, et bénéficie d'un effet de statut Hâte de 10 % pendant 30 secondes.\n"
        "Vous voyez l'aura du tueur pendant 8 secondes", NULL},

    {69, STEVE, "Camaraderie", "Camaraderie","assets/icons/perks/survivors/IconPerks_camaraderie.png",
        "While you are on the hook in the struggle phase, Camaraderie activates.\n"
        "If another Survivor is within 16 meters of you while Camaraderie is activated, the hook timer is paused for 34 seconds.",
        "Tant que vous êtes sur le crochet pendant la phase de lutte, Camaraderie s’active.\n"
        "Si un autre survivant se tient à 16 mètres de vous pendant que Camaraderie est activée, le chronomètre de crochet est mis en pause pendant 34 secondes.", NULL},

    {70, STEVE, "Second Wind", "Second Souffle","assets/icons/perks/survivors/IconPerks_secondWind.png",
        "When you have healed other Survivors for the equivalent of one health state, Second Wind activates. If you are already afflicted by the Broken status effect, Second Wind does not activate.\n"
        "While Second Wind is activated, the next time you are unhooked or you unhook yourself, you are affected by the Broken status effect. After a total duration of 20 seconds, Second Wind automatically heals you from injured to healthy.\n"
        "Second Wind deactivates once you become healthy or if you are put into the dying state before Second Wind successfully triggers. You lose the Broken status effect.",
        "Après avoir soigné l’équivalent d’un état de santé chez les autres survivants, Second souffle s’active. Si vous êtes déjà sous l’effet de statut Brisé, Second souffle ne s’active pas.\n"
        "Tant que Second souffle est activé, votre libération suivante d’un crochet, avec ou sans aide, vous place sous l’effet de statut Brisé. Après une durée totale de 20 secondes, Second souffle vous soigne automatiquement de blessé à en bonne santé.\n"
        "Second souffle se désactive dès que vous êtes en bonne santé ou si vous vous retrouvez en état critique avant que Second souffle se déclenche avec succès. Vous perdez l’effet de statut Brisé.", NULL},

    {71, YUI, "Any Means Necessary", "Par Tous les Moyens","assets/icons/perks/survivors/IconPerks_anyMeansNecessary.png",
        "You see the auras of dropped Pallets.\n"
        "Press and hold the Active Ability Button 1 for 3 seconds while standing beside a dropped pallet to reset it to its upright position.",
        "Vous voyez l’aura des palettes lâchées.\n"
        "Appuyez et maintenez le bouton de capacité active 1 pendant 3 secondes à côté d’une palette lâchée pour la réinitialiser en position verticale.", NULL},

    {72, YUI, "Breakout", "Évasion","assets/icons/perks/survivors/IconPerks_breakout.png",
        "When within 5 meters of a carried Survivor, you gain 10% Haste status effect. The carried Survivor's wiggle speed is increased by 25%.",
        "Dans un rayon de 5 mètres d’un survivant transporté, vous gagnez 10 % d'effet de statut de Rapidité. La vitesse de gigotement du survivant transporté augmente de 25 %.", NULL},

    {73, YUI, "Lucky Break", "Coup de Chance","assets/icons/perks/survivors/IconPerks_luckyBreak.png",
        "Lucky Break activates any time you are injured. While Lucky Break is active, you won't leave trails of blood or scratch marks for a total of 60 seconds.\n"
        "While healthy, for each 1 second spent healing another Survivor, increase Lucky Break's duration by 1 second. Lucky Break's duration cannot increase beyond its starting value.",
        "Coup de chance s’active quand vous êtes blessé. Tant que Coup de chance est actif, vous ne laissez pas de traces de sang ni de marques d’éraflures pendant un total de 60 secondes.\n"
        "Quand vous êtes en bonne santé, pour chaque seconde passée à soigner un autre survivant, la durée de Coup de chance augmente de 1 seconde. La durée de Coup de chance ne peut dépasser sa valeur de départ.", NULL},

    {74, ZARINA, "For the People", "Pour le Peuple","assets/icons/perks/survivors/IconPerks_forThePeople.png",
        "For the People is only active while at full health.\n"
        "Press the Active Ability Button 1 while healing another Survivor without a Med-kit to instantly heal them from dying to injured, or from injured to healthy.\n"
        "You become injured and receive the Broken status effect for 60 seconds.\n"
        "You become the Obsession.\n"
        "Equipping this perk decreases your chances of being The Killer's Obsession at the start of the trial.",
        "Pour le peuple est uniquement actif quand votre santé est pleine.\n"
        "Appuyez sur le bouton de capacité active 1 lorsque vous soignez un autre survivant sans trousse de soins pour immédiatement le soigner de l’état critique à blessé, ou de blessé à en bonne santé.\n"
        "Vous vous retrouvez blessé et recevez l’effet de statut Brisé pendant 60 secondes.\n"
        "Vous devenez l’Obsession.\n"
        "Équiper cette compétence réduit vos chances de devenir l’obsession du tueur au début d’une partie.", NULL},

    {75, ZARINA, "Off the Record", "Confidentiel","assets/icons/perks/survivors/IconPerks_offTheRecord.png",
        "Once you are unhooked or escape from the hook, Off the Record activates for 40 seconds.\n"
        "While Off the Record is active:\n"
        "- Your aura will not be revealed to the Killer.\n"
        "- Grunts of pain caused by injuries are reduced by 100%.\n"
        "- You leave no scratch marks while sprinting.",
        "Quand on vous libère d’un crochet ou que vous vous en échappez, Confidentiel s’active pendant 40 secondes. Cette compétence et ses effets sont désactivés dès que les portes de sortie sont alimentées.\n"
        "Tant que Confidentiel est activé :\n"
        "- Votre aura n'est pas révélée au tueur.\n"
        "- Les grognements de douleur provoqués par les blessures sont réduits de 100 %.\n"
        "- Vous ne laissez aucune marque d'éraflure en courant.", NULL},

    {76, ZARINA, "Red Herring", "Leurre","assets/icons/perks/survivors/IconPerks_redHerring.png",
        "After repairing a generator for at least 1 seconds, it will be highlighted to you with a yellow aura. The generator stays highlighted until it is fully repaired, you repair a new generator, or enter a locker.\n"
        "Entering any locker will trigger a loud noise indicator for The Killer at the highlighted generator's location.\n"
        "Red Herring can only be triggered once every 15 seconds.",
        "Après avoir réparé un générateur pendant au moins 1 secondes, il sera entouré d’une aura jaune que personne d’autre que vous ne pourra voir. Le générateur reste signalé jusqu’à ce que vous le répariez complètement, que vous répariez un autre générateur, ou que vous entriez dans un casier.\n"
        "Entrer dans un casier déclenche un fort signal sonore du générateur que seul le tueur peut voir.\n"
        "Leurre ne peut être activé qu’une fois toutes les 15 secondes.", NULL},

    {77, CHERYL, "Blood Pact", "Pacte de Sang","assets/icons/perks/survivors/IconPerks_bloodPact.png",
        "When you or the Obsession are injured, you both see each other's auras.\n"
        "After completing a healing action on the Obsession, or having the Obsession complete a healing action on you, you both gain a 7% Haste status effect until no longer within 16 meters of each other.\n"
        "Reduces the odds of being the Obsession.\n"
        "If you are the Obsession, this perk deactivates.",
        "Lorsque l’obsession ou vous-même êtes blessés, vous voyez vos auras respectives.\n"
        "Après avoir terminé une action de soin sur l’obsession, ou quand celle-ci termine une action de soin sur vous, vous gagnez tous les deux un effet de statut Rapidité de 7 % jusqu'à ce que vous soyez à plus de 16 mètres l'un de l'autre.\n"
        "Réduit les probabilités de devenir l’obsession.\n"
        "Si vous êtes l’obsession, cette compétence se désactive.", NULL},

    {78, CHERYL, "Repressed Alliance", "Alliance Refoulée","assets/icons/perks/survivors/IconPerks_repressedAlliance.png",
        "Repressed Alliance activates after repairing generators for a total of 45 seconds.\n"
        "When repairing a generator while the perk is active, press the Active Ability Button 1 to call upon The Entity to block the generator for 30 seconds. The perk deactivates.\n"
        "This interaction is not available if other Survivors are repairing the generator.\n"
        "Affected generators will be revealed by a white aura to all Survivors.",
        "Alliance refoulée s’active après avoir réparé des générateurs pendant un total de 45 secondes.\n"
        "Quand vous réparez un générateur avec la compétence active, appuyez sur le bouton de capacité active 1 pour faire appel à l’Entité afin de bloquer le générateur pendant 30 secondes. La compétence se désactive.\n"
        "Cette interaction n'est pas disponible si d'autres survivants réparent le générateur.\n"
        "Les générateurs affectés sont indiqués par une aura blanche à tous les survivants.", NULL},

    {79, CHERYL, "Soul Guard", "Protection de l'Âme","assets/icons/perks/survivors/IconPerks_soulGuard.png",
        "Gain the Endurance status effect for 8 seconds after being healed or having recovered from the dying state.\n"
        "While cursed by a Hex, you can fully recover from the dying state.\n"
        "This effect can only trigger once every 30 seconds.",
        "Gagnez l’effet de statut Endurance pendant 8 secondes après avoir reçu des soins ou après avoir récupéré de l’état critique.\n"
        "En étant sous l'effet d'un sort, vous pouvez récupérer entièrement de l'état critique.\n"
        "Cet effet peut uniquement être déclenché toutes les 30 secondes.", NULL},

    {80, FELIX, "Built to Last", "Conçu pour Durer","assets/icons/perks/survivors/IconPerks_builtToLast.png",
        "After hiding inside a locker for 10 seconds with a depleted item in hand, 99% of its charges are refilled.\n"
        "Each use of Built to Last reduces the amounts of charges refilled by 33%.",
        "En vous cachant dans un casier pendant 10 secondes avec un objet déchargé en main, celui-ci récupèrera 99 % de ses charges.\n"
        "Chaque utilisation de Conçu pour durer réduit de 33 % la quantité de charges récupérées.", NULL},

    {81, FELIX, "Desperate Measures", "Mesures Désespérées","assets/icons/perks/survivors/IconPerks_desperateMeasures.png",
        "For each injured, hooked, or dying Survivor, increase the speed of your healing and unhook actions by 20%.",
        "Pour chaque survivant blessé, suspendu à un crochet ou en état critique, la vitesse de vos soins et de vos décrochages augmente de 20 %.", NULL},

    {82, FELIX, "Visionary", "Visionnaire","assets/icons/perks/survivors/IconPerks_visionary.png",
        "You see generator's auras within 32 meters.\n"
        "Anytime a generator is completed, Visionary is disabled for 16 seconds.",
        "Vous voyez l’aura des générateurs dans un rayon de 32 mètres.\n"
        "Quand un générateur est réparé, Visionnaire est désactivé pendant 16 secondes.", NULL},

    {83, ELODIE, "Appraisal", "Estimation","assets/icons/perks/survivors/IconPerks_appraisal.png",
        "Start the trial with 4 tokens. When a chest has already been opened, consume a token to rummage through it for an item. Rummaging can only be performed twice per chest.\n"
        "You rummage through chests 80% faster.",
        "Commencez la partie avec 4 jetons. Quand un coffre a déjà été ouvert, consommez un jeton pour le fouiller à la recherche d’un objet. Vous ne pouvez fouiller chaque coffre que deux fois.\n"
        "Votre fouille des coffres est 80 % plus rapide.", NULL},

    {84, ELODIE, "Deception", "Supercherie","assets/icons/perks/survivors/IconPerks_deception.png",
        "Interacting with a locker while sprinting will trigger a loud noise notification at your location and cause you to leave no scratch marks for 5 seconds.\n"
        "You no longer enter lockers while sprinting and while this perk is active.\n"
        "Deception can only be triggered once every 15 seconds.",
        "Interagir avec un casier tout en sprintant déclenchera une notification sonore à votre position et vous permettra de ne pas laisser de marques d’éraflures pendant 5 secondes.\n"
        "Vous ne pouvez plus entrer dans les casiers lorsque vous sprintez et tant que cette compétence est active.\n"
        "Supercherie peut uniquement être déclenché une fois toutes les 15 secondes.", NULL},

    {85, ELODIE, "Power Struggle", "Bras de Fer","assets/icons/perks/survivors/IconPerks_powerStruggle.png",
        "Whenever you are in the dying state, you see the auras of available Pallets.\n"
        "While being carried by The Killer, reaching 15% wiggle progress activates Power Struggle. While Power Struggle is active, you can drop a nearby, standing pallet to stun The Killer.",
        "Quand vous êtes en état critique, vous voyez l’aura des palettes disponibles.\n"
        "Quand le tueur vous transporte, débattez-vous jusqu’à 15 % de la barre de progression pour activer Bras de fer. Tant que Bras de fer est activé, vous pouvez faire tomber une palette debout à proximité pour étourdir le tueur.", NULL},

    {86, YUN_JIN, "Fast Track", "Voie Rapide","assets/icons/perks/survivors/IconPerks_fastTrack.png",
        "Whenever another Survivor is hooked, you gain 3 tokens. You consume all tokens after a great Skill Check on a generator. Each token consumed grants a 1% bonus progression for great Skill Checks when repairing generators.",
        "Chaque fois qu’un survivant est suspendu à un crochet, vous gagnez 3 jeton(s).Vous consommez tous vos jetons après un excellent test d’habileté sur un générateur. Chaque jeton consommé accorde 1 % de progression bonus pour les tests d’habileté excellents lors de la réparation de générateurs.", NULL},

    {87, YUN_JIN, "Self-Preservation", "Instinct de Survie","assets/icons/perks/survivors/IconPerks_self-Preservation.png",
        "Whenever another Survivor within 16 meters of you gets hit by a basic attack or a special attack, Self-Preservation activates.\n"
        "Your scratch marks, pools of blood and grunts of pain are hidden for 10 seconds.",
        "Chaque fois qu’un autre survivant à 16 mètres de vous est frappé par une attaque de base ou une attaque spéciale, Instinct de survie s’active.\n"
        "Vos marques d’éraflures, vos flaques de sang et vos gémissements de douleur sont dissimulés pendant 10 secondes.", NULL},

    {88, YUN_JIN, "Smash Hit", "Succès Écrasant","assets/icons/perks/survivors/IconPerks_smashHit.png",
        "After stunning the Killer with a pallet, gain 50% Haste for 4 seconds.\n"
        "Causes the Exhausted status effect for 20 seconds.\n"
        "This perk cannot be used while Exhausted.",
        "Après avoir étourdi le tueur avec une palette, vous gagnez 50 % de Rapidité pendant 4 secondes.\n"
        "Provoque l’effet de statut Épuisement pendant 20 secondes.\n"
        "Cette compétence ne peut être utilisée pendant Épuisement.", NULL},

    {89, JILL, "Blast Mine", "Mine Explosive","assets/icons/perks/survivors/IconPerks_blastMine.png",
        "Blast Mine activates after completing a total of 40% worth of repair progress on generators.\n"
        "When standing next to a generator, press the Active Ability Button 2 to install a Blast Mine which stays active for 120 seconds.\n"
        "Affected generators will be revealed to all Survivors by a yellow aura. Only one Blast Mine can be active on a generator.\n"
        "When the Killer damages the generator, the Blast Mine explodes, stunning them and blinding anyone nearby.\n"
        "Blast Mine deactivates when the generator is damaged by the Killer or when the timer expires.",
        "Mine explosive s’active après avoir terminé un total de 40 % de progression de réparation des générateurs.\n"
        "Lorsque vous êtes près d'un générateur, appuyez sur le bouton de capacité active 2 pour installer une mine explosive qui reste active pendant 120 secondes.\n"
        "L'aura des générateurs affectés est révélée en jaune à tous les survivants. Une seule mine explosive peut être active sur un générateur.\n"
        "Lorsque le tueur frappe le générateur piégé, la mine explosive explose, l'étourdissant et aveuglant quiconque se trouve à proximité.\n"
        "Mine explosive se désactive quand le générateur est endommagé par le tueur ou à la fin du compte à rebours.", NULL},

    {90, JILL, "Counterforce", "Contre-Force","assets/icons/perks/survivors/IconPerks_counterforce.png",
        "You cleanse Totems 25% faster. After cleansing a Totem, you see the aura of the furthest Totem from you for 14 seconds and you gain an additional 25% stackable speed bonus to cleansing Totems for the remainder of the trial.",
        "Vous purifiez les totems 25 % plus vite. Après avoir purifié un totem, vous voyez l’aura du totem le plus éloigné de vous pendant 14 secondes et vous gagnez un bonus de vitesse cumulable supplémentaire de 25 % pour purifier des totems pour le restant de l'épreuve.", NULL},

    {91, JILL, "Resurgence", "Renaissance","assets/icons/perks/survivors/IconPerks_resurgence.png",
        "Gain 70% healing progress instantly after being unhooked or unhooking yourself.",
        "Obtenez une progression de soins de 70 % immédiatement après avoir été libéré d’un crochet ou vous être libéré vous-même.", NULL},

    {92, LEON, "Bite the Bullet", "Serrer les Dents","assets/icons/perks/survivors/IconPerks_biteTheBullet.png",
        "When healing, you and the Survivor you're healing make no noise, including grunts of pain. There is no noise notification on failed healing Skill Checks and healing regresses by only 1%.",
        "Pendant les soins, ni vous, ni le survivant que vous soignez ne faites de bruit, pas même de grognements de douleur. Il n’y a pas de notification sonore lors de tests d’habileté de soins ratés et la guérison recule uniquement de 1 %.", NULL},

    {93, LEON, "Flashbang", "Grenade Aveuglante","assets/icons/perks/survivors/IconPerks_flashbang.png",
        "After completing 40% progress on any generator, Flashbang activates.\n"
        "Enter a locker and press the Active Ability Button 1 to craft a flash grenade.\n"
        "- 1 charge.\n"
        "- Detonates with a loud bang and flashing light.\n"
        "- Creates a noise notification.\n"
        "- Can be used to distract or blind.\n"
        "You leave the flash grenade behind when escaping the trial.",
        "Après avoir atteint 40 % de progression sur un générateur, Grenade aveuglante s’active.\n"
        "Entrez dans un casier et appuyez sur le bouton de capacité active 1 pour fabriquer une grenade aveuglante.\n"
        "- 1 charge.\n"
        "- Explose avec fracas dans une lueur aveuglante.\n"
        "- Génère une notification sonore.\n"
        "- Peut servir à distraire ou à aveugler.\n"
        "Vous abandonnez la grenade aveuglante derrière vous lorsque vous vous échappez de la partie.", NULL},

    {94, LEON, "Rookie Spirit", "Détermination du Bleu","assets/icons/perks/survivors/IconPerks_rookieSpirit.png",
        "Complete 3 good or great Skill Checks while repairing generators to activate Rookie Spirit for the remainder of the trial.\n"
        "Once active, you can see the aura of regressing generators.",
        "Terminez 3 tests d’habileté bons ou excellents en réparant des générateurs pour activer Détermination du bleu pour le reste de la partie.\n"
        "Une fois actif, vous pouvez voir l’aura des générateurs en régression.", NULL},

    {95, MIKAELA, "Boon: Circle of Healing", "Bénédiction: Cercle de Soins","assets/icons/perks/survivors/IconPerks_boonCircleOfHealing.png",
        "Press and hold the Ability button 1 near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range gain a 100% healing speed bonus to healing others. Med-kits give no bonus to healing in the Boon Totem's range. Injured Survivors have their auras revealed to all other Survivors when inside the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        "Maintenez le bouton de capacité 1 près d’un totem passif ou ensorcelé pour le bénir et créer un totem de bénédiction. De doux tintements résonnent dans un rayon de 24 mètres.\n"
        "Tout survivant à portée du totem de bénédiction gagne 100 % de bonus à la vitesse de soins des autres. Les trousses de soins ne donnent aucun bonus à portée d'un totem de bénédiction. L'aura des survivants blessés est révélée à tous les autres survivants lorsqu'ils sont à portée du totem de bénédiction.\n"
        "Vous ne pouvez bénir qu’un totem à la fois. Toutes les compétences de bénédiction équipées sont actives sur votre totem de bénédiction.", NULL},

    {96, MIKAELA, "Boon: Shadow Step", "Bénédiction: Marche de l'Ombre","assets/icons/perks/survivors/IconPerks_boonShadowStep.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range will have their scratch marks and auras hidden to the Killer. This effect lingers for 4 seconds after leaving the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        "Appuyez et maintenez le bouton de capacité près d’un totem passif ou ensorcelé pour le bénir et créer un totem de bénédiction. De doux tintements résonnent dans un rayon de 24 mètre(s).\n"
        "Tout survivant à portée du totem de bénédiction voit ses marques d’éraflures et son aura dissimulées au regard du tueur. Cet effet persiste pendant 4 secondes après avoir quitté le rayon d’action du totem de bénédiction.\n"
        "Vous ne pouvez bénir qu’un totem à la fois. Toutes les compétences de bénédiction équipées sont actives sur votre totem de bénédiction.", NULL},

    {97, MIKAELA, "Clairvoyance", "Clairvoyance","assets/icons/perks/survivors/IconPerks_clairvoyance.png",
        "Clairvoyance activates whenever you cleanse or bless a Totem.\n"
        "When empty-handed, hold the Use Item Button to unlock your full aura-reading potential. For up to 12 seconds, you see the auras of exit gate switches, generators, hooks, chests and the Hatch within a 64 meter range.",
        "Clairvoyance s’active chaque fois que vous purifiez ou bénissez un totem.\n"
        "Quand vos mains sont vides, maintenez le bouton de capacité 2 pour débloquer tout votre potentiel de révélation d’aura. Pendant un maximum de 12 secondes, vous voyez les auras des interrupteurs des portes de sortie, des générateurs, des crochets, des coffres et de la trappe dans un rayon de 64 mètres.", NULL},

    {98, JONAH, "Boon: Exponential", "Bénédiction: Exponentiel","assets/icons/perks/survivors/IconPerks_boonExponential.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "All Survivors within the Boon Totem's range recover 90/95/100% faster and can completely recover from the dying state.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        "Appuyez et maintenez le bouton Capacité près d’un totem passif ou ensorcelé pour le bénir et créer un totem de bénédiction. De doux tintements résonnent dans un rayon de 24 mètre(s).\n"
        "Tout survivant à portée du totem de bénédiction récupère de l'état critique 100 % plus vite et peut récupérer complètement de l'état critique.\n"
        "Vous ne pouvez bénir qu’un totem à la fois. Toutes les compétences de bénédiction équipées sont actives sur votre totem de bénédiction.", NULL},

    {99, JONAH, "Corrective Action", "Mesure de Correction","assets/icons/perks/survivors/IconPerks_correctiveAction.png",
        "You start the trial with 3 token(s) and gain a token, up to a maximum of 5, for every great Skill Check.\n"
        "When another Survivor fails a Normal Skill Check, 1 token is consumed and their failed Skill Check becomes a good Skill Check. Additionally, their aura is revealed to you for 6 seconds.",
        "Vous commencez l'épreuve avec 3 jeton(s) et vous gagnez un jeton, jusqu’à 5 au maximum, pour chaque test d’habileté excellent.\n"
        "Quand un autre survivant rate un test d’habileté normal, 1 jeton est consumé et ce test d’habileté échoué devient un bon test d’habileté. De plus, son aura vous est révélée pendant 6 secondes.", NULL},

    {100, JONAH, "Overcome", "Surmonter","assets/icons/perks/survivors/IconPerks_overcome.png",
        "When you are injured, you retain the movement speed bonus for 2 seconds longer.\n"
        "Overcome causes the Exhausted status effect for 40 seconds.\n"
        "Overcome cannot be used when Exhausted.",
        "Quand vous subissez une blessure, vous conservez le bonus de vitesse de mouvement pendant 2 secondes supplémentaires.\n"
        "Surmonter inflige l'effet de statut Épuisement pendant 40 secondes.\n"
        "Surmonter ne peut être utilisé en état d'Épuisement.", NULL},

    {101, YOICHI, "Boon: Dark Theory", "Bénédiction: Théorie Ténébreuse","assets/icons/perks/survivors/IconPerks_boonDarkTheory.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range gain 3% Haste. This effect lingers for 4 seconds after leaving the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        "Maintenez enfoncé le bouton de capacité près d'un totem passif ou d'un totem ensorcelé pour le bénir et créer un totem de bénédiction. Un doux carillon tinte dans un rayon de 24 mètres.\n"
        "Tout survivant dans le rayon du totem de bénédiction gagne 3 % de rapidité. Cet effet perdure 4 secondes après avoir quitté le rayon d'action du totem de bénédiction.\n"
        "Vous ne pouvez bénir qu'un seul totem à la fois. Toutes les compétences de bénédiction équipées sont actives sur votre totem de bénédiction.", NULL},

    {102, YOICHI, "Empathic Connection", "Connexion Empathique","assets/icons/perks/survivors/IconPerks_empathicConnection.png",
        "Whenever another Survivor is injured, they can see your aura.\n"
        "You heal other Survivors 35% faster.",
        "Dès qu'un autre survivant est blessé, il peut voir votre aura.\n"
        "Vous soignez les autres survivants 35 % plus vite.", NULL},

    {103, YOICHI, "Parental Guidance", "Conseils Parentaux","assets/icons/perks/survivors/IconPerks_parentalGuidance.png",
        "After stunning the Killer by any means, your scratch marks, pools of blood and grunts of pain are hidden for 7 seconds.",
        "Après avoir étourdi le tueur par n'importe quel moyen, vos marques d'éraflures, vos flaques de sang et vos gémissements de douleur sont dissimulés pendant 7 secondes.", NULL},

    {104, HADDIE, "Inner Focus", "Concentration Intérieure","assets/icons/perks/survivors/IconPerks_innerFocus.png",
        "You can see other Survivors' scratch marks.\n"
        "When the Killer causes another Survivor to lose a health state, the Killer's aura is revealed to you for 10 seconds.",
        "Vous pouvez voir les marques d'éraflures des autres survivants.\n"
        "Quand un autre survivant perd un état de santé à cause du tueur, l'aura du tueur vous est révélée pendant 10 secondes.", NULL},

    {105, HADDIE, "Overzealous", "Excès de Zèle","assets/icons/perks/survivors/IconPerks_overzealous.png",
        "After cleansing or blessing a Totem, this perk activates.\n"
        "Your generator repair speed is increased by 10%. This bonus is doubled if you cleanse or bless a Hex totem.\n"
        "This perk deactivates when you lose a health state by any means.",
        "Après avoir purifié n'importe quel totem, cette compétence s'active.\n"
        "Votre vitesse de réparation de générateur augmente de 10 %. Ce bonus est doublé si vous purifiez ou bénissez un totem ensorcelé.\n"
        "Cette compétence se désactive quand vous perdez un état de santé par n'importe quel moyen.", NULL},

    {106, HADDIE, "Residual Manifest", "Manifeste Résiduel","assets/icons/perks/survivors/IconPerks_residualManifest.png",
        "After a successful Killer Blind action, the Killer is affected by the Blindness status effect for 30 seconds.\n"
        "This perk grants the ability to rummage through an opened chest once per trial and will guarantee a basic Flashlight.",
        "Après avoir réussi à aveugler le tueur, le tueur subit l'effet de statut Aveuglement pendant 30 secondes.\n"
        "Cette compétence donne la faculté de fouiller un coffre ouvert une fois par partie et garantit d'y trouver une lampe de poche de base.", NULL},

    {107, ADA, "Low Profile", "Profil Bas","assets/icons/perks/survivors/IconPerks_lowProfile.png",
        "When you become the last Survivor standing, this perk activates. Hide your scratch marks, pools of blood and grunts of pain caused by injuries for 90 seconds.",
        "Lorsque vous êtes le dernier survivant debout, cette compétence s'active. Vous masquez vos marques d'éraflures, vos flaques de sang et vos gémissements de douleur causés par des blessures pendant 90 secondes.", NULL},

    {108, ADA, "Reactive Healing", "Guérison Réactive","assets/icons/perks/survivors/IconPerks_reactiveHealing.png",
        "When another Survivor loses a health state in a 32-meter radius around you while you are injured, instantly increase your healing progression by 50% of the missing healing progression.",
        "Lorsqu'un autre survivant perd un état de santé dans un rayon de 32 mètres autour de vous quand vous êtes blessé, votre progression de soins augmente instantanément de 50 % de la progression de soins manquante.", NULL},

    {109, ADA, "Wiretap", "Micro Caché","assets/icons/perks/survivors/IconPerks_wiretap.png",
        "Wiretap activates after completing a total of 40% worth of repair progress on generators.\n"
        "When standing next to a generator, press the Active Ability button 2 to install a Wiretap, which stays active for 120 seconds.\n"
        "Affected generators will be revealed to all Survivors by a yellow aura. Only one Wiretap can be active on a generator.\n"
        "- When the Killer enters within 14 meters of the generator, their aura is revealed to all Survivors.\n"
        "- Wiretap deactivates when the generator is damaged by the Killer or when the timer expires.",
        "Micro caché s'active après que vous avez réparé des générateurs pour un total de 40 % de progression.\n"
        "Lorsque vous êtes près d'un générateur, appuyez sur le bouton de capacité active 2 pour installer un micro caché, qui reste actif pendant 120 secondes.\n"
        "L'aura des générateurs affectés est révélée en jaune à tous les survivants. Il ne peut y avoir qu'un seul micro caché actif par générateur.\n"
        "- Lorsque le tueur se trouve à moins de 14 mètres du générateur, son aura est révélée à tous les survivants.\n"
        "- Micro caché se désactive lorsque le générateur est endommagé par le tueur ou à la fin du compte à rebours.", NULL},

    {110, REBECCA, "Better than New", "Mieux que Neuf","assets/icons/perks/survivors/IconPerks_betterThanNew.png",
        "Upon completing a healing action on another Survivor, the targeted Survivor gets a 16% speed boost to healing, opening chests, cleansing and blessing Totems.\n"
        "Survivors keep the bonus until they lose a health state.",
        "Lorsque vous complétez une action de soin sur un autre survivant, le survivant en question reçoit un bonus de vitesse de 16 % pour soigner, ouvrir les coffres, purifier et bénir les totems.\n"
        "Les survivants conservent le bonus jusqu'à ce qu'ils perdent un état de santé.", NULL},

    {111, REBECCA, "Hyperfocus", "Hyperconcentration","assets/icons/perks/survivors/IconPerks_hyperfocus.png",
        "After hitting a great Skill Check while repairing or healing, this perk gains 1 token, up to 6 tokens. Each token increases the chance of Skill Check trigger by 4%, the Skill Check cursor speed by 4% and the bonus progression for great Skill Checks by 30% of its base value.\n"
        "The perk loses all tokens in case of normal Skill Check successes, Skill Check fails, or if the action is stopped by any means.",
        "Après avoir réussi un test d'habileté excellent en réparant ou en soignant, cette compétence gagne 1 jeton, jusqu'à 6 jetons au maximum. Chaque jeton augmente la probabilité de déclenchement de tests d'habileté de 4 %, la vitesse du curseur de test d'habileté de 4 % et la progression bonus pour des test d'habileté excellents augmente de 30 % de sa valeur de base.\n"
        "La compétence perd tous les jetons dans le cas de tests d'habileté réussis normalement, échoués, ou si l'action est arrêtée par n'importe quel moyen.", NULL},

    {112, REBECCA, "Reassurance", "Réconfort","assets/icons/perks/survivors/IconPerks_reassurance.png",
        "When within a 6-meter radius around a hooked Survivor, use the Active Ability Button 2 to pause their struggle progression for 30 seconds.\n"
        "If they are on the struggle phase, it also pauses the Struggle Skill Checks.\n"
        "Reassurance can only be triggered once per survivor per hook instance.",
        "Lorsque vous êtes dans un rayon de 6 mètres d'un survivant suspendu à un crochet, utilisez le bouton 2 de capacité active pour interrompre sa progression de lutte pendant 30 secondes.\n"
        "Si le survivant est en phase de lutte, ceci interrompt aussi les tests d'habileté de lutte.\n"
        "Réconfort ne peut être déclenché qu'une fois par survivant par instance de crochet.", NULL},

    {113, VITTORIO, "Fogwise", "Débrouillard","assets/icons/perks/survivors/IconPerks_fogwise.png",
        "Hitting a great Skill Check while repairing a generator reveals the Killer's aura to you for 6 seconds.",
        "Réussir un test d'habileté excellent tout en réparant un générateur vous révèle l'aura du tueur pendant 6 secondes.", NULL},

    {114, VITTORIO, "Potential Energy", "Énergie Potentielle","assets/icons/perks/survivors/IconPerks_potentialEnergy.png",
        "While repairing, press the Active Ability Button 2 to gain tokens instead of repairing the generator, up to a maximum of 20 tokens.\n"
        "While you have at least 1 token, press the Active Ability Button 2 to consume all tokens and repair the generator for 1% per token spent.\n"
        "When you lose a health state, all tokens are lost.",
        "Pendant que vous réparez, appuyez sur le bouton de capacité active 2 pour gagner des jetons au lieu de réparer le générateur, jusqu'à 20 jetons au maximum.\n"
        "Tant que vous avez au moins 1 jeton, appuyez sur le bouton de capacité active 2 pour consommer tous les jetons et réparer le générateur de 1% par jeton dépensé.\n"
        "Lorsque vous perdez un état de santé, tous les jetons sont perdus.", NULL},

    {115, VITTORIO, "Quick Gambit", "Gambit Prompt","assets/icons/perks/survivors/IconPerks_quickGambit.png",
        "When you are chased by the Killer, see the aura of other Survivors. Any Survivor repairing a generator gains a 5% repair speed bonus.\n"
        "This perk goes on cooldown for 40 seconds when you lose a health state.",
        "Lorsque le tueur vous pourchasse, vous voyez les auras des autres survivants. Tout survivant réparant un générateur reçoit un bonus de 5 % de vitesse de réparation.\n"
        "Cette compétence passe en recharge pendant 40 secondes lorsque vous perdez un état de santé.", NULL},

    {116, THALITA, "Cut Loose", "Hors de Contrôle","assets/icons/perks/survivors/IconPerks_cutLoose.png",
        "After performing a rushed vault in a chase, this perk activates.\n"
        "While this perk is active, your rushed vaults are silent for up to 6 seconds and successfully performing a rushed vault during that time resets the timer.\n"
        "This perk goes on cooldown for 45 seconds.",
        "Après avoir effectué un saut en courant pendant une poursuite, cette compétence s’active.\n"
        "Tant que cette compétence est active, vos sauts en courant sont silencieux pendant 6 secondes et réussir un saut en courant dans ce créneau réinitialise le minuteur.\n"
        "Cette compétence se recharge pendant 45 secondes.", NULL},

    {117, THALITA, "Friendly Competition", "Compétition Amicale","assets/icons/perks/survivors/IconPerks_friendlyCompetition.png",
        "Whenever you finish repairing a generator with at least one other Survivor, this perk activates.\n"
        "You and other survivors who finished repairing the generator with you get 5% increased repair progress speed for 120 seconds.\n"
        "Survivors can only have one instance of this perk's ability active at once.",
        NULL, NULL},

    {118, THALITA, "Teamwork: Power of Two", "Travail d'Équipe: Pouvoir des Deux","assets/icons/perks/survivors/IconPerks_teamworkPowerOfTwo.png",
        "When you finish healing another Survivor, you both gain 5% Haste as long as you stay within 16 meters of each other.\n"
        "This effect lingers for 4 seconds when leaving the range.\n"
        "This effect does not stack.",
        "Dès que vous finissez de réparer un générateur, cette compétence s'active.\n"
        "Vous, ainsi que les autres survivants qui ont terminé de réparer le générateur avec vous, recevez 5 % d'augmentation à la vitesse de progression de réparation pendant 120 secondes.\n"
        "Les survivants ne peuvent avoir qu'une seule instance de la faculté de cette compétence à la fois.", NULL},

    {119, RENATO, "Background Player", "Joueur Arrière","assets/icons/perks/survivors/IconPerks_backgroundPlayer.png",
        "When the Killer picks up another Survivor, Background Player activates for 10 seconds.\n"
        "When you start running, you gain 50% Haste for 5 seconds.\n"
        "This perk cannot be used while Exhausted.\n"
        "This perk causes the Exhausted status effect for 20 seconds.",
        "Lorsque le tueur ramasse un autre survivant, Joueur arrière s'active pendant 10 secondes.\n"
        "Lorsque vous commencez à courir, vous gagnez 50 % de Rapidité pendant 5 secondes.\n"
        "Cette compétence ne peut pas être utilisée en état d'Épuisement.\n"
        "Cette compétence provoque l'effet de statut Épuisement pendant 20 secondes.", NULL},

    {120, RENATO, "Blood Rush", "Coup de Collier","assets/icons/perks/survivors/IconPerks_bloodRush.png",
        "After being unhooked, Blood Rush activates for the next 60 seconds.\n"
        "While suffering from the Exhausted status effect, press the Active Ability Button 1 to recover from Exhausted instantly.\n"
        "This perk deactivates when it is used or when performing a Conspicuous Action.\n"
        "Blood Rush is disabled once the Exit Gates are powered.",
        "Après avoir été décroché, Coup de collier s'active pendant les 60 secondes qui suivent.\n"
        "Lorsque vous souffrez de l'effet de statut Épuisement, appuyez sur le bouton de capacité active 1 pour vous remettre instantanément d'Épuisement.\n"
        "Cette compétence se désactive lorsqu'elle est utilisée ou que vous effectuez une action perceptible.\n"
        "Coup de collier se désactive dès que les portes de sortie sont alimentées.", NULL},

    {121, RENATO, "Teamwork: Collective Stealth", "Travail d'Équipe: Discrétion Collective","assets/icons/perks/survivors/IconPerks_teamworkCollectiveStealth.png",
        "When another Survivor finishes healing you, you both leave no scratch marks as long as you stay within 16 meters of each other.\n"
        "This effect lingers for 4 seconds when leaving the range.\n"
        "This effect does not stack.",
        "Chaque fois qu'un autre survivant achève de vous soigner, vous ne laissez plus de marques d'égratignure ensemble tant que vous restez à moins de 16 mètres l'un de l'autre.\n"
        "Cet effet perdure 4 secondes lorsque vous quittez le rayon d'action.\n"
        "Cet effet ne se cumule pas.", NULL},

    {122, GABRIEL, "Made for This", "Fait Pour Ça","assets/icons/perks/survivors/IconPerks_madeForThis.png",
        "Made for This activates while you are in the injured state.\n"
        "- After you finish healing another Survivor, gain the Endurance status effect for 10 seconds.\n"
        "- While affected by Deep Wound, you have 3% Haste.",
        "Fait pour ça s’active lorsque vous êtes en état Blessé.\n"
        "- Après avoir fini de soigner un autre survivant, vous gagnez l’effet de statut Endurance pendant 10 secondes.\n"
        "- Tant que Blessure profonde vous affecte, vous gagnez 3 % de Rapidité.", NULL},

    {123, GABRIEL, "Scavenger", "Récupérateur","assets/icons/perks/survivors/IconPerks_scavenger.png",
        "While you are holding an empty toolbox, Scavenger activates.\n"
        "Succeeding a great skill check while repairing gains 1 token, up to 4.\n"
        "When you reach maximum tokens, lose all tokens and automatically recharge your toolbox to full.\n"
        "Scavenger is disabled for the remainder of the Trial after recharging a toolbox.\n"
        "This perk grants the ability to rummage through an opened chest once per Trial and will guarantee a basic Toolbox.",
        "Lorsque vous tenez une boîte à outils vide, Récupérateur s'active.\n"
        "Réussir un test d'habileté excellent pendant les réparations vous rapporte 1 jeton, pour un maximum de 5.\n"
        "Lorsque vous atteignez le nombre maximal de jetons, perdez tous vos jetons et rechargez votre boîte à outils automatiquement et intégralement. Puis votre vitesse de réparation de générateur sera 50 % plus lente pendant 30 secondes.\n"
        "Cette compétence donne la faculté de fouiller dans un coffre ouvert une fois par Épreuve et garantit une boîte à outils de base.", NULL},

    {124, GABRIEL, "Troubleshooter", "Expert","assets/icons/perks/survivors/IconPerks_troubleshooter.png",
        "When you are chased by the Killer, Troubleshooter activates.\n"
        "- You see the aura of the Generator with the most progress.\n"
        "- You see the aura of the Killer for 4/5/6 seconds after dropping a Pallet.\n"
        "The effect lasts for 10 seconds after being in chase, then deactivates.",
        "Lorsque le tueur vous pourchasse, Expert s’active.\n"
        "- Vous voyez l’aura du générateur dont les réparations sont les plus avancées.\n"
        "- Vous voyez l’aura du tueur pendant 6 secondes après avoir fait tomber une palette.\n"
        "L’effet perdure 10 secondes après la fin d’une poursuite, puis se désactive.", NULL},

    {125, NICOLAS, "Dramaturgy", "Dramaturgie","assets/icons/perks/survivors/IconPerks_dramaturgy.png",
        "Dramaturgy activates while you are healthy.\n"
        "While running, press the active ability button 2 to run with knees high for 0.5 seconds and then gain 25% Haste for 2 seconds, followed by an unknown effect.\n"
        "- Become Exposed for 12 seconds\n"
        "- Gain 25% Haste for 2 seconds\n"
        "- Scream, but nothing happens\n"
        "- Gain a random rare item, with random add-ons, and drop any held item.\n"
        "The same effect cannot happen twice in a row.\n"
        "Dramaturgy causes Exhausted for 40 seconds. Can't be used while Exhausted.",
        "Dramaturgie s’active lorsque vous êtes en bonne santé.\n"
        "Pendant que vous courez, appuyez sur le bouton de capacité active 2 pour courir en levant les genoux pendant 0,5 seconde et ensuite gagner 25 % de Rapidité pendant 2 secondes, suivi d’un effet inconnu.\n"
        "- Vous vous retrouvez À découvert pendant 12 secondes\n"
        "- Vous gagnez 25 % de Rapidité pendant 2 secondes\n"
        "- Vous hurlez, mais rien ne se produit\n"
        "- Vous gagnez un objet rare aléatoire, avec des accessoires aléatoires, et vous lâchez tout objet que vous teniez.\n"
        "Le même effet ne peut se produire deux fois de suite.\n"
        "Dramaturgie provoque Épuisement pendant 40 secondes. Ne peut pas être utilisé en état d'Épuisement.", NULL},

    {126, NICOLAS, "Plot Twist", "Rebondissement","assets/icons/perks/survivors/IconPerks_plotTwist.png",
        "Plot Twist activates when you are injured.\n"
        "Press the ability button 2 while crouched and motionless to enter the dying state silently.\n"
        "When using Plot Twist to enter the dying state: you leave no blood pools and you make no noise and you can fully recover from the dying state at 25% increased speed.\n"
        "When you recover by yourself using Plot Twist, you are healed instantly and you gain 50% Haste for 4 seconds.\n"
        "This perk deactivates if you recover by yourself by any means.\n"
        "This perk re-activates when the exit gates are powered.",
        "Rebondissement s'active lorsque vous êtes en état Blessé.\n"
        "Appuyez sur le bouton de capacité 2 en position accroupie et immobile pour vous retrouver en état critique silencieusement.\n"
        "Lorsque vous utilisez Rebondissement pour entrer en état critique : vous ne laissez aucune flaque de sang et vous ne faites aucun bruit, et vous pouvez récupérer complètement de l'état critique à 25 % de vitesse accrue.\n"
        "Lorsque vous récupérez par vous-même avec Rebondissement, vous redevenez valide instantanément et vous gagnez 50 % de Rapidité pendant 4 secondes.\n"
        "Cette compétence se désactive si vous récupérez par vous-même par n'importe quel moyen.\n"
        "Cette compétence se réactive lorsque les portes de sortie sont alimentées.", NULL},

    {127, NICOLAS, "Scene Partner", "Partenaire de Scène","assets/icons/perks/survivors/IconPerks_scenePartner.png",
        "Scene Partner activates when you are in the Killer's Terror Radius.\n"
        "Whenever you look at the Killer, scream, then see the Killer's aura for 6 seconds.\n"
        "There is a chance you will scream again, if you do, you will see the Killer's aura for an additional 2 seconds.\n"
        "Scene Partner then goes on cooldown for 40 seconds.",
        "Partenaire de scène s’active lorsque vous êtes dans le rayon de terreur du tueur.\n"
        "Lorsque vous regardez le tueur, vous hurlez puis vous voyez l’aura du tueur pendant 6 secondes.\n"
        "Il y a une probabilité que vous hurliez encore, et si tel est le cas, vous verrez l’aura du tueur pendant 2 secondes de plus.\n"
        "Partenaire de scène passe alors en recharge pendant 40 secondes.", NULL},

    {128, ELLEN, "Chemical Trap", "Piège Chimique","assets/icons/perks/survivors/IconPerks_chemicalTrap.png",
        "Chemical Trap activates after completing a total of 20% worth of progress on generators.\n"
        "While standing next to a dropped pallet, press the Active Ability Button 2 to install a Trap, which stays active for 60 seconds.\n"
        "Affected pallets will be revealed to all Survivors by a yellow aura. Only one Chemical Trap can be active on a pallet.\n"
        "When the Killer performs the break action on the pallet, the Chemical Trap explodes, and they gain 50% Hindered for 4 seconds.",
        "Piège chimique s'active après avoir complété un total de 20 % de progression sur les générateurs.\n"
        "En vous tenant près d'une palette renversée, appuyez sur le bouton de capacité active 2 pour installer un piège qui reste actif pendant 60 secondes.\n"
        "L'aura des palettes affectées est révélée en jaune à tous les survivants. Il ne peut y avoir qu'un seul Piège chimique actif par palette.\n"
        "Lorsque le tueur effectue l'action Détruire sur la palette piégée, le Piège chimique explose et le tueur reçoit 50 % d'Entrave pendant 4 secondes.", NULL},

    {129, ELLEN, "Light-Footed", "À Pas de Chat","assets/icons/perks/survivors/IconPerks_light-Footed.png",
        "When you are healthy, this perk activates.\n"
        "Your running footsteps are silent.\n"
        "This perk goes on cooldown for 10 seconds after performing a rushed action.",
        "Lorsque vous êtes en bonne santé, cette compétence s'active.\n"
        "Vos bruits de pas de course sont silencieux.\n"
        "Le temps de recharge de cette compétence dure 10 secondes après avoir effectué une action précipitée.", NULL},

    {130, ELLEN, "Lucky Star", "Bonne Étoile","assets/icons/perks/survivors/IconPerks_luckyStar.png",
        "When you hide in a locker, you make no grunts of pain.\n"
        "After exiting the locker, you see the aura of the closest generator and all Survivors, leave no pools of blood and make no grunts of pain for 30 seconds.\n"
        "This perk goes on cooldown for 25 seconds.",
        "Lorsque vous vous cachez dans un casier, vous ne poussez aucun gémissement de douleur.\n"
        "Lorsque vous sortez du casier, vous voyez l'aura du générateur le plus proche et de tous les survivants, vous ne laissez aucune flaque de sang et ne poussez aucun gémissement de douleur pendant 30 secondes.\n"
        "Cette compétence se recharge pendant 25 secondes.", NULL},

    {131, ALAN, "Boon: Illumination", "Bénédiction: Illumination","assets/icons/perks/survivors/IconPerks_boonIllumination.png",
        "Press and hold the Ability button 1 near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Survivors inside your Boon Totem's range see the aura of all chests and all generators in blue.\n"
        "If you have a lit Boon Totem, you cleanse or bless Totems 10% faster.\n"
        "You can only bless one Totem at a time. All equipped Boon perks are active on your Boon Totem.",
        "Appuyez et maintenez le bouton de capacité 1 près d’un totem passif ou ensorcelé pour le bénir et créer un totem de bénédiction. Un doux tintement est audible dans un rayon de 24 mètres.\n"
        "Les survivants à l’intérieur du rayon de votre totem de bénédiction voient l’aura de tous les coffres et de tous les générateurs en bleu.\n"
        "Si vous avez un totem de bénédiction allumé, vous purifiez ou bénissez les totems 10 % plus vite.\n"
        "Vous ne pouvez bénir qu’un seul totem à la fois. Toutes les compétences Bénédiction équipées sont actives sur votre totem de bénédiction.", NULL},

    {132, ALAN, "Champion of Light", "Champion de la Lumière","assets/icons/perks/survivors/IconPerks_championOfLight.png",
        "When you are shining a Flashlight, you gain 50% Haste.\n"
        "When you successfully blind the Killer, they also gain 20% Hindered for 6 seconds.\n"
        "Then, this perk goes on cooldown for 40 seconds.",
        "Lorsque vous faites briller une lampe de poche, vous gagnez 50 % de Rapidité.\n"
        "Lorsque vous réussissez à aveugler le tueur, il subit aussi 20 % d’Entrave pendant 6 secondes.\n"
        "Puis cette compétence se recharge pendant 40 secondes.", NULL},

    {133, ALAN, "Deadline", "Échéance","assets/icons/perks/survivors/IconPerks_deadline.png",
        "This perk activates when you are injured.\n"
        "Skill Checks appear 10% more frequently when repairing or healing and appear in random places.\n"
        "The penalty for missing skill checks is reduced by 50%.",
        "Cette compétence s'active lorsque vous vous retrouvez en état Blessé.\n"
        "Des tests d'habileté apparaissent 10 % plus souvent pendant les réparations ou les soins et apparaissent dans des emplacements aléatoires.\n"
        "La pénalité des tests d'habileté ratés est réduite de 50 %.", NULL},

    {134, SABLE, "Invocation: Weaving Spiders", "Invocation: Araignées Tisseuses","assets/icons/perks/survivors/IconPerks_invocationWeavingSpiders.png",
        "When in the basement near the circle, press the Ability Button 1 to begin the Invocation.\n"
        "Invocations take 60 seconds. Other Survivors will see your aura during this and can join an ongoing interaction.\n"
        "Once the Invocation is completed:\n"
        "- You become Injured and gain the Broken status effect for the rest of the trial.\n"
        "- Reduce the maximum required generator charges of all remaining generators by 10.\n"
        "Completing the Invocation disables that perk for all Survivors.",
        "Lorsque vous êtes près du cercle dans la cave, appuyez sur le bouton de capacité 1 pour commencer l’invocation.\n"
        "Les invocations prennent 60 secondes. Les autres survivants verront votre aura pendant l'invocation et peuvent se joindre à une interaction en cours.\n"
        "Une fois l’invocation terminée :\n"
        "- Vous vous retrouvez en état Blessé et vous gagnez l'effet de statut Brisé pour le restant de l'épreuve.\n"
        "- Réduit le maximum de charges requises de tous les générateurs restants de 10 charges.\n"
        "Terminer l’invocation désactive cette compétence pour tous les survivants.", NULL},

    {135, SABLE, "Strength in Shadows", "L'Ombre Fait la Force","assets/icons/perks/survivors/IconPerks_strengthInShadows.png",
        "When in the basement, this perk activates.\n"
        "Unlocks the Strength in Shadows ability, which allows you to heal without a Med-kit at 70% normal healing speed.\n"
        "When you finish a heal in the basement, you see the Killer's aura for 10 seconds.",
        "Cette compétence s’active lorsque vous êtes au sous-sol.\n"
        "Débloque la capacité L'ombre fait la force, qui vous permet de vous soigner sans trousse de soins à 70 % de la vitesse de soins normale.\n"
        "Lorsque vous terminez une guérison au sous-sol, vous voyez l’aura du tueur pendant 10 secondes.", NULL},

    {136, SABLE, "Wicked", "Malice","assets/icons/perks/survivors/IconPerks_wicked.png",
        "Your self-unhook attempts in the basement always succeed.\n"
        "When you are unhooked or unhook yourself, you see the Killer's aura for 20 seconds.",
        "Vos tentatives pour vous décrocher vous-même dans la cave réussissent toujours.\n"
        "Lorsque vous vous décrochez vous-même ou qu'on vous décroche, vous voyez l'aura du tueur pendant 20 secondes.", NULL},

    {137, AESTRI, "Bardic Inspiration", "Inspiration Bardique","assets/icons/perks/survivors/IconPerks_bardicInspiration.png",
        "Press and hold the Ability button 1 while standing and motionless to enter the performance interaction that lasts up to 15 seconds and empowers Survivors within 16 meters. Roll a d20. This effect lasts for 90 seconds if the performance is completed.\n"
        "- 1 | You scream, but nothing happens\n"
        "- 2-10 | Skill Checks give +1% progress\n"
        "- 11-19 | Skill Checks give +2% progress\n"
        "- 20 | Skill Checks give +3% progress\n"
        "When the ability is canceled or the performance completes, it goes on cooldown for 90 seconds.",
        "Maintenez le bouton de capacité 1 pendant que vous êtes debout et immobile pour commencer l'interaction du numéro qui dure jusqu'à 15 secondes et renforce les survivants dans un rayon de 16 mètres. Lancez un dé 20. Cet effet perdure 90 secondes après la fin du numéro.\n"
        "- 1 | vous hurlez, mais rien ne se produit\n"
        "- 2-10 | les tests d'habileté donnent +1 % de progression\n"
        "- 11-19 | les tests d'habileté donnent +2 % de progression\n"
        "- 20 | les tests d'habileté donnent +3 % de progression\n"
        "Lorsqu'un test d'habileté est raté ou que le numéro est terminé, la compétence se recharge pendant 90 secondes.", NULL},

    {138, AESTRI, "Mirrored Illusion", "Illusion du Miroir","assets/icons/perks/survivors/IconPerks_mirroredIllusion.png",
        "This perk activates after completing a total of 20% worth of repairs on generators.\n"
        "Press the Ability button 2 when next to a generator, totem, chest or exit gate to spawn a static illusion that lasts for 60 seconds.\n"
        "Then, the perk deactivates.",
        "Cette compétence s'active quand vous effectuez 20 % de réparations de générateurs.\n"
        "Appuyez sur le bouton de capacité 2 près d'un générateur, un totem, un coffre ou une porte de sortie pour générer une illusion statique qui dure 60 secondes.\n"
        "Puis la compétence se désactive.", NULL},

    {139, AESTRI, "Still Sight", "Vision Immobile","assets/icons/perks/survivors/IconPerks_stillSight.png",
        "After not moving for 2 seconds, this perk activates.\n"
        "Until you start moving, you see the aura of the Killer as well as all generators and chests within 24 meters.",
        "Lorsque vous restez immobile pendant 2 secondes, cette compétence s'active.\n"
        "Tant que vous ne bougez pas, vous voyez l'aura du tueur ainsi que celle de tous les générateurs et des coffres dans un rayon de 24 mètres.", NULL},

    {140, LARA, "Finesse", "Finesse","assets/icons/perks/survivors/IconPerks_finesse.png",
        "This perk activates when you are healthy.\n"
        "Your fast vaults are 20% faster.\n"
        "This perk goes on cooldown for 30 seconds after performing a fast vault.",
        "Cette compétence s'active lorsque vous êtes en bonne santé.\n"
        "Vos sauts en courant sont 20 % plus rapides.\n"
        "Cette compétence se recharge pendant 30 secondes après avoir effectué un saut en courant.", NULL},

    {141, LARA, "Hardened", "Endurcie","assets/icons/perks/survivors/IconPerks_hardened.png",
        "This perk activates after you complete all of the following:\n"
        "- Unlock a chest\n"
        "- Cleanse or bless a totem.\n"
        "For the rest of the trial, anytime you would scream, reveal the Killer's aura for 5 seconds instead.",
        "Cette compétence s'active lorsque vous complétez tout ce qui suit :\n"
        "- Déverrouiller un coffre,\n"
        "- Purifier ou bénir un totem.\n"
        "Pour le reste de la partie, chaque fois que vous devriez hurler, l'aura du tueur vous sera dévoilée pendant 5 secondes à la place.", NULL},

    {142, LARA, "Specialist", "Spécialiste","assets/icons/perks/survivors/IconPerks_specialist.png",
        "Each time you open or rummage through a chest, gain 1 token, up to 6.\n"
        "When you perform a great Skill Check on a generator, consume all tokens. Then, for each token consumed, reduce the maximum required generator progress by 4.",
        "Chaque fois que vous ouvrez ou fouillez un coffre, vous gagnez 1 jeton, jusqu'à 6 au maximum.\n"
        "Lorsque vous effectuez un excellent test d'habileté sur un générateur, vous consommez tous les jetons. Puis, pour chaque jeton consommé, vous réduisez la progression maximale requise du générateur de 4.", NULL},

    {143, TREVOR, "Exultation", "Exultation","assets/icons/perks/survivors/IconPerks_Exultation.png",
        "Stunning the Killer with a pallet upgrades your held item rarity to the next tier, then recharges 75% of the item's maximum charges.\n"
        "This perk has a 20-second cooldown.",
        "Étourdir le tueur avec une palette améliore la rareté de l’objet que vous tenez au niveau suivant, puis recharge 75 % des charges maximales de l'objet.\n"
        "Cette compétence a un temps de recharge de 75 secondes.", NULL},

    {144, TREVOR, "Eyes of Belmont", "Yeux de Belmont","assets/icons/perks/survivors/IconPerks_EyesOfBelmont.png",
        "When a generator is completed, the aura of the Killer is revealed to you for 3 seconds.\n"
        "Whenever a Killer's aura is revealed for a specified amount of time, that time is increased by 2 seconds.",
        "Lorsqu’un générateur est complété, vous voyez l’aura du tueur pendant 3 secondes.\n"
        "Chaque fois que l’aura du tueur apparaît pendant une certaine durée, cette durée est augmentée de 2 secondes.", NULL},

    {145, TREVOR, "Moment of Glory", "Moment de Gloire","assets/icons/perks/survivors/IconPerks_MomentOfGlory.png",
        "This perk activates after you open or rummage through 2 chests.\n"
        "When you become injured, you also become Broken.\n"
        "Automatically heal 1 health state after 60 seconds. Then, this perk deactivates.\n"
        "This effect is canceled if you enter the dying state.\n"
        "This perk will not activate if you are already suffering from the Broken status effect.",
        "Cette compétence s’active après avoir ouvert ou fouillé 2 coffres.\n"
        "En état Blessé, vous subissez également l'état Brisé.\n"
        "Vous guérissez automatiquement 1 état de santé après 60 secondes. Ensuite, cette compétence se désactive.\n"
        "Cet effet est annulé si vous passez en état critique.\n"
        "Cette compétence ne s’activera pas si vous souffrez déjà de l’effet de statut Brisé.", NULL},

    {146, TAURIE, "Clean Break", "Rupture Nette","assets/icons/perks/survivors/IconPerks_cleanBreak.png",
        "After you finish healing another Survivor, while being healed by another Survivor, press the Ability button 1 to gain the Broken status effect.\n"
        "After 60 seconds, you become healthy.\n"
        "This perk does not activate if you are already Broken. The effect is canceled if you go into the dying state.",
        "Après avoir fini de soigner un autre survivant, lorsqu'un autre survivant vous soigne, appuyez sur le bouton de capacité 1 pour vous retrouver en état Brisé.\n"
        "Au bout de 60 secondes, vous vous retrouvez en bonne santé.\n"
        "Cette compétence ne s'active pas si vous êtes déjà en état Brisé. L'effet est annulé si vous vous retrouvez en état critique.", NULL},

    {147, TAURIE, "Invocation: Treacherous Crows", "Invocation: Corbeaux Traîtres","assets/icons/perks/survivors/IconPerks_invocationTreacherousCrows.png",
        "When in the basement near the circle, press the Ability button 2 to begin the Invocation.\n"
        "Invocations take 60 seconds. Other Survivors will see your aura during this and can join an ongoing interaction.\n"
        "Once the Invocation is completed:\n"
        "- You become injured and gain the Broken status effect for the rest of the trial.\n"
        "- When a Survivor is in the Terror Radius and the Killer scares a crow, their aura is revealed to all Survivors for 2 seconds.\n"
        "Completing the Invocation disables that perk for all Survivors.",
        "Lorsque vous êtes dans la cave près du cercle, appuyez sur le bouton de capacité 2 pour commencer l'Invocation.\n"
        "Les Invocations nécessitent 60 secondes. Les autres survivants verront votre aura pendant ceci et pourront rejoindre une Invocation en cours.\n"
        "Une fois l'Invocation achevée :\n"
        "- Vous subissez l'effet de statut Brisé et vous vous retrouvez en état Blessé pour le restant de l'épreuve.\n"
        "- Lorsqu'un survivant est dans le rayon de terreur et que le tueur effraie un corbeau, son aura est révélée à tous les survivants pendant 2 secondes.\n"
        "Compléter l'Invocation désactive cette compétence pour tous les survivants.", NULL},

    {148, TAURIE, "Shoulder the Burden", "Endosse le Fardeau","assets/icons/perks/survivors/IconPerks_shoulderTheBurden.png",
        "Once per trial, as long as you are not on death hook, press the Ability button 2 in front of a hooked Survivor to unhook them.\n"
        "When they are unhooked, they lose 1 hook state and you gain 1 hook state. You also scream and gain the Exposed status effect for 40 seconds.",
        "Une fois par épreuve, tant que vous n'êtes pas à votre crochet fatal, appuyez sur le bouton de capacité 2 devant un survivant suspendu à un crochet pour le décrocher.\n"
        "Lorsqu'il est décroché, il perd 1 état de crochet et vous gagnez 1 état de crochet. Vous hurlez aussi et vous vous retrouvez À découvert pendant 40 secondes.", NULL},
};
