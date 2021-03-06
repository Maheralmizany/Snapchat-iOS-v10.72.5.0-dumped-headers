//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIView, UIViewController<SCContextV2SwipeUpPresentable>;

@interface SCContextV2SwipeUpGestureTracker : NSObject <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panRec;
    _Bool _panRecIsLockedIn;
    _Bool _enabled;
    id <SCContextV2SwipeUpGestureDelegate> _delegate;
    UIViewController<SCContextV2SwipeUpPresentable> *_presentedViewController;
    UIView *_attachedToView;
    double _presentationAmount;
}

+ (id)_animatableProperty;
@property(nonatomic) double presentationAmount; // @synthesize presentationAmount=_presentationAmount;
@property(nonatomic) __weak UIView *attachedToView; // @synthesize attachedToView=_attachedToView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIViewController<SCContextV2SwipeUpPresentable> *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <SCContextV2SwipeUpGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_swipeUpDistance;
- (void)_swipeUpVCDidDismissViaSwipe:(_Bool)arg1;
- (void)_ensureSwipeUpVCExistsWithCompletion:(CDUnknownBlockType)arg1 triggerInfo:(id)arg2;
- (void)_updateViewAttachment;
- (void)setPresented:(_Bool)arg1 animated:(_Bool)arg2 triggerInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)detatchGestureFromView:(id)arg1;
- (void)attachGestureToView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_panned:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

