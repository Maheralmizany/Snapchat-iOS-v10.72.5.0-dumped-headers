//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSRRClientInfo;

@interface UserViewHistoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSRRClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;

@end

