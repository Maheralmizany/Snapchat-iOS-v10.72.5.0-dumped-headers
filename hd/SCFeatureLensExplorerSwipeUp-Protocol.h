//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraLensesEventListener.h"
#import "SCFeatureCameraTooltipContender.h"

@class UIGestureRecognizer;

@protocol SCFeatureLensExplorerSwipeUp <SCCameraLensesEventListener, SCFeatureCameraTooltipContender>
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> swipeViewParentDelegate;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizersDelegate;
- (void)addBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)isPanUpGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

