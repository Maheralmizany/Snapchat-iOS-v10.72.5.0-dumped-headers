//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, SCCPUUID;

@interface SCCPCharmsRestoreResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(retain, nonatomic) SCCPUUID *requestId; // @dynamic requestId;
@property(nonatomic) long long requestTsMs; // @dynamic requestTsMs;
@property(retain, nonatomic) GPBInt32Array *restoredCharmIdsArray; // @dynamic restoredCharmIdsArray;
@property(readonly, nonatomic) unsigned long long restoredCharmIdsArray_Count; // @dynamic restoredCharmIdsArray_Count;

@end
