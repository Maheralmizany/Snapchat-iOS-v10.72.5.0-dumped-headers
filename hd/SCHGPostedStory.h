//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, StoryDoc;

@interface SCHGPostedStory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(retain, nonatomic) NSMutableArray *snapViewInfosArray; // @dynamic snapViewInfosArray;
@property(readonly, nonatomic) unsigned long long snapViewInfosArray_Count; // @dynamic snapViewInfosArray_Count;
@property(retain, nonatomic) StoryDoc *story; // @dynamic story;

@end

