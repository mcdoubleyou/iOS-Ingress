//
//  Utilities.h
//  Ingress
//
//  Created by Alex Studnička on 04.06.13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <Foundation/Foundation.h>

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#ifndef CHAT_FONT_SIZE
#define CHAT_FONT_SIZE 14
#endif

typedef enum {
	ItemRarityVeryCommon,
	ItemRarityCommon,
	ItemRarityLessCommon,
	ItemRarityRare,
	ItemRarityVeryRare,
	ItemRarityExtraRare,
	ItemRarityUnknown = -1
} ItemRarity;

typedef enum {
	ItemTypeResonator,
	ItemTypeXMP,
	ItemTypePortalShield,
	ItemTypePowerCube,
	ItemTypeFlipCard,
	ItemTypeForceAmp,
	ItemTypeHeatsink,
	ItemTypeLinkAmp,
	ItemTypeMultihack,
	ItemTypeTurret,
	ItemTypeUnknown = -1
} ItemType;

@interface Utilities : NSObject

+ (BOOL)isPad;
+ (BOOL)isOS7;

+ (void)showWarningWithTitle:(NSString *)title;

+ (NSDictionary *)attributesWithShadow:(BOOL)shadow size:(CGFloat)size color:(UIColor *)color;

+ (UIColor *)colorForRarity:(ItemRarity)rarity;
+ (NSString *)rarityStringFromRarity:(ItemRarity)rarity;
+ (ItemRarity)rarityFromString:(NSString *)rarityStr;
+ (ItemRarity)rarityFromInt:(int)rarityInt;

+ (ItemType)itemTypeFromModInt:(int)modInt;

+ (int)levelForAp:(int)ap;
+ (int)maxApForLevel:(int)level;
+ (int)maxXmForLevel:(int)level;
+ (int)maxEnergyForResonatorLevel:(int)level;

+ (NSString *)factionStrForFaction:(NSString *)faction;

+ (UIColor *)colorForLevel:(int)level;
+ (UIColor *)colorForFaction:(NSString *)faction;

+ (UIImage *)iconForPortal:(Portal *)portal;

@end
