//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaDownloadEntity.h"

@class NSString, SCDataObjectContext, SCExperimentManager, SCQueuePerformer, SCSentinel;

@interface SCMediaDownloadSnapOverlayEntity : NSObject <SCMediaDownloadEntity>
{
    NSString *_UUID;
    id <SCNetworkResumeableDownloadRequest> _overlayDownloadRequest;
    id <SCGallerySnap> _snap;
    SCQueuePerformer *_performer;
    id <SCNetworker> _networker;
    SCExperimentManager *_experimentManager;
    id <SCSyncFileResolver> _fileResolver;
    id <SCMediaDownloadLogger> _logger;
    SCDataObjectContext *_dataObjectContext;
    SCSentinel *_sentinel;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isCancelled;
- (void)_processDownloadURLWithResponse:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_fetchDownloadURLWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_handleSuccessResponseWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_logDownloadCompletionWithLatencyInSec:(double)arg1 error:(id)arg2 response:(id)arg3;
- (void)_resumeOverlayDataWithResultHandler:(CDUnknownBlockType)arg1;
- (void)resumeWithResultHandler:(CDUnknownBlockType)arg1;
- (void)cancelByProducingResumeData;
- (id)UUID;
- (id)initWithSnap:(id)arg1 performer:(id)arg2 networker:(id)arg3 experimentManager:(id)arg4 fileResolver:(id)arg5 dataObjectContext:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

