//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBMediaCountsMessage, NSString;

@interface MLBUserMediaCountsMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMediaCounts; // @dynamic hasMediaCounts;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) MLBMediaCountsMessage *mediaCounts; // @dynamic mediaCounts;
@property(copy, nonatomic) NSString *user; // @dynamic user;

@end
