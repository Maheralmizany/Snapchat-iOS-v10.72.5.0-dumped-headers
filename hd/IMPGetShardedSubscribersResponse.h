//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPGetShardedSubscribersResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *nextPage; // @dynamic nextPage;
@property(retain, nonatomic) NSMutableArray *userIdsArray; // @dynamic userIdsArray;
@property(readonly, nonatomic) unsigned long long userIdsArray_Count; // @dynamic userIdsArray_Count;

@end

