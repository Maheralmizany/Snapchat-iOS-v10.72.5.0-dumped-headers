//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTInteractRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool ended; // @dynamic ended;
@property(copy, nonatomic) NSString *recipientUserId; // @dynamic recipientUserId;
@property(copy, nonatomic) NSString *verb; // @dynamic verb;

@end
