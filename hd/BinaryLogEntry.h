//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBAny, NSString;

@interface BinaryLogEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationKey; // @dynamic applicationKey;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(retain, nonatomic) GPBAny *payload; // @dynamic payload;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMsecs; // @dynamic requestTimestampMsecs;
@property(nonatomic) long long timestampMsecs; // @dynamic timestampMsecs;

@end

