//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2GoToMapAction, SCR2ShowMoreBusinessHourAction, SCR2ShowPlaceAction, SCR2TakeSnapAction, SCR2TextSearchAction;

@interface SCR2CardAttachment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(copy, nonatomic) NSString *displayText; // @dynamic displayText;
@property(retain, nonatomic) SCR2GoToMapAction *goToMap; // @dynamic goToMap;
@property(retain, nonatomic) SCR2ShowMoreBusinessHourAction *showMoreBusinessHour; // @dynamic showMoreBusinessHour;
@property(retain, nonatomic) SCR2ShowPlaceAction *showPlace; // @dynamic showPlace;
@property(retain, nonatomic) SCR2TakeSnapAction *takeSnap; // @dynamic takeSnap;
@property(retain, nonatomic) SCR2TextSearchAction *textSearch; // @dynamic textSearch;
@property(nonatomic) int type; // @dynamic type;

@end

