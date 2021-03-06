//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryEntryThumbnailGenerating.h"

@class NSArray, NSString, SCUserSession;

@interface SCGalleryEntryThumbnailGenerator : NSObject <SCGalleryEntryThumbnailGenerating>
{
    SCUserSession *_userSession;
    id <SCGalleryEntry> _entry;
    struct CGSize _targetSize;
    CDStruct_bac8f6e9 _mediaScenePath;
    id <SCGalleryEntry> _latestEntry;
    double _snapsDuration;
    NSArray *_latestSnapsToShowThumbnail;
    long long _indexOfSnapForStoryThumbnail;
    _Bool _generatingUpdates;
    id _timerObserveContext;
    id <SCCachingMediaRequest> _cachingMediaRequest;
    id <SCCanceling> _miniThumbnailRequest;
    CDUnknownBlockType _miniThumbnailBlock;
    double _latestThumbnailStartDisplayingTime;
    unsigned long long _generationContext;
    id <SCGalleryEntryThumbnailGeneratorDelegate> _delegate;
    id <SCProgressReceiving> _progressReceiver;
}

+ (id)dispatchQueue;
+ (id)invertedStoryOverlayForTargetSize:(struct CGSize)arg1;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
@property(nonatomic) __weak id <SCGalleryEntryThumbnailGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_receiveProgressUpdateFromCachingMediaRequest:(id)arg1;
- (double)_totalSnapsDurationForSnaps:(id)arg1;
- (_Bool)_shouldLogThumbnailLatency;
- (void)_logThumbnailLoadingEndWithDidShowUp:(_Bool)arg1 snap:(id)arg2;
- (void)_updateLatestSnapsToShowThumbnail;
- (void)_generateThumbnailForStoryEntry;
- (void)_generateThumbnailForSnapEntry;
- (void)_storyThumbnailUpdateTimerDidFire;
- (void)_cancelMiniThumbnailBlock;
- (void)_scheduleLoadingIndicator;
- (void)_loadMiniThumbnailIfPossible;
- (void)_updateThumbnailWithLatestEntry:(id)arg1 latestSnaps:(id)arg2;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 entry:(id)arg2 targetSize:(struct CGSize)arg3 mediaScenePath:(CDStruct_bac8f6e9)arg4 generationContext:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

