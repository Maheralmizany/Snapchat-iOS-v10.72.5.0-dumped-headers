//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCStoryLocation;

@interface SCStoryGeofencedGroupStoryExtraData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCStoryLocation *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) int privacyType; // @dynamic privacyType;
@property(nonatomic) double radius; // @dynamic radius;

@end

