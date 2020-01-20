//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureArches.h"

@class NSData, NSString, SCDisposableObserver, SCMusicServices, SCMusicTrack;

@interface SCPreviewFeatureArchesImpl : SCFeature <SCPreviewFeatureArches>
{
    SCMusicTrack *_track;
    id <SCPreviewFeatureAudioPlayback> _audioPlayback;
    SCMusicServices *_musicServices;
    id <SCArchesIconProvider> _iconProvider;
    SCDisposableObserver *_playbackObserver;
}

@property(retain, nonatomic) SCDisposableObserver *playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) id <SCArchesIconProvider> iconProvider; // @synthesize iconProvider=_iconProvider;
@property(readonly, nonatomic) __weak SCMusicServices *musicServices; // @synthesize musicServices=_musicServices;
@property(readonly, nonatomic) __weak id <SCPreviewFeatureAudioPlayback> audioPlayback; // @synthesize audioPlayback=_audioPlayback;
@property(retain, nonatomic) SCMusicTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)_play;
- (void)pauseTrack;
- (void)playTrack;
@property(readonly, nonatomic) NSData *audio;
- (_Bool)shouldShowInToolbar;
- (id)toolbarItemConfiguration;
- (id)initWithIconProvider:(id)arg1 musicServices:(id)arg2 audioPlayback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
