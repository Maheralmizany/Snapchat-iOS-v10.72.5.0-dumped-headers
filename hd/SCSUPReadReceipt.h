//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface SCSUPReadReceipt : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *completeStories; // @dynamic completeStories;
@property(retain, nonatomic) NSMutableArray *impressionReceiptsArray; // @dynamic impressionReceiptsArray;
@property(readonly, nonatomic) unsigned long long impressionReceiptsArray_Count; // @dynamic impressionReceiptsArray_Count;
@property(nonatomic) long long lastUpdatedTimestampInMsecs; // @dynamic lastUpdatedTimestampInMsecs;
@property(copy, nonatomic) NSData *readStories; // @dynamic readStories;

@end

