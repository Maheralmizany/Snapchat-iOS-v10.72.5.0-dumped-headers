//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface SCSUPUserClearProfileAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientTimestampMsecs; // @dynamic clientTimestampMsecs;
@property(nonatomic) long long serverTimestampMsecs; // @dynamic serverTimestampMsecs;
@property(retain, nonatomic) GPBEnumArray *userProfileFieldsArray; // @dynamic userProfileFieldsArray;
@property(readonly, nonatomic) unsigned long long userProfileFieldsArray_Count; // @dynamic userProfileFieldsArray_Count;

@end

