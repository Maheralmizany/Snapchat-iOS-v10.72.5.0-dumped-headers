//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol SCScanBarAnimatable <NSObject>
- (void)beginCancelAnimations;
- (void)beginEndingAnimationWithHighlightIndex:(long long)arg1;
- (void)beginWaitingForEndingAnimation;
- (void)beginShowingItemsAnimationForItems:(NSArray *)arg1;
- (void)beginWaitingForShowingItemsAnimation;
- (void)reset;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
@end

