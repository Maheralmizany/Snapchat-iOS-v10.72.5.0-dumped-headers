//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCSNTFGetOptInsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *liveStreamOptInsArray; // @dynamic liveStreamOptInsArray;
@property(readonly, nonatomic) unsigned long long liveStreamOptInsArray_Count; // @dynamic liveStreamOptInsArray_Count;
@property(retain, nonatomic) NSMutableArray *ourStoryOptInsArray; // @dynamic ourStoryOptInsArray;
@property(readonly, nonatomic) unsigned long long ourStoryOptInsArray_Count; // @dynamic ourStoryOptInsArray_Count;
@property(retain, nonatomic) NSMutableArray *publisherStoryOptInsArray; // @dynamic publisherStoryOptInsArray;
@property(readonly, nonatomic) unsigned long long publisherStoryOptInsArray_Count; // @dynamic publisherStoryOptInsArray_Count;
@property(retain, nonatomic) NSMutableArray *userStoryOptInsArray; // @dynamic userStoryOptInsArray;
@property(readonly, nonatomic) unsigned long long userStoryOptInsArray_Count; // @dynamic userStoryOptInsArray_Count;

@end

