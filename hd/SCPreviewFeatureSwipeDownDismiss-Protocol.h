//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPreviewSwipeDismissLoggingParameters, UIViewController<SCPreviewFeatureSwipeDownDismissDelegate>;

@protocol SCPreviewFeatureSwipeDownDismiss <NSObject>
@property(readonly, nonatomic) SCPreviewSwipeDismissLoggingParameters *loggingParameters;
@property(nonatomic) __weak UIViewController<SCPreviewFeatureSwipeDownDismissDelegate> *swipeDownDismissDelegate;
- (void)finishTransition;
- (void)setFeatureEnabled:(_Bool)arg1;
- (void)exitPreviewCancelled;
@end
