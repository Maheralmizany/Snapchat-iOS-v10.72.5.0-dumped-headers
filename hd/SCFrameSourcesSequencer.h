//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessVideoPlaybackSessionListener.h"

@class NSArray, NSString, SCFrameSourcesBatch;

@interface SCFrameSourcesSequencer : NSObject <SCImageProcessVideoPlaybackSessionListener>
{
    _Bool _isIndividualLooping;
    _Bool _playedToSnapEndTime;
    _Bool _seekingInProgress;
    _Bool _isReversePlaybackEnabled;
    id <SCFrameSource> _currentFrameSource;
    unsigned long long _currentSnapIndex;
    id <SCFrameSourcesSequencerDelegate> _delegate;
    SCFrameSourcesBatch *_sourcesBatch;
    NSArray *_frameSources;
    long long _currentFrameSourceIndex;
}

@property(nonatomic) long long currentFrameSourceIndex; // @synthesize currentFrameSourceIndex=_currentFrameSourceIndex;
@property(retain, nonatomic) NSArray *frameSources; // @synthesize frameSources=_frameSources;
@property(retain, nonatomic) SCFrameSourcesBatch *sourcesBatch; // @synthesize sourcesBatch=_sourcesBatch;
@property(nonatomic) __weak id <SCFrameSourcesSequencerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReversePlaybackEnabled; // @synthesize isReversePlaybackEnabled=_isReversePlaybackEnabled;
@property(nonatomic) _Bool seekingInProgress; // @synthesize seekingInProgress=_seekingInProgress;
@property(nonatomic) _Bool playedToSnapEndTime; // @synthesize playedToSnapEndTime=_playedToSnapEndTime;
@property(nonatomic) _Bool isIndividualLooping; // @synthesize isIndividualLooping=_isIndividualLooping;
@property(readonly, nonatomic) unsigned long long currentSnapIndex; // @synthesize currentSnapIndex=_currentSnapIndex;
@property(readonly, nonatomic) id <SCFrameSource> currentFrameSource; // @synthesize currentFrameSource=_currentFrameSource;
- (void).cxx_destruct;
- (void)videoPlaybackSession:(id)arg1 willRenderFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)_onChangeToSourceAtIndex:(long long)arg1 snapIndex:(long long)arg2;
- (_Bool)_isPlayTime:(CDStruct_1b6d18a9)arg1 afterSourceAtIndex:(long long)arg2 snapIndex:(long long)arg3;
- (void)advanceToSourceIndex:(long long)arg1 sourceMultiSnapIndex:(long long)arg2;
- (void)advance;
- (id)currentImageSource;
- (id)currentVideoSource;
- (id)initWithFrameSourcesBatch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
