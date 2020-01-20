//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSString, PHFetchResult, SCQueuePerformer;

@interface SCGalleryPhotoLibraryFetcher : NSObject <PHPhotoLibraryChangeObserver>
{
    SCQueuePerformer *_performer;
    unsigned long long _resultType;
    _Bool _observesChange;
    CDUnknownBlockType _resultHandler;
    _Bool _didFireFetch;
    _Bool _didSetupFetch;
    _Bool _isInBackground;
    _Bool _didChangeInBackground;
    id <NSObject> _photoPermissionDeterminedNotificationObserver;
    PHFetchResult *_fetchResult;
}

- (void).cxx_destruct;
- (void)_didEnterBackground;
- (void)_willEnterForeground;
- (void)_notifyWithFetchResult:(id)arg1;
- (void)_fetchPhotoAssets;
- (_Bool)_needsRefetchPhotoAssetsForChange:(id)arg1;
- (void)_setupFetch;
- (void)photoLibraryDidChange:(id)arg1;
- (void)fetchWithResultType:(unsigned long long)arg1 observesChange:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

