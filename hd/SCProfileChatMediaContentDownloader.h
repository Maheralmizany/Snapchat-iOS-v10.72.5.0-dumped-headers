//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyItemDownloaderHandlerDelegate.h"
#import "SCLegacyItemDownloading.h"

@class NSMutableDictionary, NSString, SCEventListenerAnnouncer, SCLazy, SCQueuePerformer, SCSessionRequestManager;

@interface SCProfileChatMediaContentDownloader : NSObject <SCLegacyItemDownloaderHandlerDelegate, SCLegacyItemDownloading>
{
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
    id <SCChatRequestManager> _chatRequestManager;
    SCLazy *_imageDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSMutableDictionary *_currentLoadings;
}

- (void).cxx_destruct;
- (void)_announceEvent:(id)arg1 item:(id)arg2;
- (void)_announceDidLoadEventWithIsFromCache:(_Bool)arg1 isThumbnail:(_Bool)arg2 item:(id)arg3;
- (_Bool)_shouldEarlyReturnForHandler:(id)arg1;
- (void)_dataFailedToLoadForKey:(id)arg1 handler:(id)arg2 error:(id)arg3;
- (void)_dataLoadedForKey:(id)arg1 image:(id)arg2 handler:(id)arg3 isFromCache:(_Bool)arg4 isThumbnail:(_Bool)arg5;
- (void)_didSuccessFetchingChatMediaWithChatMediaContent:(id)arg1 handler:(id)arg2 isFromCache:(_Bool)arg3;
- (void)_fetchThumbnailFromRawImageForMedia:(id)arg1 dataModel:(id)arg2 handler:(id)arg3;
- (_Bool)_fetchThumbnailImageForMedia:(id)arg1 arroyoDataMode:(id)arg2 dataMode:(id)arg3 handler:(id)arg4;
- (_Bool)_fetchThumbnailImageForMedia:(id)arg1 legacyDataMode:(id)arg2 dataMode:(id)arg3 handler:(id)arg4;
- (void)_loadThumbnailImageForMedia:(id)arg1 inDataMode:(id)arg2 handler:(id)arg3;
- (_Bool)_allHandlersCanceledWithKey:(id)arg1;
- (void)_cancelWithKey:(id)arg1;
- (void)itemDownloaderHandler:(id)arg1 didCancelWithCancelableItem:(id)arg2;
- (void)itemDownloaderHandler:(id)arg1 didCancelWithKey:(id)arg2;
- (void)recordConsumptionOfTrackingId:(id)arg1;
- (void)resetCache;
- (id)loadItem:(id)arg1 itemRemoteDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithRequestManager:(id)arg1 chatRequestManager:(id)arg2 imageDownloader:(id)arg3 eventAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

