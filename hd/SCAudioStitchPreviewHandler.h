//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAudioStitchPlaybackHandlerDelegate.h"

@class AVPlayer, AVPlayerLayer, NSString, SCAudioStitchPlaybackHandler;

@interface SCAudioStitchPreviewHandler : NSObject <SCAudioStitchPlaybackHandlerDelegate>
{
    SCAudioStitchPlaybackHandler *_playbackHandler;
    id _periodicTimeObserver;
    AVPlayer *_player;
    _Bool _awaitingCanChangeViewport;
    id <SCAudioStitch> _audioStitch;
    AVPlayerLayer *_playerLayer;
}

@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) id <SCAudioStitch> audioStitch; // @synthesize audioStitch=_audioStitch;
- (void).cxx_destruct;
- (void)audioStitchPlaybackHandler:(id)arg1 canChangeViewportDidChange:(_Bool)arg2;
- (void)audioStitchPlaybackHandler:(id)arg1 viewportDidChange:(id)arg2;
- (void)layoutPlayerLayer;
- (void)_updateCurrentViewport;
- (void)attachToPlayerLayer:(id)arg1;
- (void)detachFromPlayerLayer;
- (void)dealloc;
- (id)initWithAudioStitch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

