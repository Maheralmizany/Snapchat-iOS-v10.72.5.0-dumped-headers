//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCSSMPromotedStoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *adData; // @dynamic adData;
@property(copy, nonatomic) NSData *encryptedAdTrackData; // @dynamic encryptedAdTrackData;
@property(copy, nonatomic) NSData *encryptedUserTrackData; // @dynamic encryptedUserTrackData;
@property(copy, nonatomic) NSString *jsonTrackURL; // @dynamic jsonTrackURL;
@property(copy, nonatomic) NSString *protoTrackURL; // @dynamic protoTrackURL;
@property(copy, nonatomic) NSData *requestId; // @dynamic requestId;
@property(copy, nonatomic) NSData *serveItemId; // @dynamic serveItemId;
@property(copy, nonatomic) NSString *trackURL; // @dynamic trackURL;

@end

