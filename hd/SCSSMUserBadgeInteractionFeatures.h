//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class BadgeMetadata;

@interface SCSSMUserBadgeInteractionFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BadgeMetadata *badgeMetadata; // @dynamic badgeMetadata;
@property(nonatomic) _Bool hasBadgeMetadata; // @dynamic hasBadgeMetadata;
@property(nonatomic) int interactionEvent; // @dynamic interactionEvent;
@property(nonatomic) unsigned long long interactionTsMsec; // @dynamic interactionTsMsec;
@property(nonatomic) unsigned long long totalImpressionMsec; // @dynamic totalImpressionMsec;

@end

