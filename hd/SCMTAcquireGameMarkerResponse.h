//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMT1Sticker, SCMTFriendGameScore, SCMTFriendLocation;

@interface SCMTAcquireGameMarkerResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMT1Sticker *actionSticker; // @dynamic actionSticker;
@property(retain, nonatomic) SCMTFriendLocation *currentLocation; // @dynamic currentLocation;
@property(nonatomic) _Bool didAcquireGameMarker; // @dynamic didAcquireGameMarker;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;
@property(nonatomic) _Bool hasCurrentLocation; // @dynamic hasCurrentLocation;
@property(nonatomic) _Bool hasScore; // @dynamic hasScore;
@property(retain, nonatomic) SCMTFriendGameScore *score; // @dynamic score;

@end

