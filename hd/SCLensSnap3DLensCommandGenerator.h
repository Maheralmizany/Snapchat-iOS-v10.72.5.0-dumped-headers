//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCExperimentManager, SCLens, SCLensDataFetcher, SCLensSnap3DAssetMetadata;

@interface SCLensSnap3DLensCommandGenerator : NSObject <SCTraceEnabled>
{
    SCLensDataFetcher *_lensDataFetcher;
    SCExperimentManager *_experimentManager;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    SCLens *_activeLens;
    CDUnknownBlockType _lensCommandGenerationCompletion;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
}

- (void).cxx_destruct;
- (void)_tryActivatingLensWithId:(id)arg1;
- (void)_setBundledLensActive;
- (void)_fetchLens:(id)arg1;
- (id)_createLensCommandWithRemoteAssetsProvider:(id)arg1 uriServiceProvider:(id)arg2 snap3DMetadata:(id)arg3;
- (void)_completeLensCommandGeneration:(_Bool)arg1;
- (void)generateSnap3DLensWithId:(id)arg1 snap3DAssetMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLensDataFetcher:(id)arg1 lensUnlocker:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
