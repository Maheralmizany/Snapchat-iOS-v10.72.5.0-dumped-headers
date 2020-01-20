//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer, SCSoundContentDelivery;

@interface SCSoundPlayer : NSObject
{
    SCSoundContentDelivery *_soundContentDelivery;
    unsigned long long _lastSound;
    unsigned long long _soundRequested;
    _Bool _shouldPlay;
    AVAudioPlayer *_player;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_preparePlayerAndPlaySound:(unsigned long long)arg1 continuously:(_Bool)arg2;
- (void)stop;
- (void)playContinuously:(unsigned long long)arg1;
- (void)playOnce:(unsigned long long)arg1;
- (unsigned long long)soundPlayed;
- (_Bool)playing;
- (id)initWithSoundContentDelivery:(id)arg1;

@end
