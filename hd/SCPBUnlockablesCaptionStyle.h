//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBUnlockablesBackgroundStyle, SCPBUnlockablesFontStyle;

@interface SCPBUnlockablesCaptionStyle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBUnlockablesBackgroundStyle *backgroundStyle; // @dynamic backgroundStyle;
@property(copy, nonatomic) NSString *baseColor; // @dynamic baseColor;
@property(nonatomic) _Bool colorChangeable; // @dynamic colorChangeable;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) SCPBUnlockablesFontStyle *fontStyle; // @dynamic fontStyle;
@property(nonatomic) _Bool hasBackgroundStyle; // @dynamic hasBackgroundStyle;
@property(nonatomic) _Bool hasFontStyle; // @dynamic hasFontStyle;
@property(nonatomic) _Bool isWifiOnly; // @dynamic isWifiOnly;
@property(copy, nonatomic) NSString *styleId; // @dynamic styleId;

@end

