//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCCognacExternalUserProfilesBatchGetExternalUserProfileRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSMutableArray *userInfosArray; // @dynamic userInfosArray;
@property(readonly, nonatomic) unsigned long long userInfosArray_Count; // @dynamic userInfosArray_Count;

@end

