//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCATranscodingFrameStatistics : SCAMapSerializable
{
}

- (void)setVideoDecoderProcessedFrameCount:(long long)arg1;
- (void)setVideoDecoderOutOfOrderFrameCount:(long long)arg1;
- (void)setVideoDecoderDroppedFrameCount:(long long)arg1;
- (void)setMuxerVideoProcessedFrameCount:(long long)arg1;
- (void)setMuxerVideoOutOfOrderFrameCount:(long long)arg1;
- (void)setMuxerVideoDroppedFrameCount:(long long)arg1;
- (void)setMuxerAudioProcessedFrameCount:(long long)arg1;
- (void)setMuxerAudioOutOfOrderFrameCount:(long long)arg1;
- (void)setMuxerAudioDroppedFrameCount:(long long)arg1;
- (void)setAudioDecoderProcessedFrameCount:(long long)arg1;
- (void)setAudioDecoderOutOfOrderFrameCount:(long long)arg1;
- (void)setAudioDecoderDroppedFrameCount:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

