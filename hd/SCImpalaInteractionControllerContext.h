//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIView, UIViewController;

@interface SCImpalaInteractionControllerContext : NSObject <NSCopying>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    long long _mode;
    _Bool _callAppearanceMethods;
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool cancelled;
@property(readonly, nonatomic) UIViewController *toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController;
@property(readonly, nonatomic) UIView *containerView;
- (void)cancel;
- (void)finish;
- (id)initWithTransitionContext:(id)arg1 mode:(long long)arg2 callAppearanceMethods:(_Bool)arg3;

@end

