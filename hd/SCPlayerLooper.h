//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer;

@interface SCPlayerLooper : NSObject
{
    _Bool _isPaused;
    AVPlayer *_player;
}

@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)loop:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2;

@end

