//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCameraScreenDataProviderProtocol.h"
#import "SCLensDataFetchingMediatorDelegate.h"
#import "SCTraceEnabled.h"

@class NSArray, NSString, SCLens, SCLensDataFetchingMediator, SCLensDataProviderListenerAnnouncer;

@interface SCAdsCameraLensDataProvider : NSObject <SCTraceEnabled, SCLensDataFetchingMediatorDelegate, SCLensCameraScreenDataProviderProtocol>
{
    NSArray *_categoryIds;
    NSArray *_unlockedLenses;
    SCLensDataProviderListenerAnnouncer *_announcer;
    SCLensDataFetchingMediator *_dataFetchingMediator;
    SCLens *_selectedLens;
    _Bool _showBirthdayReplyLens;
}

@property(nonatomic) _Bool showBirthdayReplyLens; // @synthesize showBirthdayReplyLens=_showBirthdayReplyLens;
- (void).cxx_destruct;
- (void)updateLenses;
- (void)setCategoryIds:(id)arg1;
- (void)lensDataFetchingMediatorUpdateLenses:(id)arg1;
- (void)lensDataFetchingMediatorDidStopUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediatorDidStartUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediator:(id)arg1 didUpdateContentForLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)stopUpdatingLensDataWithToken:(id)arg1;
- (id)startUpdatingLensData;
- (_Bool)isFetchingLens:(id)arg1;
- (void)fetchLensesIfNeeded;
- (void)fetchLens:(id)arg1;
- (void)setSelectedLens:(id)arg1;
- (id)selectedLens;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)lensToPreselect;
- (id)firstApplicableLens;
- (id)originalLens;
- (_Bool)isRegressorNeeded;
- (id)applicableContext;
- (void)setCategoryIds:(id)arg1 devicePosition:(long long)arg2 applicableContext:(id)arg3;
- (void)setCategoryIds:(id)arg1 devicePosition:(long long)arg2;
- (void)setDevicePosition:(long long)arg1;
- (id)categoryIds;
- (void)updateDownloadableData;
- (id)lensForId:(id)arg1;
- (void)clearLenses;
- (void)updateLenses:(id)arg1;
- (id)lenses;
- (void)warmUp;
- (id)initWithLensDataFetcher:(id)arg1 lensDataPrefetcher:(id)arg2 lensThumbnailLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

