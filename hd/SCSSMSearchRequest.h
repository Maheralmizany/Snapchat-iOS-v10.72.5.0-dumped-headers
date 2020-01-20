//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSCORETweaks, SCSSMClientInfo, SCSSMSearchRequest_Query;

@interface SCSSMSearchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) int debug; // @dynamic debug;
@property(nonatomic) int entryPoint; // @dynamic entryPoint;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasTweaks; // @dynamic hasTweaks;
@property(nonatomic) int mask; // @dynamic mask;
@property(nonatomic) int origin; // @dynamic origin;
@property(retain, nonatomic) SCSSMSearchRequest_Query *query; // @dynamic query;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(retain, nonatomic) NSMutableArray *studyInfoArray; // @dynamic studyInfoArray;
@property(readonly, nonatomic) unsigned long long studyInfoArray_Count; // @dynamic studyInfoArray_Count;
@property(retain, nonatomic) SCSCORETweaks *tweaks; // @dynamic tweaks;

@end
