//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCLensExplorerSectionIndexProvider : NSObject
{
    NSDictionary *_indexes;
    _Bool _categoriesEnabled;
    unsigned long long _lensChallengesSectionIndex;
    unsigned long long _lensItemsSectionIndex;
    unsigned long long _lensSubscriptionsSectionIndex;
    unsigned long long _lensChallengesSnapSectionIndex;
}

@property(readonly, nonatomic) unsigned long long lensChallengesSnapSectionIndex; // @synthesize lensChallengesSnapSectionIndex=_lensChallengesSnapSectionIndex;
@property(readonly, nonatomic) unsigned long long lensSubscriptionsSectionIndex; // @synthesize lensSubscriptionsSectionIndex=_lensSubscriptionsSectionIndex;
@property(readonly, nonatomic) unsigned long long lensItemsSectionIndex; // @synthesize lensItemsSectionIndex=_lensItemsSectionIndex;
@property(readonly, nonatomic) unsigned long long lensChallengesSectionIndex; // @synthesize lensChallengesSectionIndex=_lensChallengesSectionIndex;
- (void).cxx_destruct;
- (_Bool)isCarouselSectionWithIdentifier:(id)arg1;
- (unsigned long long)indexOfSectionWithIdentifier:(id)arg1;
- (id)_setupIndexStorage;
- (void)_setupSectionsV2;
- (void)_setupSectionsV1;
- (id)initWithStudySettingsProvider:(id)arg1;

@end

