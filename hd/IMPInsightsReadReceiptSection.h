//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface IMPInsightsReadReceiptSection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *usersArray; // @dynamic usersArray;
@property(readonly, nonatomic) unsigned long long usersArray_Count; // @dynamic usersArray_Count;

@end

