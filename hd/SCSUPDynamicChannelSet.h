//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPDynamicChannelSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dynamicChannelsArray; // @dynamic dynamicChannelsArray;
@property(readonly, nonatomic) unsigned long long dynamicChannelsArray_Count; // @dynamic dynamicChannelsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
