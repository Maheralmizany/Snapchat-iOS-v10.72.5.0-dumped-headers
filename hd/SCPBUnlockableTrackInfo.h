//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCPBUnlockableTrackInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adServeRequestId; // @dynamic adServeRequestId;
@property(copy, nonatomic) NSString *adTrackURL; // @dynamic adTrackURL;
@property(copy, nonatomic) NSString *batchTrackURL; // @dynamic batchTrackURL;
@property(copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @dynamic encryptedSponsoredUnlockableTargetingInfoData;
@property(copy, nonatomic) NSString *encryptedUserTrackData; // @dynamic encryptedUserTrackData;
@property(copy, nonatomic) NSString *jsonTrackURL; // @dynamic jsonTrackURL;
@property(copy, nonatomic) NSString *protoTrackURL; // @dynamic protoTrackURL;
@property(copy, nonatomic) NSString *rankingData; // @dynamic rankingData;
@property(copy, nonatomic) NSString *rankingId; // @dynamic rankingId;
@property(copy, nonatomic) NSString *rawAdData; // @dynamic rawAdData;
@property(nonatomic) _Bool skipTrack; // @dynamic skipTrack;

@end

