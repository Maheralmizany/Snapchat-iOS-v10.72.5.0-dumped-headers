//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTFriendGameScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isScoreSharable; // @dynamic isScoreSharable;
@property(nonatomic) int lastAcquiredEggColor; // @dynamic lastAcquiredEggColor;
@property(copy, nonatomic) NSString *lastAcquiredEggPattern; // @dynamic lastAcquiredEggPattern;
@property(copy, nonatomic) NSString *lastAcquiredLocality; // @dynamic lastAcquiredLocality;
@property(nonatomic) long long lastAcquiredTimeMs; // @dynamic lastAcquiredTimeMs;
@property(nonatomic) int score; // @dynamic score;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

