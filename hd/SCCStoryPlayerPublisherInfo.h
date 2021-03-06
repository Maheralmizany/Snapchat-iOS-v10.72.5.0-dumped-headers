//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCCStoryPlayerPublisherInfo : SCComposerMarshallableObject
{
    NSString *_businessProfileId;
    NSString *_publisherId;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherDescription;
    NSString *_logoUrl;
    NSString *_deeplinkUrl;
    NSNumber *_unskippableAdsEnabled;
    NSNumber *_isBreakingNewsEnabled;
}

@property(retain, nonatomic) NSNumber *isBreakingNewsEnabled; // @synthesize isBreakingNewsEnabled=_isBreakingNewsEnabled;
@property(retain, nonatomic) NSNumber *unskippableAdsEnabled; // @synthesize unskippableAdsEnabled=_unskippableAdsEnabled;
@property(copy, nonatomic) NSString *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
@property(copy, nonatomic) NSString *publisherFormalName; // @synthesize publisherFormalName=_publisherFormalName;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBusinessProfileId:(id)arg1 publisherId:(id)arg2 publisherName:(id)arg3 publisherFormalName:(id)arg4 publisherDescription:(id)arg5 logoUrl:(id)arg6 deeplinkUrl:(id)arg7 unskippableAdsEnabled:(id)arg8;
- (id)initWithBusinessProfileId:(id)arg1 publisherId:(id)arg2 publisherName:(id)arg3 publisherFormalName:(id)arg4 publisherDescription:(id)arg5 logoUrl:(id)arg6 deeplinkUrl:(id)arg7 unskippableAdsEnabled:(id)arg8 isBreakingNewsEnabled:(id)arg9;

@end

