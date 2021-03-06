//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCAdSettingsService, SCQueuePerformer;

@interface SCLifestyleCategoriesFeatureManager : NSObject
{
    SCAdSettingsService *_adSettingsService;
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_currentSelections;
    NSMutableDictionary *_updatedUserInterests;
}

- (void).cxx_destruct;
- (void)_updateCurrentSelections:(id)arg1 shouldRevertValue:(_Bool)arg2;
- (void)logLifestyleCategoriesPageViewEvent:(double)arg1;
- (void)updateUserInterestLocally:(id)arg1;
- (void)updateLifestyleCategoriesWithRawUserDataV1:(id)arg1 rawUserDataV2:(id)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchLifestyleCategoriesWithRawUserDataV1:(id)arg1 rawUserDataV2:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithRequestManager:(id)arg1;

@end

