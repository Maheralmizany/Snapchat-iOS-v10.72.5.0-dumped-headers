//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray;

@interface IMPBusiness_Behaviour : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adSetting; // @dynamic adSetting;
@property(nonatomic) _Bool adsEnabled; // @dynamic adsEnabled;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) GPBEnumArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(nonatomic) _Bool isCuratedPublisher; // @dynamic isCuratedPublisher;
@property(nonatomic) _Bool isDeleted; // @dynamic isDeleted;
@property(nonatomic) _Bool isNews; // @dynamic isNews;
@property(nonatomic) _Bool isOfficialAccount; // @dynamic isOfficialAccount;
@property(nonatomic) _Bool isPublisher; // @dynamic isPublisher;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(nonatomic) _Bool isSubscribable; // @dynamic isSubscribable;

@end

