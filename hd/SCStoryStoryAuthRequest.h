//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCStoryLocation;

@interface SCStoryStoryAuthRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double accuracyInMeters; // @dynamic accuracyInMeters;
@property(retain, nonatomic) SCStoryLocation *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) long long requestTsMs; // @dynamic requestTsMs;
@property(nonatomic) int source; // @dynamic source;

@end
