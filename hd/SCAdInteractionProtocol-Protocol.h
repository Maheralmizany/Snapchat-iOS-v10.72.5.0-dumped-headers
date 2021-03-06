//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCAdInteractionProtocol <NSObject>
- (void)resetForSwipeBackTracking;
- (void)adScreenshotTaken;
- (void)adLongPressed;
- (void)unobstructedOnTopSnap:(_Bool)arg1 currentMediaVolumePercent:(double)arg2;
- (void)obstructedOnTopSnap:(_Bool)arg1;
- (void)onAudibilityChange:(double)arg1;
- (void)swipedUpToVideoBoxHalfOpen;
- (void)swipedFromTopSnap:(_Bool)arg1 exitEvent:(NSString *)arg2 currentMediaVolumePercent:(double)arg3;
- (void)adSnapHideOnTopSnap:(_Bool)arg1 skipEvent:(NSString *)arg2;
- (void)adHideWithSkipEvent:(NSString *)arg1;
- (void)adShowOnTopSnap:(_Bool)arg1 onBottomSnap:(_Bool)arg2 currentMediaVolumePercent:(double)arg3;
@end

