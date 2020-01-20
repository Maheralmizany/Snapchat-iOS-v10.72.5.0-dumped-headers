//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, NSString;

@interface SCCognacUserAppPreferencesUserAppPreferences : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBBoolValue *acceptedContentAlert; // @dynamic acceptedContentAlert;
@property(retain, nonatomic) GPBBoolValue *acceptedLeaderboardAlert; // @dynamic acceptedLeaderboardAlert;
@property(retain, nonatomic) GPBBoolValue *acceptedLeaderboardGameAlert; // @dynamic acceptedLeaderboardGameAlert;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool hasAcceptedContentAlert; // @dynamic hasAcceptedContentAlert;
@property(nonatomic) _Bool hasAcceptedLeaderboardAlert; // @dynamic hasAcceptedLeaderboardAlert;
@property(nonatomic) _Bool hasAcceptedLeaderboardGameAlert; // @dynamic hasAcceptedLeaderboardGameAlert;
@property(nonatomic) long long updateTimestampMillis; // @dynamic updateTimestampMillis;

@end

