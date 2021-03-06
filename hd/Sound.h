//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString, NSTimer, NSURL;

@interface Sound : NSObject <AVAudioPlayerDelegate>
{
    float _baseVolume;
    float _startVolume;
    float _targetVolume;
    NSURL *_URL;
    CDUnknownBlockType _completionHandler;
    double _fadeTime;
    double _fadeStart;
    NSTimer *_timer;
    Sound *_selfReference;
    AVAudioPlayer *_sound;
}

+ (id)soundWithContentsOfURL:(id)arg1;
+ (id)soundWithContentsOfFile:(id)arg1;
+ (id)soundNamed:(id)arg1;
@property(retain, nonatomic) AVAudioPlayer *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) Sound *selfReference; // @synthesize selfReference=_selfReference;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double fadeStart; // @synthesize fadeStart=_fadeStart;
@property(nonatomic) double fadeTime; // @synthesize fadeTime=_fadeTime;
@property(nonatomic) float targetVolume; // @synthesize targetVolume=_targetVolume;
@property(nonatomic) float startVolume; // @synthesize startVolume=_startVolume;
@property(nonatomic) float baseVolume; // @synthesize baseVolume=_baseVolume;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tick;
- (void)fadeOut:(double)arg1;
- (void)fadeIn:(double)arg1;
- (void)fadeTo:(float)arg1 duration:(double)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stop;
- (void)play;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic, getter=isLooping) _Bool looping;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float pan;
@property(nonatomic) float volume;
- (void)setbaseVolume:(float)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)prepareToPlay;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

