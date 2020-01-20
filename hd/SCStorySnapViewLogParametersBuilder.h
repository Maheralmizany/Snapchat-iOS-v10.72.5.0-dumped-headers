//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCContextSnapViewMetrics;

@interface SCStorySnapViewLogParametersBuilder : NSObject
{
    NSString *_snaplogId;
    NSString *_posterId;
    long long _storyType;
    long long _storyTypeSpecific;
    double _snapTimeViewed;
    double _snapTime;
    _Bool _fullyViewed;
    long long _exitReason;
    long long _viewLocationPos;
    long long _viewSource;
    double _playbackVolume;
    long long _playbackAudio;
    SCContextSnapViewMetrics *_contextSnapViewMetrics;
    long long _playMode;
    long long _storyAccessType;
    long long _mediaType;
    long long _snapSource;
    long long _snapIndexCount;
    long long _snapIndexPos;
    NSString *_teamSnapchatStorySnapHash;
}

+ (id)storySnapViewLogParametersFromExistingStorySnapViewLogParameters:(id)arg1;
+ (id)storySnapViewLogParameters;
- (void).cxx_destruct;
- (id)withTeamSnapchatStorySnapHash:(id)arg1;
- (id)withSnapIndexPos:(long long)arg1;
- (id)withSnapIndexCount:(long long)arg1;
- (id)withSnapSource:(long long)arg1;
- (id)withMediaType:(long long)arg1;
- (id)withStoryAccessType:(long long)arg1;
- (id)withPlayMode:(long long)arg1;
- (id)withContextSnapViewMetrics:(id)arg1;
- (id)withPlaybackAudio:(long long)arg1;
- (id)withPlaybackVolume:(double)arg1;
- (id)withViewSource:(long long)arg1;
- (id)withViewLocationPos:(long long)arg1;
- (id)withExitReason:(long long)arg1;
- (id)withFullyViewed:(_Bool)arg1;
- (id)withSnapTime:(double)arg1;
- (id)withSnapTimeViewed:(double)arg1;
- (id)withStoryTypeSpecific:(long long)arg1;
- (id)withStoryType:(long long)arg1;
- (id)withPosterId:(id)arg1;
- (id)withSnaplogId:(id)arg1;
- (id)build;

@end

