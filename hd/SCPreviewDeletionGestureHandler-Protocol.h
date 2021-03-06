//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCPreviewTooltipBalloon, UIGestureRecognizer, UIView;

@protocol SCPreviewDeletionGestureHandler <NSObject>
- (SCPreviewTooltipBalloon *)showTooltipWithText:(NSString *)arg1 belowView:(UIView *)arg2;
- (_Bool)didEndDeletionGesture:(UIGestureRecognizer *)arg1 withView:(UIView *)arg2 deleteAnimationCompletion:(void (^)(void))arg3;
- (void)didMoveDeletionGesture:(UIGestureRecognizer *)arg1 withView:(UIView *)arg2;
- (void)didStartDeletionGesture;
@end

