//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSUPInterests : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *interestTabCategoriesArray; // @dynamic interestTabCategoriesArray;
@property(readonly, nonatomic) unsigned long long interestTabCategoriesArray_Count; // @dynamic interestTabCategoriesArray_Count;
@property(nonatomic) long long lastUpdatedTimestampInMsecs; // @dynamic lastUpdatedTimestampInMsecs;
@property(retain, nonatomic) NSMutableArray *scoredInterestGroupsArray; // @dynamic scoredInterestGroupsArray;
@property(readonly, nonatomic) unsigned long long scoredInterestGroupsArray_Count; // @dynamic scoredInterestGroupsArray_Count;
@property(retain, nonatomic) NSMutableArray *scoredInterestsArray; // @dynamic scoredInterestsArray;
@property(readonly, nonatomic) unsigned long long scoredInterestsArray_Count; // @dynamic scoredInterestsArray_Count;
@property(retain, nonatomic) NSMutableArray *scoredSccArray; // @dynamic scoredSccArray;
@property(readonly, nonatomic) unsigned long long scoredSccArray_Count; // @dynamic scoredSccArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

