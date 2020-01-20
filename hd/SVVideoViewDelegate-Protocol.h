//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, SVVideoView;

@protocol SVVideoViewDelegate <NSObject>

@optional
- (void)videoView:(SVVideoView *)arg1 didFailToStartAsset:(AVAsset *)arg2;
- (void)videoViewDidRecoverFromStall:(SVVideoView *)arg1;
- (void)videoView:(SVVideoView *)arg1 didStallAtTimeInterval:(double)arg2;
- (_Bool)videoView:(SVVideoView *)arg1 shouldChangePlayerStateTo:(unsigned long long)arg2;
- (void)videoView:(SVVideoView *)arg1 willChangePlayerState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)videoViewDidChangeProgress:(SVVideoView *)arg1;
- (void)videoViewDidExitVisibleState:(SVVideoView *)arg1;
- (void)videoViewDidEnterVisibleState:(SVVideoView *)arg1;
- (void)videoViewDidPlayToEnd:(SVVideoView *)arg1;
@end
