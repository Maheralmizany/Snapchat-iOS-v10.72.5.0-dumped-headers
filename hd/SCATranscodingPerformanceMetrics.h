//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCATranscodingPerformanceMetrics : SCAMapSerializable
{
}

- (void)setVideoRendererMs:(long long)arg1;
- (void)setVideoRendererCount:(long long)arg1;
- (void)setVideoExtractorMs:(long long)arg1;
- (void)setVideoExtractorCount:(long long)arg1;
- (void)setVideoEncoderOutputBufferNum:(long long)arg1;
- (void)setVideoEncoderMs:(long long)arg1;
- (void)setVideoEncoderInputBufferNum:(long long)arg1;
- (void)setVideoEncoderCount:(long long)arg1;
- (void)setVideoDecoderOutputBufferNum:(long long)arg1;
- (void)setVideoDecoderMs:(long long)arg1;
- (void)setVideoDecoderInputBufferNum:(long long)arg1;
- (void)setVideoDecoderCount:(long long)arg1;
- (void)setVideoBufferedRendererMs:(long long)arg1;
- (void)setVideoBufferedRendererCount:(long long)arg1;
- (void)setSetupMs:(long long)arg1;
- (void)setSetupCount:(long long)arg1;
- (void)setMixerMs:(long long)arg1;
- (void)setMixerCount:(long long)arg1;
- (void)setAudioExtractorMs:(long long)arg1;
- (void)setAudioExtractorCount:(long long)arg1;
- (void)setAudioEncoderMs:(long long)arg1;
- (void)setAudioEncoderCount:(long long)arg1;
- (void)setAudioDecoderMs:(long long)arg1;
- (void)setAudioDecoderCount:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

