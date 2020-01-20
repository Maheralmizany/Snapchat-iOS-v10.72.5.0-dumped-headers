//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCScanFromLensUpdateProvider.h"

@class NSMutableSet, NSString, SCExperimentManager, SCLazy, SCObservable, SCPublishSubject, SCQueuePerformer;

@interface SCScanFromLensHTTPSUpdateProvider : NSObject <SCScanFromLensUpdateProvider>
{
    id <SCRequestManager> _requestManager;
    SCLazy *_snapTokenProvider;
    SCExperimentManager *_experimentManager;
    SCPublishSubject *_scanFromLensNetworkUpdateObservable;
    NSMutableSet *_currentRequestIds;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_requestForSFLRequest:(id)arg1 token:(id)arg2;
- (id)_sflRequestForImage:(id)arg1 contexts:(id)arg2 isFrontFacing:(_Bool)arg3;
- (void)_handleFailureForSFLRequest:(id)arg1 error:(id)arg2;
- (void)_handleSuccessForSFLRequest:(id)arg1 jsonResponse:(id)arg2;
- (void)_handleSnapTokenSuccessWithRequest:(id)arg1 token:(id)arg2;
- (void)_setupTimeoutForSFLRequest:(id)arg1;
@property(readonly, nonatomic) SCObservable *scanFromLensNetworkUpdateObservable;
- (id)performAnalysisForImage:(id)arg1 contexts:(id)arg2 isFrontFacing:(_Bool)arg3;
- (id)initWithRequestManager:(id)arg1 snapTokenProvider:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

