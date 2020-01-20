//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchattersDataRequestListener.h"

@class NSString, SCCircumstanceEngine, SCCreatorSettingsDataTracker, SCDocObjectContext, SCLazy, SCPreferences, SCQueuePerformer, SCSessionRequestManager;

@interface SCCreatorSettingsDataStore : NSObject <SCSnapchattersDataRequestListener>
{
    SCCircumstanceEngine *_circumstanceEngine;
    SCCreatorSettingsDataTracker *_creatorSettingsDataTracker;
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_updatePerformer;
    SCSessionRequestManager *_requestManager;
    SCLazy *_snapTokenProvider;
    NSString *_userId;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)_completeCreatorSettingsUpdate:(id)arg1 isSubscribing:(_Bool)arg2;
- (void)_updateCreatorSettingsForSnapchatter:(id)arg1 isSubscribing:(_Bool)arg2;
- (void)_completeCreatorSettingsDataStoreOverride;
- (void)_overrideCreatorSettingsDataStore:(id)arg1;
- (void)_fetchCreatorSettingsWithAccessToken:(id)arg1;
- (void)_refreshCreatorSettings;
- (void)_checkIfCreatorSettingsStale:(_Bool)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1 creatorSettingsDataTracker:(id)arg2 circumstanceEngine:(id)arg3 requestManager:(id)arg4 snapTokenProvider:(id)arg5 userPreferences:(id)arg6 userID:(id)arg7 isFromLogin:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

