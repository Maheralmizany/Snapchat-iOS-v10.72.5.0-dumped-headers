//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2AstSignal;

@interface SCR2Signal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2AstSignal *astSignal; // @dynamic astSignal;
@property(nonatomic) float defaultValue; // @dynamic defaultValue;
@property(nonatomic) _Bool hasAstSignal; // @dynamic hasAstSignal;
@property(copy, nonatomic) NSString *signalName; // @dynamic signalName;

@end

