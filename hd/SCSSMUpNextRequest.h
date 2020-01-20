//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCCORECompositeStoryId, SCSCORETweaks, SCSSMClientInfo;

@interface SCSSMUpNextRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) SCCORECompositeStoryId *currentStoryId; // @dynamic currentStoryId;
@property(nonatomic) int debug; // @dynamic debug;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasCurrentStoryId; // @dynamic hasCurrentStoryId;
@property(nonatomic) _Bool hasTweaks; // @dynamic hasTweaks;
@property(nonatomic) int origin; // @dynamic origin;
@property(nonatomic) int recommendationType; // @dynamic recommendationType;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) int requestSource; // @dynamic requestSource;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(retain, nonatomic) NSMutableArray *studyInfoArray; // @dynamic studyInfoArray;
@property(readonly, nonatomic) unsigned long long studyInfoArray_Count; // @dynamic studyInfoArray_Count;
@property(nonatomic) int triggeringFeedType; // @dynamic triggeringFeedType;
@property(retain, nonatomic) SCSCORETweaks *tweaks; // @dynamic tweaks;

@end

