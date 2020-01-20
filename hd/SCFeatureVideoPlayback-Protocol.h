//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVAsset, NSArray, NSIndexSet;

@protocol SCFeatureVideoPlayback
@property(readonly, nonatomic) id <SCBatchCapturePlayerHandler> batchCapturePlayerHandler;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastFrameTime;
@property(nonatomic) struct CGAffineTransform currentViewportTransform;
@property(retain, nonatomic) AVAsset *backgroundAudioAsset;
@property(readonly, nonatomic) id <SCMultiSnapV2PlayerHandler> multiSnapV2PlayerHandler;
- (void)setFrameSources:(NSArray *)arg1;
- (void)startRunningFromBeginning:(void (^)(void))arg1;
- (void)setViewportTransform:(struct CGAffineTransform)arg1;
- (void)enableMultiSnapWithTimeRanges:(NSArray *)arg1 shouldScaleThumbnails:(_Bool)arg2;
- (void)seekToStartOfSnapAtIndex:(long long)arg1;
- (void)setSnapAtIndex:(long long)arg1 enabled:(_Bool)arg2;
- (void)addVideoPlaybackSessionListener:(id <SCImageProcessVideoPlaybackSessionListener>)arg1;
- (NSIndexSet *)selectedSnaps;
- (void)setVolume:(double)arg1;
- (void)showVideo;
- (_Bool)hasVideoAsset;
- (void)setVideoProvider:(id <SCPreviewVideoProvider>)arg1;
- (float)videoAssetNominalFrameRate;
- (double)duration;
- (double)currentVideoPlaybackRate;
- (void)fastForwardToEndAndResume:(void (^)(void))arg1;
- (void)cancelRewinding;
- (void)rewindToBeginningAndResume:(void (^)(void))arg1;
- (void)stopPlayingAndSeekSmoothlyToSeconds:(double)arg1;
- (void)stopVideo;
- (void)resumeVideo;
- (void)pauseVideo;
- (long long)currentPlayingVideoIndex;
- (long long)currentPlayingFrameSourceIndex;
@end

