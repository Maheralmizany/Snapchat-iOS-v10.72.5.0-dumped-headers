//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTWorldEffectSet_EffectVariant : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *effectId; // @dynamic effectId;
@property(copy, nonatomic) NSString *effectURL; // @dynamic effectURL;
@property(nonatomic) double maxZoomLevel; // @dynamic maxZoomLevel;
@property(nonatomic) double minZoomLevel; // @dynamic minZoomLevel;
@property(nonatomic) _Bool onlyPlayOncePerMapSession; // @dynamic onlyPlayOncePerMapSession;
@property(nonatomic) _Bool playsWhenClusterSelected; // @dynamic playsWhenClusterSelected;
@property(nonatomic) int requiredClientVersion; // @dynamic requiredClientVersion;

@end

