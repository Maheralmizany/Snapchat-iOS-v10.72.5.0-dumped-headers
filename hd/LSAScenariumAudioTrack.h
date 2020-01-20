//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSObject<OS_dispatch_semaphore>, NSString;

@interface LSAScenariumAudioTrack : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_player;
    NSObject<OS_dispatch_semaphore> *_muteSemaphore;
    NSObject<OS_dispatch_semaphore> *_suspendSemaphore;
    NSObject<OS_dispatch_semaphore> *_callbackSemaphore;
    NSObject<OS_dispatch_semaphore> *_loopsSemaphore;
    double _absoluteTimeBeforeSuspend;
    float _volumeToUnmute;
    id <LSAScenariumAudioTrackDelegate> _delegate;
    CDUnknownBlockType _onFinsihCallback;
    _Bool _muted;
    _Bool _suspended;
    long long _numberOfLoops;
}

- (void).cxx_destruct;
- (void)_finishWithSuccess:(_Bool)arg1;
- (void)_resumePlaybackAfterSuspend;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(readonly) _Bool isPlaying;
@property double currentTime;
@property(readonly) double duration;
@property(nonatomic) float volume;
@property long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void)close;
- (_Bool)stop;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)playWithRepeatCount:(long long)arg1;
- (_Bool)prepareToPlay;
- (void)dealloc;
- (id)initWithContentsPath:(id)arg1 error:(id *)arg2 delegate:(id)arg3 onFinishCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

