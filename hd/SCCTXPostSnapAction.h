//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCTXAction, SCCTXImage;

@interface SCCTXPostSnapAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCTXAction *action; // @dynamic action;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(retain, nonatomic) SCCTXImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

