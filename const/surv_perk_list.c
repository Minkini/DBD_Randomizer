//
// Created by nicolas on 9/15/25.
//

#include "../include/surv_db.h"

perks_t SURV_PERKS_LIST[NB_SURV_PERK] = {
    {SURV_ALL, "Dark Sense", "Sentiment Obscur","assets/icons/perks/survivors/IconPerks_darkSense.png",
        "Each time a generator is completed, 'Dark Sense' activates.\n"
        "While Dark Sense is active, the Killer entetering a 24 meter around you reveals their aura for 10 seconds\n"
        "Once the aura's duration expires, Dark Sense deactivates.",
        NULL, NULL},

    {SURV_ALL, "Déjà Vu", "Déjà-Vu","assets/icons/perks/survivors/IconPerks_dejaVu.png",
        "The auras of 3 generators which are in close proximity to one another are revealed to you.\n"
        "Gain a 6% repair speed bonus on the revealed generators.",
        NULL, NULL},

    {SURV_ALL, "Hope", "Espoir","assets/icons/perks/survivors/IconPerks_hope.png",
        "As soon as the exit gates are powered you gain a 5% Haste status effect.",
        NULL, NULL},

    {SURV_ALL, "Kindred", "Parenté","assets/icons/perks/survivors/IconPerks_kindred.png",
        "While you are on the hook, all Survivor's auras are revealed to all other Survivors. If The Killer is within a 16 meter range, The Killer's aura is revealed to you and all other Survivors.\n"
        "While a Survivor other than you is on the hook, all other Survivors' auras are revealed to you. If The Killer is within a 16 meter range of the hooked Survivor, The Killer's aura is revealed to you.",
        NULL, NULL},

    {SURV_ALL, "Lightweight", "Poids Plume","assets/icons/perks/survivors/IconPerks_lightweight.png",
        "Scratch marks stay visible 5 seconds less than normal, and their spacing is inconsistent.",
        NULL, NULL},

    {SURV_ALL, "No One Left Behind", "On n'Abandonne Personne","assets/icons/perks/survivors/IconPerks_noOneLeftBehind.png",
        "Once the exit gates are powered, you gain the following effects:\n"
        "- 100% bonus action speed when healing and unhooking other Survivors.\n"
        "- When unhooking a Survivor, increase the Haste they gain by 10%.\n"
        "- The auras of all other Survivors are revealed to you.",
        NULL, NULL},

    {SURV_ALL, "Plunderer's Instinct", "Instinct de Pillard","assets/icons/perks/survivors/IconPerks_plunderersInstinct.png",
        "Reveal unopened chests and items when within a 64 meter range. Increases the odds of finding an item of higher rarity from chests by 50%.",
        NULL, NULL},

    {SURV_ALL, "Premonition", "Prémonition","assets/icons/perks/survivors/IconPerks_premonition.png",
        "Get an auditory warning when looking in the direction of the Killer in a 45 degree cone within a range of 36 meters. Premonition has a cooldown of 30 seconds each time it activates.",
        NULL, NULL},

    {SURV_ALL, "Resilience", "Résistance","assets/icons/perks/survivors/IconPerks_resilience.png",
        "Grants 9% additional speed when repairing, sabotaging, healing, unhooking, vaulting, cleansing or blessing a Totem, opening exit gates, and unlocking while injured.",
        NULL, NULL},

    {SURV_ALL, "Slippery Meat", "Viande Glissante","assets/icons/perks/survivors/IconPerks_slipperyMeat.png",
        "- Unlocks the ability to attempt to unhook yourself.\n"
        "- Grants up to 3 extra escape attempts on the hook.\n"
        "- Hook escape attempts have a 4% increased chance to succeed.",
        NULL, NULL},

    {SURV_ALL, "Small Game", "Petit Gibier","assets/icons/perks/survivors/IconPerks_smallGame.png",
        "Get an auditory warning when looking in the direction of Totems in a 45-degree cone within a range of 12 meters. Small Game has a cooldown of 10 seconds each time it activates. For each Dull Totem and Hex Totem cleansed by any player, gain a Token. Small Game's detection cone is reduced by 5 degrees per token.",
        NULL, NULL},

    {SURV_ALL, "Spine Chill", "Frisson","assets/icons/perks/survivors/IconPerks_spineChill.png", "Get notified when the Killer is looking at you with a clear line of sight within a 36-meter range. Your speed while repairing, sabotaging, healing, unhooking, cleansing, blessing, opening exit gates and unlocking is increased by 6%.\n"
        "- The effects of Spine Chill linger for 0.5 seconds after the Killer looks away or is out of range.",
        NULL, NULL},

    {SURV_ALL, "This is not Happening", "Ce n'est pas en Train d'Arriver","assets/icons/perks/survivors/IconPerks_thisIsNotHappening.png",
        "Great Skill Check success zones when repairing and healing get 30% bigger when you are injured.",
        NULL, NULL},

    {SURV_ALL, "We'll Make It", "Nous Y Arriverons","assets/icons/perks/survivors/IconPerks_wellMakeIt.png",
        "When you rescue a Survivor from a hook, gain a 100% speed increase while healing others for 90 seconds.",
        NULL, NULL},

    {DWIGHT, "Bond", "Lien", "assets/icons/perks/survivors/IconPerks_bond.png",
        "Allies' auras are revealed to you when they are within a 36 meter range.",
        NULL, NULL},

    {DWIGHT, "Leader", "Meneur", "assets/icons/perks/survivors/IconPerks_leader.png",
        "Increases other Survivors' healing, sabotage, unhooking, cleansing, opening exit gates, and chest unlocking speeds by 30% when they are within a 10 meter range from you.\n"
        "Survivors can only be affected by one Leader effect at a time.\n"
        "Once out of range, this effect persists for 20 seconds.",
        NULL, NULL},

    {DWIGHT, "Prove Thyself", "Fais tes Preuves", "assets/icons/perks/survivors/IconPerks_proveThyself.png",
        "For every other Survivor working on a generator within a 4 meter range, gain 10% repair speed bonus. This same bonus is also applied to all other Survivors within range.\n"
        "Survivors can only be affected by one Prove Thyself effect at a time.",
        NULL, NULL},

    {MEG, "Adrenaline", "Adrénaline", "assets/icons/perks/survivors/IconPerks_adrenaline.png",
        "This perk activates when the exit gates are powered.\n"
        "Instantly heal one health state if you are injured or in the dying state and gain 50% Haste for 3 seconds.\n"
        "Adrenaline ignores the Exhausted status effect. Causes the Exhausted status effect for 40 seconds.",
        NULL, NULL},

    {MEG, "Quick & Quiet", "Rapide et Silencieux", "assets/icons/perks/survivors/IconPerks_quickAndQuiet.png",
        "The vault and hide actions' noise detection and audio range is reduced by 100%.\n"
        "This effect can only trigger once every 15 seconds.",
        NULL, NULL},

    {MEG, "Sprint Burst", "Course Effrénée", "assets/icons/perks/survivors/IconPerks_sprintBurst.png",
        "When you start running, gain 50% Haste for a maximum of 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Sprint Burst cannot be used while Exhausted.",
        NULL, NULL},

    {CLAUDETTE, "Botany Knowledge", "Connaissance en Botanique", "assets/icons/perks/survivors/IconPerks_botanyKnowledge.png",
        "Healing speed is increased by 50%.",
        NULL, NULL},

    {CLAUDETTE, "Empathy", "Empathie", "assets/icons/perks/survivors/IconPerks_empathy.png",
        "Injured Survivors are revealed to you when within a 128 meter range.",
        NULL, NULL},

    {CLAUDETTE, "Self-Care", "Auto-Traitement", "assets/icons/perks/survivors/IconPerks_self-Care.png",
        "Unlocks the Self Care ability, which allows you to heal without a Med-kit at 35% normal healing speed.",
        NULL, NULL},

    {JAKE, "Calm Spirit", "Esprit Calme", "assets/icons/perks/survivors/IconPerks_calmSpirit.png",
        "- Reduces chances of alerting woodland creatures by 100%.\n"
        "Allows you to overcome the urge to scream.\n"
        "Allows you to open chests and cleanse/bless Totems silently, but at 30% reduced speed.",
        NULL, NULL},

    {JAKE, "Iron Will", "Volonté de Fer", "assets/icons/perks/survivors/IconPerks_ironWill.png",
        "Grunts of pain caused by injuries are reduced by 100%. Does not function while Exhausted. Does not inflict Exhausted.",
        NULL, NULL},

    {JAKE, "Saboteur", "Saboteur", "assets/icons/perks/survivors/IconPerks_saboteur.png",
        "- See hook auras in a 56 meter radius from the pickup spot if another Survivor is being carried. Scourge Hooks are shown in yellow.\n"
        "- Unlocks the ability to sabotage hooks without a Toolbox.\n"
        "- Sabotaging a hook without a Toolbox takes 2.3 seconds.\n"
        "- The sabotage action has a 60 second cooldown.",
        NULL, NULL},

    {NEA, "Balanced Landing", "Atterrissage Équilibré", "assets/icons/perks/survivors/IconPerks_balancedLanding.png",
        "After falling from a height, cat-like reflexes reduce your stagger duration from falling by 75% and reduce the volume of grunts from falling by 100%. You gain 50% Haste for a maximum of 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Balanced Landing cannot be used while Exhausted.",
        NULL, NULL},

    {NEA, "Streetwise", "Débrouillardise", "assets/icons/perks/survivors/IconPerks_streetwise.png",
        "The first time you deplete an Item with charges, see the Killer's Aura for 8 seconds.\n"
        "Items with charges retrieved from Chests have +80% charges.",
        NULL, NULL},

    {NEA, "Urban Evasion", "Évasion Urbaine", "assets/icons/perks/survivors/IconPerks_urbanEvasion.png",
        "While crouching, you have 100% Haste.",
        NULL, NULL},

    {LAURIE, "Decisive Strike", "Coup Décisif", "assets/icons/perks/survivors/IconPerks_decisiveStrike.png",
        "After being unhooked or unhooking yourself, Decisive Strike activates for 60 seconds.\n"
        "While active, complete a Skill Check when grabbed by the Killer to escape, stunning them for 4 seconds.\n"
        "- Succeeding or failing the Skill Check disables Decisive Strike.\n"
        "- You become the Obsession after stunning the Killer.\n"
        "- The perk and its effects are disabled if the exit gates are powered.\n"
        "Increases your chance to be the Obsession.\n"
        "Taking any Conspicuous Action will deactivate Decisive Strike.",
        NULL, NULL},

    {LAURIE, "Object of Obsession", "Objet d'Obsession", "assets/icons/perks/survivors/IconPerks_objectOfObsession.png",
        "While your aura is revealed to the Killer, the Killer's aura becomes visible to you and you gain a 6% bonus to healing, repairing and cleansing speed.\n"
        "If you are the Obsession, your aura is revealed to the Killer for 3 seconds once every 30 seconds.\n"
        "Increases your chances of being the Obsession.",
        NULL, NULL},

    {LAURIE, "Sole Survivor", "Unique Survivant", "assets/icons/perks/survivors/IconPerks_soleSurvivor.png",
        "Every time a fellow Survivor is killed or sacrificed, gain a token. For each token, your aura cannot be read by The Killer within a max range of 24 meters.\n"
        "When you're the last Survivor alive:\n"
        "- Gain 75% action speed when repairing generators.\n"
        "- Gain 50% action speed while opening an exit gate or the Hatch.\n"
        "Increases your chances of being The Killer's Obsession.",
        NULL, NULL},

    {ACE, "Ace in the hole", "Atout dans la Manche", "assets/icons/perks/survivors/IconPerks_aceInTheHole.png",
        "When retrieving an item from a chest, there is a 100% chance that a Visceral (or lower) add-on will be attached to it.\n"
        "100% chance of finding a second add-on of Uncommon rarity (or lower).\n"
        "When escaping, keep any add-ons your item has.",
        NULL, NULL},

    {ACE, "Open-Handed", "Le Coeur sur la Main", "assets/icons/perks/survivors/IconPerks_open-Handed.png",
        "- Increases aura reading ranges by 16 meters.\n"
        "- Survivors may only be affected by one Open-Handed effect at a time.",
        NULL, NULL},

    {ACE, "Up the Ante", "Augmenter la Mise", "assets/icons/perks/survivors/IconPerks_upTheAnte.png",
        "For each other Survivor still alive, grant a 3% bonus of luck to all remaining Survivors.\n"
        "Unlocks the ability to attempt to unhook yourself for all Survivors.",
        NULL, NULL},

    {BILL, "Borrowed Time", "Surcis","assets/icons/perks/survivors/IconPerks_borrowedTime.png",
        "Survivors you unhook:\n"
        "- Keep their Endurance status effect for an extra 10 seconds.\n"
        "- Retain their Haste for an extra 10 seconds.\n",
        NULL, NULL},

    {BILL, "Left Behind", "Abandonné","assets/icons/perks/survivors/IconPerks_leftBehind.png",
        "If you are the last Survivor remaining in the trial, you can see the aura of the Hatch within a 32 meter range.",
        NULL, NULL},

    {BILL, "Unbreakable", "Indéfectible","assets/icons/perks/survivors/IconPerks_unbreakable.png",
        "Grants the ability to fully recover from the dying state once per trial. Increases dying recovery speed by 35%.",
        NULL, NULL},

    {FENG, "Alert", "Vigilant","assets/icons/perks/survivors/IconPerks_alert.png",
        "When the Killer performs a break action, the Killer is revealed to you for 5 seconds.",
        NULL, NULL},

    {FENG, "Lithe", "Souple","assets/icons/perks/survivors/IconPerks_lithe.png",
        "After performing a rushed vault, you gain 50% Haste for 3 seconds.\n"
        "Causes the Exhausted status effect for 40 seconds.\n"
        "Lithe cannot be used while Exhausted.",
        NULL, NULL},

    {FENG, "Technician", "Technicien","assets/icons/perks/survivors/IconPerks_technician.png",
        "The noises caused by your repairs and their hearing distance are reduced by 8 meters.\n"
        "On a failed repair Skill Check, the following effects happen:\n"
        "- The generator explosion will be prevented.\n"
        "- The generator loses progress as usual.\n"
        "- An additional 3% progress is lost.",
        NULL, NULL},

    {DAVID, "Dead Hard", "Dur à Cuire","assets/icons/perks/survivors/IconPerks_deadHard.png",
        "Dead hard activates after you are unhooked or unhook yourself.\n"
        "When injured, tap into your adrenaline bank to avoid incoming damage. Press the Active Ability Button 1 while running to gain the Endurance status effect for the next 0.5 seconds.\n"
        "- Causes the Exhausted status effect for 40 seconds.\n"
        "- Dead Hard then deactivates.",
        NULL, NULL},

    {DAVID, "No Mither", "Même pas Mal","assets/icons/perks/survivors/IconPerks_noMither.png",
        "You are affected by the Broken status effect for the duration of the trial.\n"
        "Your thick blood coagulates practically instantly.\n"
        "- You don't leave pools of blood.\n"
        "- Grunts of pain caused by injuries are reduced by 100% at any time.\n"
        "- Your recovery speed is increased by 25% and you can completely recover from the dying state.",
        NULL, NULL},

    {DAVID, "We're Gonna Live Forever", "Nous Vivrons Éternellement","assets/icons/perks/survivors/IconPerks_wereGonnaLiveForever.png",
        "When healing another Survivor in the dying state, your healing speed is increased by 100%.\n"
        "Once healing is complete, the healed Survivor gains the Endurance status effect for 10 seconds. This effect has a 30-second cooldown.",
        NULL, NULL},

    {QUENTIN, "Pharmacy", "Pharmacie","assets/icons/perks/survivors/IconPerks_pharmacy.png",
        "- Unlocking chests is 125% faster.\n"
        "- The hearing distance for noises from unlocking chests is reduced by 12 meters.\n"
        "- Pharmacy guarantees an Emergency Med-kit upon completing the interaction.",
        NULL, NULL},

    {QUENTIN, "Vigil", "Veillée","assets/icons/perks/survivors/IconPerks_vigil.png",
        "You and Survivors within 16 meters recover 66% faster from the Blindness, Broken, Exhausted, Exposed, Hemorrhage, Hindered, Mangled and Oblivious status effects.\n"
        "Survivors can only be affected by one Vigil's effect at a time.\n"
        "Once out of range, this effect persists for 15 seconds.",
        NULL, NULL},

    {QUENTIN, "Wake Up!", "Debout!","assets/icons/perks/survivors/IconPerks_wakeUp.png",
        "Once all generators are powered, exit gates are revealed to you. While opening the exit gates, reveal your aura to other Survivors.\n"
        "While this perk is active, open the exit gates 12.5% faster for each Survivor still alive.",
        NULL, NULL},

    {TAPP, "Detective's Hunch", "Intuition de l'Inspecteur","assets/icons/perks/survivors/IconPerks_detectivesHunch.png",
        "When a generator is completed, the auras of Generators, Chests and Totems within 64 meters are revealed to you for 20 seconds.",
        NULL, NULL},

    {TAPP, "Stake Out", "En Planque","assets/icons/perks/survivors/IconPerks_stakeOut.png",
        "For each 15 seconds you are standing within the Killer Terror Radius and not in a chase, you gain a token up to a maximum of 4 tokens.\n"
        "When Stake Out has at least 1 token, good Skill Checks are considered great Skill Checks, consume 1 token, and grant an additional 1% bonus to generator repair progress.",
        NULL, NULL},

    {TAPP, "Tenacity", "Tenacité","assets/icons/perks/survivors/IconPerks_tenacity.png",
        "Your ferocious tenacity in dire situations allows you to, while in the dying state, have 25% Haste and your aura cannot be read by the Killer. Grunts of pain while in the dying state are reduced by 75%.",
        NULL, NULL},

    {KATE, "Boil Over", "Effusion","assets/icons/perks/survivors/IconPerks_boilOver.png",
        "Your struggling effects on The Killer are increased by 80%.\n"
        "You obscure The Killer's ability to see hook auras within 16 meters.\n"
        "You gain 33 % of current wiggling progress when the Killer drops from great heights.",
        NULL, NULL},

    {KATE, "Dance With Me", "Danse Avec Moi","assets/icons/perks/survivors/IconPerks_danceWithMe.png",
        "When performing a rushed vault or leaving a locker in a sprint, you leave no scratch marks for 5 seconds.\n"
        "Dance With Me has a cooldown of 15 seconds.",
        NULL, NULL},

    {KATE, "Windows of Opportunity", "Parfaite Occasion","assets/icons/perks/survivors/IconPerks_windowsOfOpportunity.png",
        "Auras of pallets, breakable walls, and vault locations are revealed to you when within a 32 meter range.",
        NULL, NULL},

    {ADAM, "Autodidact", "Autididacte","assets/icons/perks/survivors/IconPerks_autodidact.png",
        "You start the trial with a -15% progress penalty for Skill Checks to heal other Survivors.\n"
        "For every successful Skill Check while healing another Survivor, you receive a token up to a maximum of 5 tokens.\n"
        "Each token grants you a +15% progress bonus.\n"
        "Great Skill Checks cannot be performed while using Autodidact.\n"
        "- Autodidact is not active when using a Med-kit to heal.",
        NULL, NULL},

    {ADAM, "Deliverance", "Libération","assets/icons/perks/survivors/IconPerks_deliverance.png",
        "After performing a safe hook rescue on another Survivor, Deliverance activates.\n"
        "You now have a 100% chance of unhooking yourself during the escape attempt.\n"
        "A successful Deliverance from the hook triggers the Broken status effect for 60 seconds.",
        NULL, NULL},

    {ADAM, "Diversion", "Diversion","assets/icons/perks/survivors/IconPerks_diversion.png",
        "Being within the Killer's Terror Radius while not in a chase for 20 seconds activates Diversion.\n"
        "- Once Diversion is activated, press the Active Ability Button 1 while crouched and motionless to throw a pebble, which creates a distraction for The Killer at a distance of 20 meters.\n"
        "- The perk timer resets once the ability has been activated.\n"
        "The distraction consists of:\n"
        "- A loud noise notification\n"
        "- Scratch marks",
        NULL, NULL},

    {JEFF, "Aftercare", "Suivi des Soins","assets/icons/perks/survivors/IconPerks_aftercare.png",
        "You see the aura of every Survivor that:\n"
        "- You rescue from a hook, or rescues you from a hook.\n"
        "- You complete a healing action on, or completes a healing action on you.\n"
        "They also see your aura.\n"
        "This occurs for up to 3 Survivors. All effects of Aftercare are reset when you are hooked by The Killer.",
        NULL, NULL},

    {JEFF, "Breakdown", "Effondrement","assets/icons/perks/survivors/IconPerks_breakdown.png",
        "Any time you are removed from a hook (escaped or saved), the hook breaks and the Killer's aura is shown to you for 6 seconds. A hook broken by this perk takes 180 seconds to respawn.",
        NULL, NULL},

    {JEFF, "Distortion", "Distorsion","assets/icons/perks/survivors/IconPerks_distortion.png",
        "When your aura would be shown to the Killer, the perk activates.\n"
        "Distortion starts with 1 token. When your aura would be read, Distortion activates and consumes a token. For the next 12 seconds, your aura and scratch marks will not be shown to The Killer. For each 15 seconds spent in chase, regain 1 token, up to 2.\n"
        "This effect cannot trigger while in the dying state.",
        NULL, NULL},

    {JANE, "Head On", "De Front","assets/icons/perks/survivors/IconPerks_headOn.png",
        "While standing in a locker, for 3 seconds, the perk activates.\n"
        "While the perk is activated, performing a rushed action to leave a locker stuns The Killer for 3 seconds if they are standing within range.\n"
        "Causes the Exhausted status effect for 40 seconds. Head On cannot be used while Exhausted.",
        NULL, NULL},

    {JANE, "Poised", "Assurance","assets/icons/perks/survivors/IconPerks_poised.png",
        "When first starting repairs on a generator, reveal the Killer's aura for 8 seconds. When a generator is completed, you leave no scratch marks for 30 seconds.",
        NULL, NULL},

    {JANE, "Solidarity", "Solidarité","assets/icons/perks/survivors/IconPerks_solidarity.png",
        "While injured, healing a Survivor without using a Med-kit also heals you at a 70% conversion rate.",
        NULL, NULL},

    {ASH, "Buckle Up", "Accrochez-Vous","assets/icons/perks/survivors/IconPerks_buckleUp.png",
        "While healing a Survivor in the dying state:\n"
        "- You both can see the Killer's aura.\n"
        "When completing healing a Survivor from the dying state to injured:\n"
        "The healed Survivor gains 50% Haste for 5 seconds and leaves no scratch marks during this time.",
        NULL, NULL},

    {ASH, "Flip-Flop", "À la Revoyure","assets/icons/perks/survivors/IconPerks_flip-Flop.png",
        "While in dying state, 50% of your recovery progression is converted into wiggle progression when you are picked up by The Killer, up to a maximum of 50% total wiggle progression.",
        NULL, NULL},

    {ASH, "Mettle of Man", "Force de Caractère","assets/icons/perks/survivors/IconPerks_mettleOfMan.png",
        "After you earn 3 Protection Hit scoring events, Mettle of Man activates.\n"
        "Once activated, the next occasion that would put you into the dying state from the injured state is ignored.\n"
        "The next time you heal back to full health, your aura will be revealed to the Killer when you are further than 16 meters from the Killer.\n"
        "Mettle of Man will deactivate the next time you are put into the dying state.\n"
        "- Increases your chances to be the Killer's Obsession.",
        NULL, NULL},

    {NANCY, "Better Together", "Mieux Ensemble","assets/icons/perks/survivors/IconPerks_betterTogether.png",
        "The aura of the generator you are currently repairing is revealed to all other Survivors.\n"
        "If The Killer downs a Survivor while you are repairing a generator, you see the aura of all other Survivors for 20/25/30 seconds.",
        NULL, NULL},

    {NANCY, "Fixated", "Obnubilé","assets/icons/perks/survivors/IconPerks_fixated.png",
        "You can see your own scratch marks at all times.\n"
        "While walking, you have 20% Haste.",
        NULL, NULL},

    {NANCY, "Inner Strength", "Force Intérieur","assets/icons/perks/survivors/IconPerks_innerStrength.png",
        "Each time you complete a Totem cleanse action, Inner Strength activates. If you are already afflicted by the Broken status effect, Inner Strength does not activate.\n"
        "While Inner Strength is active, hiding inside a locker for 8 seconds while injured automatically heals you from injured to healthy.\n"
        "Inner Strength becomes deactivated as soon as it has successfully triggered.",
        NULL, NULL},

    {STEVE, "Babysitter", "Baby-Sitter","assets/icons/perks/survivors/IconPerks_babysitter.png",
        "When you unhook a Survivor, they won't leave scratch marks or pools of blood, and they gain a 10% Haste status effect for 30 seconds.\n"
        "You see the Killer's aura for 8 seconds.",
        NULL, NULL},

    {STEVE, "Camaraderie", "Camaraderie","assets/icons/perks/survivors/IconPerks_camaraderie.png",
        "While you are on the hook in the struggle phase, Camaraderie activates.\n"
        "If another Survivor is within 16 meters of you while Camaraderie is activated, the hook timer is paused for 34 seconds.",
        NULL, NULL},

    {STEVE, "Second Wind", "Second Souffle","assets/icons/perks/survivors/IconPerks_secondWind.png",
        "When you have healed other Survivors for the equivalent of one health state, Second Wind activates. If you are already afflicted by the Broken status effect, Second Wind does not activate.\n"
        "While Second Wind is activated, the next time you are unhooked or you unhook yourself, you are affected by the Broken status effect. After a total duration of 20 seconds, Second Wind automatically heals you from injured to healthy.\n"
        "Second Wind deactivates once you become healthy or if you are put into the dying state before Second Wind successfully triggers. You lose the Broken status effect.",
        NULL, NULL},

    {YUI, "Any Means Necessary", "Par Tous les Moyens","assets/icons/perks/survivors/IconPerks_anyMeansNecessary.png",
        "You see the auras of dropped Pallets.\n"
        "- Press and hold the Active Ability Button 1 for 3 seconds while standing beside a dropped pallet to reset it to its upright position.",
        NULL, NULL},

    {YUI, "Breakout", "Évasion","assets/icons/perks/survivors/IconPerks_breakout.png",
        "When within 5 meters of a carried Survivor, you gain 10% Haste status effect. The carried Survivor's wiggle speed is increased by 25%.",
        NULL, NULL},

    {YUI, "Lucky Break", "Coup de Chance","assets/icons/perks/survivors/IconPerks_luckyBreak.png",
        "Lucky Break activates any time you are injured. While Lucky Break is active, you won't leave trails of blood or scratch marks for a total of 60 seconds.\n"
        "While healthy, for each 1 second spent healing another Survivor, increase Lucky Break's duration by 1 second. Lucky Break's duration cannot increase beyond its starting value.",
        NULL, NULL},

    {ZARINA, "For the People", "Pour le Peuple","assets/icons/perks/survivors/IconPerks_forThePeople.png",
        "For the People is only active while at full health.\n"
        "Press the Active Ability Button 1 while healing another Survivor without a Med-kit to instantly heal them from dying to injured, or from injured to healthy.\n"
        "You become injured and receive the Broken status effect for 60 seconds.\n"
        "You become the Obsession.\n"
        "Equipping this perk decreases your chances of being The Killer's Obsession at the start of the trial.",
        NULL, NULL},

    {ZARINA, "Off the Record", "Confidentiel","assets/icons/perks/survivors/IconPerks_offTheRecord.png", NULL, NULL, NULL},

    {ZARINA, "Red Herring", "Leurre","assets/icons/perks/survivors/IconPerks_redHerring.png",
        "After repairing a generator for at least 1 seconds, it will be highlighted to you with a yellow aura. The generator stays highlighted until it is fully repaired, you repair a new generator, or enter a locker.\n"
        "Entering any locker will trigger a loud noise indicator for The Killer at the highlighted generator's location.\n"
        "Red Herring can only be triggered once every 15 seconds.",
        NULL, NULL},

    {CHERYL, "Blood Pact", "Pacte de Sang","assets/icons/perks/survivors/IconPerks_bloodPact.png",
        "When you or the Obsession are injured, you both see each other's auras.\n"
        "After completing a healing action on the Obsession, or having the Obsession complete a healing action on you, you both gain a 7% Haste status effect until no longer within 16 meters of each other.\n"
        "Reduces the odds of being the Obsession.\n"
        "If you are the Obsession, this perk deactivates.",
        NULL, NULL},

    {CHERYL, "Repressed Alliance", "Alliance Refoulée","assets/icons/perks/survivors/IconPerks_repressedAlliance.png",
        "Repressed Alliance activates after repairing generators for a total of 45 seconds.\n"
        "When repairing a generator while the perk is active, press the Active Ability Button 1 to call upon The Entity to block the generator for 30 seconds. The perk deactivates.\n"
        "This interaction is not available if other Survivors are repairing the generator.\n"
        "Affected generators will be revealed by a white aura to all Survivors.",
        NULL, NULL},

    {CHERYL, "Soul Guard", "Protection de l'Âme","assets/icons/perks/survivors/IconPerks_soulGuard.png",
        "Gain the Endurance status effect for 8 seconds after being healed or having recovered from the dying state.\n"
        "While cursed by a Hex, you can fully recover from the dying state.\n"
        "This effect can only trigger once every 30 seconds.",
        NULL, NULL},

    {FELIX, "Built to Last", "Conçu pour Durer","assets/icons/perks/survivors/IconPerks_builtToLast.png",
        "After hiding inside a locker for 10 seconds with a depleted item in hand, 99% of its charges are refilled.\n"
        "Each use of Built to Last reduces the amounts of charges refilled by 33%.",
        NULL, NULL},

    {FELIX, "Desperate Measures", "Mesures Désespérées","assets/icons/perks/survivors/IconPerks_desperateMeasures.png",
        "For each injured, hooked, or dying Survivor, increase the speed of your healing and unhook actions by 20%.",
        NULL, NULL},

    {FELIX, "Visionary", "Visionnaire","assets/icons/perks/survivors/IconPerks_visionary.png",
        "You see generator's auras within 32 meters.\n"
        "Anytime a generator is completed, Visionary is disabled for 16 seconds.",
        NULL, NULL},

    {ELODIE, "Appraisal", "Estimation","assets/icons/perks/survivors/IconPerks_appraisal.png",
        "Start the trial with 4 tokens. When a chest has already been opened, consume a token to rummage through it for an item. Rummaging can only be performed twice per chest.\n"
        "You rummage through chests 80% faster.",
        NULL, NULL},

    {ELODIE, "Deception", "Supercherie","assets/icons/perks/survivors/IconPerks_deception.png",
        "Interacting with a locker while sprinting will trigger a loud noise notification at your location and cause you to leave no scratch marks for 5 seconds.\n"
        "You no longer enter lockers while sprinting and while this perk is active.\n"
        "Deception can only be triggered once every 15 seconds.",
        NULL, NULL},

    {ELODIE, "Power Struggle", "Bras de Fer","assets/icons/perks/survivors/IconPerks_powerStruggle.png",
        "Whenever you are in the dying state, you see the auras of available Pallets.\n"
        "While being carried by The Killer, reaching 15% wiggle progress activates Power Struggle. While Power Struggle is active, you can drop a nearby, standing pallet to stun The Killer.",
        NULL, NULL},

    {YUN_JIN, "Fast Track", "Voie Rapide","assets/icons/perks/survivors/IconPerks_fastTrack.png",
        "Whenever another Survivor is hooked, you gain 3 tokens. You consume all tokens after a great Skill Check on a generator. Each token consumed grants a 1% bonus progression for great Skill Checks when repairing generators.",
        NULL, NULL},

    {YUN_JIN, "Self-Preservation", "Instinct de Survie","assets/icons/perks/survivors/IconPerks_self-Preservation.png",
        "Whenever another Survivor within 16 meters of you gets hit by a basic attack or a special attack, Self-Preservation activates.\n"
        "Your scratch marks, pools of blood and grunts of pain are hidden for 10 seconds.",
        NULL, NULL},

    {YUN_JIN, "Smash Hit", "Succès Écrasant","assets/icons/perks/survivors/IconPerks_smashHit.png",
        "After stunning the Killer with a pallet, gain 50% Haste for 4 seconds.\n"
        "Causes the Exhausted status effect for 20 seconds.\n"
        "This perk cannot be used while Exhausted.",
        NULL, NULL},

    {JILL, "Blast Mine", "Mine Explosive","assets/icons/perks/survivors/IconPerks_blastMine.png",
        "Blast Mine activates after completing a total of 40% worth of repair progress on generators.\n"
        "When standing next to a generator, press the Active Ability Button 2 to install a Blast Mine which stays active for 120 seconds.\n"
        "Affected generators will be revealed to all Survivors by a yellow aura. Only one Blast Mine can be active on a generator.\n"
        "- When the Killer damages the generator, the Blast Mine explodes, stunning them and blinding anyone nearby.\n"
        "- Blast Mine deactivates when the generator is damaged by the Killer or when the timer expires.",
        NULL, NULL},

    {JILL, "Counterforce", "Contre-Force","assets/icons/perks/survivors/IconPerks_counterforce.png",
        "You cleanse Totems 25% faster. After cleansing a Totem, you see the aura of the furthest Totem from you for 14 seconds and you gain an additional 25% stackable speed bonus to cleansing Totems for the remainder of the trial.",
        NULL, NULL},

    {JILL, "Resurgence", "Renaissance","assets/icons/perks/survivors/IconPerks_resurgence.png",
        "Gain 70% healing progress instantly after being unhooked or unhooking yourself.",
        NULL, NULL},

    {LEON, "Bite the Bullet", "Serrer les Dents","assets/icons/perks/survivors/IconPerks_biteTheBullet.png",
        "When healing, you and the Survivor you're healing make no noise, including grunts of pain. There is no noise notification on failed healing Skill Checks and healing regresses by only 1%.",
        NULL, NULL},

    {LEON, "Flashbang", "Grenade Aveuglante","assets/icons/perks/survivors/IconPerks_flashbang.png",
        "After completing 40% progress on any generator, Flashbang activates.\n"
        "Enter a locker and press the Active Ability Button 1 to craft a flash grenade.\n"
        "- 1 charge.\n"
        "- Detonates with a loud bang and flashing light.\n"
        "- Creates a noise notification.\n"
        "- Can be used to distract or blind.\n"
        "You leave the flash grenade behind when escaping the trial.",
        NULL, NULL},

    {LEON, "Rookie Spirit", "Détermination du Bleu","assets/icons/perks/survivors/IconPerks_rookieSpirit.png",
        "Complete 3 good or great Skill Checks while repairing generators to activate Rookie Spirit for the remainder of the trial.\n"
        "Once active, you can see the aura of regressing generators.",
        NULL, NULL},

    {MIKAELA, "Boon: Circle of Healing", "Bénédiction: Cercle de Soins","assets/icons/perks/survivors/IconPerks_boonCircleOfHealing.png",
        "Press and hold the Ability button 1 near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range gain a 100% healing speed bonus to healing others. Med-kits give no bonus to healing in the Boon Totem's range. Injured Survivors have their auras revealed to all other Survivors when inside the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        NULL, NULL},

    {MIKAELA, "Boon: Shadow Step", "Bénédiction: Marche de l'Ombre","assets/icons/perks/survivors/IconPerks_boonShadowStep.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range will have their scratch marks and auras hidden to the Killer. This effect lingers for 4 seconds after leaving the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        NULL, NULL},

    {MIKAELA, "Clairvoyance", "Clairvoyance","assets/icons/perks/survivors/IconPerks_clairvoyance.png",
        "Clairvoyance activates whenever you cleanse or bless a Totem.\n"
        "When empty-handed, hold the Use Item Button to unlock your full aura-reading potential. For up to 12 seconds, you see the auras of exit gate switches, generators, hooks, chests and the Hatch within a 64 meter range.",
        NULL, NULL},

    {JONAH, "Boon: Exponential", "Bénédiction: Exponentiel","assets/icons/perks/survivors/IconPerks_boonExponential.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "All Survivors within the Boon Totem's range recover 90/95/100% faster and can completely recover from the dying state.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        NULL, NULL},

    {JONAH, "Corrective Action", "Mesure de Correction","assets/icons/perks/survivors/IconPerks_correctiveAction.png",
        "You start the trial with 3 token(s) and gain a token, up to a maximum of 5, for every great Skill Check.\n"
        "When another Survivor fails a Normal Skill Check, 1 token is consumed and their failed Skill Check becomes a good Skill Check. Additionally, their aura is revealed to you for 6 seconds.",
        NULL, NULL},

    {JONAH, "Overcome", "Surmonter","assets/icons/perks/survivors/IconPerks_overcome.png",
        "When you are injured, you retain the movement speed bonus for 2 seconds longer.\n"
        "Overcome causes the Exhausted status effect for 40 seconds.\n"
        "Overcome cannot be used when Exhausted.",
        NULL, NULL},

    {YOICHI, "Boon: Dark Theory", "Bénédiction: Théorie Ténébreuse","assets/icons/perks/survivors/IconPerks_boonDarkTheory.png",
        "Press and hold the Ability button near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Any Survivors within the Boon Totem's range gain 3% Haste. This effect lingers for 4 seconds after leaving the Boon Totem's range.\n"
        "You can only bless one Totem at a time. All equipped boon perks are active on your Boon Totem.",
        NULL, NULL},

    {YOICHI, "Empathic Connection", "Connexion Empathique","assets/icons/perks/survivors/IconPerks_empathicConnection.png",
        "Whenever another Survivor is injured, they can see your aura.\n"
        "You heal other Survivors 35% faster.",
        NULL, NULL},

    {YOICHI, "Parental Guidance", "Conseils Parentaux","assets/icons/perks/survivors/IconPerks_parentalGuidance.png",
        "After stunning the Killer by any means, your scratch marks, pools of blood and grunts of pain are hidden for 7 seconds.",
        NULL, NULL},

    {HADDIE, "Inner Focus", "Concentration Intérieure","assets/icons/perks/survivors/IconPerks_innerFocus.png",
        "You can see other Survivors' scratch marks.\n"
        "When the Killer causes another Survivor to lose a health state, the Killer's aura is revealed to you for 10 seconds.",
        NULL, NULL},

    {HADDIE, "Overzealous", "Excès de Zèle","assets/icons/perks/survivors/IconPerks_overzealous.png",
        "After cleansing or blessing a Totem, this perk activates.\n"
        "Your generator repair speed is increased by 10%. This bonus is doubled if you cleanse or bless a Hex totem.\n"
        "This perk deactivates when you lose a health state by any means.",
        NULL, NULL},

    {HADDIE, "Residual Manifest", "Manifeste Résiduel","assets/icons/perks/survivors/IconPerks_residualManifest.png",
        "After a successful Killer Blind action, the Killer is affected by the Blindness status effect for 30 seconds.\n"
        "This perk grants the ability to rummage through an opened chest once per trial and will guarantee a basic Flashlight.",
        NULL, NULL},

    {ADA, "Low Profile", "Profil Bas","assets/icons/perks/survivors/IconPerks_lowProfile.png",
        "When you become the last Survivor standing, this perk activates. Hide your scratch marks, pools of blood and grunts of pain caused by injuries for 90 seconds.",
        NULL, NULL},

    {ADA, "Reactive Healing", "Guérison Réactive","assets/icons/perks/survivors/IconPerks_reactiveHealing.png",
        "When another Survivor loses a health state in a 32-meter radius around you while you are injured, instantly increase your healing progression by 50% of the missing healing progression.",
        NULL, NULL},

    {ADA, "Wiretap", "Micro Caché","assets/icons/perks/survivors/IconPerks_wiretap.png",
        "Wiretap activates after completing a total of 40% worth of repair progress on generators.\n"
        "When standing next to a generator, press the Active Ability button 2 to install a Wiretap, which stays active for 120 seconds.\n"
        "Affected generators will be revealed to all Survivors by a yellow aura. Only one Wiretap can be active on a generator.\n"
        "- When the Killer enters within 14 meters of the generator, their aura is revealed to all Survivors.\n"
        "- Wiretap deactivates when the generator is damaged by the Killer or when the timer expires.",
        NULL, NULL},

    {REBECCA, "Better than New", "Mieux que Neuf","assets/icons/perks/survivors/IconPerks_betterThanNew.png",
        "Upon completing a healing action on another Survivor, the targeted Survivor gets a 16% speed boost to healing, opening chests, cleansing and blessing Totems.\n"
        "Survivors keep the bonus until they lose a health state.",
        NULL, NULL},

    {REBECCA, "Hyperfocus", "Hyperconcentration","assets/icons/perks/survivors/IconPerks_hyperfocus.png",
        "After hitting a great Skill Check while repairing or healing, this perk gains 1 token, up to 6 tokens. Each token increases the chance of Skill Check trigger by 4%, the Skill Check cursor speed by 4% and the bonus progression for great Skill Checks by 30% of its base value.\n"
        "The perk loses all tokens in case of normal Skill Check successes, Skill Check fails, or if the action is stopped by any means.",
        NULL, NULL},

    {REBECCA, "Reassurance", "Réconfort","assets/icons/perks/survivors/IconPerks_reassurance.png",
        "When within a 6-meter radius around a hooked Survivor, use the Active Ability Button 2 to pause their struggle progression for 30 seconds.\n"
        "If they are on the struggle phase, it also pauses the Struggle Skill Checks.\n"
        "Reassurance can only be triggered once per survivor per hook instance.",
        NULL, NULL},

    {VITTORIO, "Fogwise", "Débrouillard","assets/icons/perks/survivors/IconPerks_fogwise.png",
        "Hitting a great Skill Check while repairing a generator reveals the Killer's aura to you for 6 seconds.",
        NULL, NULL},

    {VITTORIO, "Potential Energy", "Énergie Potentielle","assets/icons/perks/survivors/IconPerks_potentialEnergy.png",
        "While repairing, press the Active Ability Button 2 to gain tokens instead of repairing the generator, up to a maximum of 20 tokens.\n"
        "While you have at least 1 token, press the Active Ability Button 2 to consume all tokens and repair the generator for 1% per token spent.\n"
        "When you lose a health state, all tokens are lost.",
        NULL, NULL},

    {VITTORIO, "Quick Gambit", "Gambit Prompt","assets/icons/perks/survivors/IconPerks_quickGambit.png",
        "When you are chased by the Killer, see the aura of other Survivors. Any Survivor repairing a generator gains a 5% repair speed bonus.\n"
        "This perk goes on cooldown for 40 seconds when you lose a health state.",
        NULL, NULL},

    {THALITA, "Cut Loose", "Hors de Contrôle","assets/icons/perks/survivors/IconPerks_cutLoose.png",
        "After performing a rushed vault in a chase, this perk activates.\n"
        "While this perk is active, your rushed vaults are silent for up to 6 seconds and successfully performing a rushed vault during that time resets the timer.\n"
        "This perk goes on cooldown for 45 seconds.",
        NULL, NULL},

    {THALITA, "Friendly Competition", "Compétition Amicale","assets/icons/perks/survivors/IconPerks_friendlyCompetition.png",
        "Whenever you finish repairing a generator with at least one other Survivor, this perk activates.\n"
        "You and other survivors who finished repairing the generator with you get 5% increased repair progress speed for 120 seconds.\n"
        "Survivors can only have one instance of this perk's ability active at once.",
        NULL, NULL},

    {THALITA, "Teamwork: Power of Two", "Travail d'Équipe: Pouvoir des Deux","assets/icons/perks/survivors/IconPerks_teamworkPowerOfTwo.png",
        "When you finish healing another Survivor, you both gain 5% Haste as long as you stay within 16 meters of each other.\n"
        "This effect lingers for 4 seconds when leaving the range.\n"
        "This effect does not stack.",
        NULL, NULL},

    {RENATO, "Background Player", "Joueur Arrière","assets/icons/perks/survivors/IconPerks_backgroundPlayer.png",
        "When the Killer picks up another Survivor, Background Player activates for 10 seconds.\n"
        "When you start running, you gain 50% Haste for 5 seconds.\n"
        "This perk cannot be used while Exhausted.\n"
        "This perk causes the Exhausted status effect for 20 seconds.",
        NULL, NULL},

    {RENATO, "Blood Rush", "Coup de Collier","assets/icons/perks/survivors/IconPerks_bloodRush.png",
        "After being unhooked, Blood Rush activates for the next 60 seconds.\n"
        "While suffering from the Exhausted status effect, press the Active Ability Button 1 to recover from Exhausted instantly.\n"
        "This perk deactivates when it is used or when performing a Conspicuous Action.\n"
        "Blood Rush is disabled once the Exit Gates are powered.",
        NULL, NULL},

    {RENATO, "Teamwork: Collective Stealth", "Travail d'Équipe: Discrétion Collective","assets/icons/perks/survivors/IconPerks_teamworkCollectiveStealth.png",
        "When another Survivor finishes healing you, you both leave no scratch marks as long as you stay within 16 meters of each other.\n"
        "This effect lingers for 4 seconds when leaving the range.\n"
        "This effect does not stack.",
        NULL, NULL},

    {GABRIEL, "Made for This", "Fait Pour Ça","assets/icons/perks/survivors/IconPerks_madeForThis.png",
        "Made for This activates while you are in the injured state.\n"
        "- After you finish healing another Survivor, gain the Endurance status effect for 10 seconds.\n"
        "- While affected by Deep Wound, you have 3% Haste.",
        NULL, NULL},

    {GABRIEL, "Scavenger", "Récupérateur","assets/icons/perks/survivors/IconPerks_scavenger.png",
        "While you are holding an empty toolbox, Scavenger activates.\n"
        "Succeeding a great skill check while repairing gains 1 token, up to 4.\n"
        "When you reach maximum tokens, lose all tokens and automatically recharge your toolbox to full.\n"
        "Scavenger is disabled for the remainder of the Trial after recharging a toolbox.\n"
        "This perk grants the ability to rummage through an opened chest once per Trial and will guarantee a basic Toolbox.",
        NULL, NULL},

    {GABRIEL, "Troubleshooter", "Expert","assets/icons/perks/survivors/IconPerks_troubleshooter.png",
        "When you are chased by the Killer, Troubleshooter activates.\n"
        "- You see the aura of the Generator with the most progress.\n"
        "- You see the aura of the Killer for 4/5/6 seconds after dropping a Pallet.\n"
        "The effect lasts for 10 seconds after being in chase, then deactivates.",
        NULL, NULL},

    {NICOLAS, "Dramaturgy", "Dramaturgie","assets/icons/perks/survivors/IconPerks_dramaturgy.png",
        "Dramaturgy activates while you are healthy.\n"
        "While running, press the active ability button 2 to run with knees high for 0.5 seconds and then gain 25% Haste for 2 seconds, followed by an unknown effect.\n"
        "- Become Exposed for 12 seconds\n"
        "- Gain 25% Haste for 2 seconds\n"
        "- Scream, but nothing happens\n"
        "Gain a random rare item, with random add-ons, and drop any held item.\n"
        "The same effect cannot happen twice in a row.\n"
        "Dramaturgy causes Exhausted for 40 seconds. Can't be used while Exhausted.",
        NULL, NULL},

    {NICOLAS, "Plot Twist", "Rebondissement","assets/icons/perks/survivors/IconPerks_plotTwist.png",
        "Plot Twist activates when you are injured.\n"
        "Press the ability button 2 while crouched and motionless to enter the dying state silently.\n"
        "When using Plot Twist to enter the dying state: you leave no blood pools and you make no noise and you can fully recover from the dying state at 25% increased speed.\n"
        "When you recover by yourself using Plot Twist, you are healed instantly and you gain 50% Haste for 4 seconds.\n"
        "This perk deactivates if you recover by yourself by any means.\n"
        "This perk re-activates when the exit gates are powered.",
        NULL, NULL},

    {NICOLAS, "Scene Partner", "Partenaire de Scène","assets/icons/perks/survivors/IconPerks_scenePartner.png",
        "Scene Partner activates when you are in the Killer's Terror Radius.\n"
        "Whenever you look at the Killer, scream, then see the Killer's aura for 6 seconds.\n"
        "There is a chance you will scream again, if you do, you will see the Killer's aura for an additional 2 seconds.\n"
        "Scene Partner then goes on cooldown for 40 seconds.",
        NULL, NULL},

    {ELLEN, "Chemical Trap", "Piège Chimique","assets/icons/perks/survivors/IconPerks_chemicalTrap.png",
        "Chemical Trap activates after completing a total of 20% worth of progress on generators.\n"
        "While standing next to a dropped pallet, press the Active Ability Button 2 to install a Trap, which stays active for 60 seconds.\n"
        "Affected pallets will be revealed to all Survivors by a yellow aura. Only one Chemical Trap can be active on a pallet.\n"
        "When the Killer performs the break action on the pallet, the Chemical Trap explodes, and they gain 50% Hindered for 4 seconds.",
        NULL, NULL},

    {ELLEN, "Light-Footed", "À Pas de Chat","assets/icons/perks/survivors/IconPerks_light-Footed.png",
        "When you are healthy, this perk activates.\n"
        "Your running footsteps are silent.\n"
        "This perk goes on cooldown for 10 seconds after performing a rushed action.",
        NULL, NULL},

    {ELLEN, "Lucky Star", "Bonne Étoile","assets/icons/perks/survivors/IconPerks_luckyStar.png",
        "When you hide in a locker, you make no grunts of pain.\n"
        "After exiting the locker, you see the aura of the closest generator and all Survivors, leave no pools of blood and make no grunts of pain for 30 seconds.\n"
        "This perk goes on cooldown for 25 seconds.",
        NULL, NULL},

    {ALAN, "Boon: Illumination", "Bénédiction: Illumination","assets/icons/perks/survivors/IconPerks_boonIllumination.png",
        "Press and hold the Ability button 1 near a Dull or Hex Totem to bless it and create a Boon Totem. Soft chimes ring out in a 24 meter range.\n"
        "Survivors inside your Boon Totem's range see the aura of all chests and all generators in blue.\n"
        "If you have a lit Boon Totem, you cleanse or bless Totems 10% faster.\n"
        "You can only bless one Totem at a time. All equipped Boon perks are active on your Boon Totem.",
        NULL, NULL},

    {ALAN, "Champion of Light", "Champion de la Lumière","assets/icons/perks/survivors/IconPerks_championOfLight.png",
        "When you are shining a Flashlight, you gain 50% Haste.\n"
        "When you successfully blind the Killer, they also gain 20% Hindered for 6 seconds.\n"
        "Then, this perk goes on cooldown for 40 seconds.",
        NULL, NULL},

    {ALAN, "Deadline", "Échéance","assets/icons/perks/survivors/IconPerks_deadline.png",
        "This perk activates when you are injured.\n"
        "Skill Checks appear 10% more frequently when repairing or healing and appear in random places.\n"
        "The penalty for missing skill checks is reduced by 50%.",
        NULL, NULL},

    {SABLE, "Invocation: Weaving Spiders", "Invocation: Araignées Tisseuses","assets/icons/perks/survivors/IconPerks_invocationWeavingSpiders.png",
        "When in the basement near the circle, press the Ability Button 1 to begin the Invocation.\n"
        "Invocations take 60 seconds. Other Survivors will see your aura during this and can join an ongoing interaction.\n"
        "Once the Invocation is completed:\n"
        "- You become Injured and gain the Broken status effect for the rest of the trial.\n"
        "- Reduce the maximum required generator charges of all remaining generators by 10.\n"
        "Completing the Invocation disables that perk for all Survivors.",
        NULL, NULL},

    {SABLE, "Strength in Shadows", "L'Ombre Fait la Force","assets/icons/perks/survivors/IconPerks_strengthInShadows.png",
        "When in the basement, this perk activates.\n"
        "Unlocks the Strength in Shadows ability, which allows you to heal without a Med-kit at 70% normal healing speed.\n"
        "When you finish a heal in the basement, you see the Killer's aura for 10 seconds.",
        NULL, NULL},

    {SABLE, "Wicked", "Malice","assets/icons/perks/survivors/IconPerks_wicked.png",
        "Your self-unhook attempts in the basement always succeed.\n"
        "When you are unhooked or unhook yourself, you see the Killer's aura for 20 seconds.",
        NULL, NULL},

    {AESTRI, "Bardic Inspiration", "Inspiration Bardique","assets/icons/perks/survivors/IconPerks_bardicInspiration.png",
        "Press and hold the Ability button 1 while standing and motionless to enter the performance interaction that lasts up to 15 seconds and empowers Survivors within 16 meters. Roll a d20. This effect lasts for 90 seconds if the performance is completed.\n"
        "- 1 | You scream, but nothing happens\n"
        "- 2-10 | Skill Checks give +1% progress\n"
        "- 11-19 | Skill Checks give +2% progress\n"
        "- 20 | Skill Checks give +3% progress\n"
        "When the ability is canceled or the performance completes, it goes on cooldown for 90 seconds.",
        NULL, NULL},

    {AESTRI, "Mirrored Illusion", "Illusion du Miroir","assets/icons/perks/survivors/IconPerks_mirroredIllusion.png",
        "This perk activates after completing a total of 20% worth of repairs on generators.\n"
        "Press the Ability button 2 when next to a generator, totem, chest or exit gate to spawn a static illusion that lasts for 60 seconds.\n"
        "Then, the perk deactivates.",
        NULL, NULL},

    {AESTRI, "Still Sight", "Vision Immobile","assets/icons/perks/survivors/IconPerks_stillSight.png",
        "After not moving for 2 seconds, this perk activates.\n"
        "Until you start moving, you see the aura of the Killer as well as all generators and chests within 24 meters.",
        NULL, NULL},

    {LARA, "Finesse", "Finesse","assets/icons/perks/survivors/IconPerks_finesse.png",
        "This perk activates when you are healthy.\n"
        "- Your fast vaults are 20% faster.\n"
        "This perk goes on cooldown for 30 seconds after performing a fast vault.",
        NULL, NULL},

    {LARA, "Hardened", "Endurcie","assets/icons/perks/survivors/IconPerks_hardened.png",
        "This perk activates after you complete all of the following:\n"
        "- Unlock a chest\n"
        "- Cleanse or bless a totem.\n"
        "For the rest of the trial, anytime you would scream, reveal the Killer's aura for 5 seconds instead.",
        NULL, NULL},

    {LARA, "Specialist", "Spécialiste","assets/icons/perks/survivors/IconPerks_specialist.png",
        "Each time you open or rummage through a chest, gain 1 token, up to 6.\n"
        "When you perform a great Skill Check on a generator, consume all tokens. Then, for each token consumed, reduce the maximum required generator progress by 4.",
        NULL, NULL},

    {TREVOR, "Exultation", "Exultation","assets/icons/perks/survivors/IconPerks_Exultation.png",
        "Stunning the Killer with a pallet upgrades your held item rarity to the next tier, then recharges 75% of the item's maximum charges.\n"
        "This perk has a 20-second cooldown.",
        NULL, NULL},

    {TREVOR, "Eyes of Belmont", "Yeux de Belmont","assets/icons/perks/survivors/IconPerks_EyesOfBelmont.png",
        "When a generator is completed, the aura of the Killer is revealed to you for 3 seconds.\n"
        "Whenever a Killer's aura is revealed for a specified amount of time, that time is increased by 2 seconds.",
        NULL, NULL},

    {TREVOR, "Moment of Glory", "Moment de Gloire","assets/icons/perks/survivors/IconPerks_MomentOfGlory.png",
        "This perk activates after you open or rummage through 2 chests.\n"
        "When you become injured, you also become Broken.\n"
        "Automatically heal 1 health state after 60 seconds. Then, this perk deactivates.\n"
        "This effect is canceled if you enter the dying state.\n"
        "This perk will not activate if you are already suffering from the Broken status effect.",
        NULL, NULL},

    {TAURIE, "Clean Break", "Rupture Nette","assets/icons/perks/survivors/IconPerks_cleanBreak.png",
        "After you finish healing another Survivor, while being healed by another Survivor, press the Ability button 1 to gain the Broken status effect.\n"
        "After 60 seconds, you become healthy.\n"
        "This perk does not activate if you are already Broken. The effect is canceled if you go into the dying state.",
        NULL, NULL},

    {TAURIE, "Invocation: Treacherous Crows", "Invocation: Corbeaux Traîtres","assets/icons/perks/survivors/IconPerks_invocationTreacherousCrows.png",
        "When in the basement near the circle, press the Ability button 2 to begin the Invocation.\n"
        "Invocations take 60 seconds. Other Survivors will see your aura during this and can join an ongoing interaction.\n"
        "Once the Invocation is completed:\n"
        "- You become injured and gain the Broken status effect for the rest of the trial.\n"
        "- When a Survivor is in the Terror Radius and the Killer scares a crow, their aura is revealed to all Survivors for 2 seconds.\n"
        "Completing the Invocation disables that perk for all Survivors.",
        NULL, NULL},

    {TAURIE, "Shoulder the Burden", "Endosse le Fardeau","assets/icons/perks/survivors/IconPerks_shoulderTheBurden.png",
        "Once per trial, as long as you are not on death hook, press the Ability button 2 in front of a hooked Survivor to unhook them.\n"
        "When they are unhooked, they lose 1 hook state and you gain 1 hook state. You also scream and gain the Exposed status effect for 40 seconds.",
        NULL, NULL},
};
