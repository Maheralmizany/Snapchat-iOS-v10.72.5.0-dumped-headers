//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCACHUserAchievementCountInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *countsArray; // @dynamic countsArray;
@property(readonly, nonatomic) unsigned long long countsArray_Count; // @dynamic countsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

