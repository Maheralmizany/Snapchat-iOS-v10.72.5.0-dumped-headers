//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensExplorerBaseQueryCoordinator.h"

#import "SCLensChallengesScheduleProtocol.h"

@class NSString, SCLensExplorerDataStore, SCPreferences, SCQueuePerformer, SCTimeProvider;

@interface SCLensChallengesScheduleQueryCoordinator : SCLensExplorerBaseQueryCoordinator <SCLensChallengesScheduleProtocol>
{
    SCLensExplorerDataStore *_dataStore;
    SCPreferences *_userPreferences;
    SCTimeProvider *_dateProvider;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_allItems;
- (id)_scheduleFromResponseData:(id)arg1;
- (id)requestLensChallengesScheduleForceUpdate;
- (id)requestLensChallengesScheduleUpdate;
- (id)lensChallengeWithId:(id)arg1;
- (id)lensChallengesSchedule;
- (id)requestForQuery:(id)arg1;
- (id)initWithRequestManager:(id)arg1 requestProvider:(id)arg2 dataStore:(id)arg3 userPreferences:(id)arg4 dateProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
