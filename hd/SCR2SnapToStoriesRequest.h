//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2SnapToStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool includeStoryMetadata; // @dynamic includeStoryMetadata;
@property(retain, nonatomic) NSMutableArray *rawSnapIdArray; // @dynamic rawSnapIdArray;
@property(readonly, nonatomic) unsigned long long rawSnapIdArray_Count; // @dynamic rawSnapIdArray_Count;

@end

