//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCCaptchaImageSelectionViewDelegate.h"

@class NSMutableArray, SCLoadingIndicatorView;

@interface SCCaptchaView : UIView <SCCaptchaImageSelectionViewDelegate>
{
    double _captchaImageSizeAdjustedForScreen;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    UIView *_buttonsContainerView;
    NSMutableArray *_captchaImageSelectionViews;
    UIView *_emptyCaptchaSquaresContainer;
    SCLoadingIndicatorView *_loadingView;
    id <SCCaptchaViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCaptchaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captchaImageSelectionViewTapped:(id)arg1;
- (void)updateCaptchaImages:(id)arg1;
- (void)reloadCaptchaImages:(id)arg1;
- (void)clearCaptchaImages;
- (void)_endLoadingCaptchaAnimation;
- (void)showFetchingCaptchaAnimation;
- (void)_setUpFetchingCaptchaViews;
- (void)_setUpButtonsContainerView;
- (id)initWithFrame:(struct CGRect)arg1 styleHelper:(id)arg2;

@end

