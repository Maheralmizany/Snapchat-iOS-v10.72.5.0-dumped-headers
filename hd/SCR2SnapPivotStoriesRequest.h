//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2SnapPivotInfo;

@interface SCR2SnapPivotStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool excludeNearby; // @dynamic excludeNearby;
@property(nonatomic) _Bool hasPivotInfo; // @dynamic hasPivotInfo;
@property(nonatomic) _Bool isProbe; // @dynamic isProbe;
@property(retain, nonatomic) SCR2SnapPivotInfo *pivotInfo; // @dynamic pivotInfo;

@end

