//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMT1Action, SCMTFriendLocation;

@interface SCMTBatchUserLocationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMT1Action *action; // @dynamic action;
@property(nonatomic) long long assignedSequenceNumber; // @dynamic assignedSequenceNumber;
@property(retain, nonatomic) SCMTFriendLocation *currentLocation; // @dynamic currentLocation;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasCurrentLocation; // @dynamic hasCurrentLocation;
@property(nonatomic) double nextRequestAfterSecs; // @dynamic nextRequestAfterSecs;

@end

