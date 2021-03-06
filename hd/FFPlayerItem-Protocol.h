//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol FFPlayerItem <NSObject>
@property(readonly, nonatomic) long long preferredFramesPerSecond;
@property(nonatomic) unsigned long long framesCount;
@property(readonly, nonatomic) double currentVideoTime;
@property(nonatomic) long long numberOfAudioLoops;
@property(nonatomic) double currentAudioTime;
@property(readonly, nonatomic) NSURL *audioURL;
@property(readonly, nonatomic) id <FFFrameProducer> frameProducer;
@end

