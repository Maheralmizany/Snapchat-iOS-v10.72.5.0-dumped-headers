//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSString;

@interface SCCognacLeaderboardsLeaderboard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool hasLastUpdateTimestamp; // @dynamic hasLastUpdateTimestamp;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) GPBTimestamp *lastUpdateTimestamp; // @dynamic lastUpdateTimestamp;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int orderingType; // @dynamic orderingType;
@property(nonatomic) long long scoreDecimalOffset; // @dynamic scoreDecimalOffset;
@property(copy, nonatomic) NSString *scoreIconURL; // @dynamic scoreIconURL;
@property(nonatomic) int scoreType; // @dynamic scoreType;

@end

