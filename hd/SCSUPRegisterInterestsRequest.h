//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPRegisterInterestsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long requestTsMsecs; // @dynamic requestTsMsecs;
@property(retain, nonatomic) NSMutableArray *requestsArray; // @dynamic requestsArray;
@property(readonly, nonatomic) unsigned long long requestsArray_Count; // @dynamic requestsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

