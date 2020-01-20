//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProgressOverlayViewDelegate.h"

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString, SCGallerySendItemsCounter, SCGallerySmartSharing, SCProgressOverlayView, SCUserSession, UIViewController;

@interface SCGalleryPrepareMediaForSnapsOperation : NSObject <SCProgressOverlayViewDelegate>
{
    SCUserSession *_userSession;
    NSArray *_gallerySnaps;
    UIViewController *_containerViewController;
    _Bool _showsProgressOverlay;
    SCGallerySendItemsCounter *_sendItemsCounter;
    SCGallerySmartSharing *_gallerySmartSharing;
    unsigned long long _smartSharingDestinations;
    NSMutableDictionary *_smartSharedMediaIds;
    NSMutableSet *_smartSharingFailures;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _longRunning;
    NSArray *_gallerySnapsToDownloadMedia;
    SCProgressOverlayView *_progressOverlayView;
    NSDictionary *_cloudFiles;
    id <SCProgressReporting><SCCanceling> _downloadRequest;
    _Bool _running;
    _Bool _completed;
    _Bool _succeeded;
    _Bool _cancelled;
    NSError *_error;
    double _startTime;
    unsigned long long _totalImages;
    unsigned long long _totalVideos;
    unsigned long long _totalDownloadedImages;
    unsigned long long _totalDownloadedVideos;
    unsigned long long _totalSmartShareableImages;
    unsigned long long _totalSmartShareableVideos;
    unsigned long long _totalUnSyncedImages;
    unsigned long long _totalUnSyncedVideos;
}

- (void).cxx_destruct;
- (void)_log;
- (void)_updateDownloadedLoggingWithSnap:(id)arg1;
- (void)_updateSmartShareLoggingWithSnap:(id)arg1;
- (void)_complete;
- (void)_updateProgress:(float)arg1;
- (void)_downloadSnapMedia:(id)arg1 index:(unsigned long long)arg2;
- (void)_trySmartSharingSnap:(id)arg1 index:(unsigned long long)arg2;
- (void)_prepareMediaForIndex:(unsigned long long)arg1;
- (long long)_destinationForSmartShareRequest;
- (_Bool)_eligibleForSkipDownload:(id)arg1;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)cancel;
- (void)runWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isLongRunning;
- (id)initWithGalleryEntries:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(_Bool)arg3 userSession:(id)arg4;
- (id)initWithGallerySnaps:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(_Bool)arg3 smartSharingDestinations:(unsigned long long)arg4 sendItemsCounter:(id)arg5 userSession:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

