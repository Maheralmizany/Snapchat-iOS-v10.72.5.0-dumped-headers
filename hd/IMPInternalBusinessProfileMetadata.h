//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface IMPInternalBusinessProfileMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *publisherIconURL; // @dynamic publisherIconURL;
@property(copy, nonatomic) NSData *publisherMetadata; // @dynamic publisherMetadata;
@property(nonatomic) long long subscriberShardCount; // @dynamic subscriberShardCount;

@end

