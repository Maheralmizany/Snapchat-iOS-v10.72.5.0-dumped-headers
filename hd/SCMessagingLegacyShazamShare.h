//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMessagingMediaMetadata;

@interface SCMessagingLegacyShazamShare : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *attachedURL; // @dynamic attachedURL;
@property(nonatomic) _Bool hasMedia; // @dynamic hasMedia;
@property(retain, nonatomic) SCMessagingMediaMetadata *media; // @dynamic media;

@end

