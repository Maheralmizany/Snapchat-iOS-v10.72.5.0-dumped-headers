//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCGradientView, SCUnauthenticatedContinueButton, UIButton, UIScrollView;

@interface SCUnauthenticatedBaseView : UIView
{
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    CDUnknownBlockType _customLayout;
    _Bool _activityAnimating;
    _Bool _backButtonHidden;
    UIScrollView *_containerView;
    SCGradientView *_gradientView;
    UIButton *_backButton;
    SCUnauthenticatedContinueButton *_continueButton;
}

@property(nonatomic, getter=isBackButtonHidden) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(nonatomic, getter=isActivityAnimating) _Bool activityAnimating; // @synthesize activityAnimating=_activityAnimating;
@property(readonly, nonatomic) SCUnauthenticatedContinueButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) SCGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)_addObservers;
- (void)_updateBackButtonVisibility;
- (void)_updateFrameWithKeyboardHeight:(double)arg1;
- (void)updateFrameWithKeyboardHeight:(double)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)setupGradient;
- (void)setupContinueButton;
- (void)setupBackButton;
- (void)setupScrollView;
- (void)initSubviews;
- (void)didMoveToSuperview;
- (id)initWithStyleHelper:(id)arg1 customLayout:(CDUnknownBlockType)arg2;
- (id)initWithStyleHelper:(id)arg1;

@end

