//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSServerSyncToken;

@interface SCSFFSServerPageToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInitialNextSyncToken; // @dynamic hasInitialNextSyncToken;
@property(nonatomic) _Bool hasInitialSyncToken; // @dynamic hasInitialSyncToken;
@property(nonatomic) _Bool hasNextSyncToken; // @dynamic hasNextSyncToken;
@property(retain, nonatomic) SCSFFSServerSyncToken *initialNextSyncToken; // @dynamic initialNextSyncToken;
@property(retain, nonatomic) SCSFFSServerSyncToken *initialSyncToken; // @dynamic initialSyncToken;
@property(nonatomic) long long lastTs; // @dynamic lastTs;
@property(retain, nonatomic) SCSFFSServerSyncToken *nextSyncToken; // @dynamic nextSyncToken;
@property(nonatomic) int requestFeed; // @dynamic requestFeed;

@end

