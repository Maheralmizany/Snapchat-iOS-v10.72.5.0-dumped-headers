//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPGetSubscribersResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long count; // @dynamic count;
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSMutableArray *subscribersArray; // @dynamic subscribersArray;
@property(readonly, nonatomic) unsigned long long subscribersArray_Count; // @dynamic subscribersArray_Count;

@end

