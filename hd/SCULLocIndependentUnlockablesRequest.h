//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, NSMutableArray, SCULRequestInfo;

@interface SCULLocIndependentUnlockablesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64ObjectDictionary *checksums; // @dynamic checksums;
@property(readonly, nonatomic) unsigned long long checksums_Count; // @dynamic checksums_Count;
@property(nonatomic) _Bool hasRequestInfo; // @dynamic hasRequestInfo;
@property(retain, nonatomic) NSMutableArray *purposeArray; // @dynamic purposeArray;
@property(readonly, nonatomic) unsigned long long purposeArray_Count; // @dynamic purposeArray_Count;
@property(retain, nonatomic) SCULRequestInfo *requestInfo; // @dynamic requestInfo;

@end

