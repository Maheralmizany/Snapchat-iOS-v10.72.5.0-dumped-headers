//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSNTFLiveStreamId, SCSNTFOurStoryId, SCSNTFPublisherStoryId, SCSNTFUserStoryId;

@interface SCSNTFNotificationEntityId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int idOneOfCase; // @dynamic idOneOfCase;
@property(retain, nonatomic) SCSNTFLiveStreamId *liveStreamId; // @dynamic liveStreamId;
@property(retain, nonatomic) SCSNTFOurStoryId *ourStoryId; // @dynamic ourStoryId;
@property(retain, nonatomic) SCSNTFPublisherStoryId *publisherStoryId; // @dynamic publisherStoryId;
@property(retain, nonatomic) SCSNTFUserStoryId *userStoryId; // @dynamic userStoryId;

@end
