//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCRGeoLocation;

@interface SCWAWebAttachmentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCRGeoLocation *location; // @dynamic location;
@property(nonatomic) unsigned int queryId; // @dynamic queryId;
@property(copy, nonatomic) NSString *queryText; // @dynamic queryText;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) long long time; // @dynamic time;

@end

