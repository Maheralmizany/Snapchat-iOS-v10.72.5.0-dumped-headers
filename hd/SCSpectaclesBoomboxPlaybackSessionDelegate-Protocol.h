//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SCSpectaclesBoomboxPlaybackSessionDelegate <NSObject>
- (void)playbackSession:(id <SCSpectaclesBoomboxPlaybackSession>)arg1 didReceiveError:(NSError *)arg2;
- (void)playbackSession:(id <SCSpectaclesBoomboxPlaybackSession>)arg1 didPlayToEnd:(_Bool)arg2;
- (void)playbackSessionDidLoadFirstFrame:(id <SCSpectaclesBoomboxPlaybackSession>)arg1;
@end

