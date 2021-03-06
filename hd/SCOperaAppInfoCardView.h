//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SCAffordanceArrowView, SCLoadingIndicatorView, SCOperaAppInfoCardViewModel, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface SCOperaAppInfoCardView : UIView <UIGestureRecognizerDelegate>
{
    SCAffordanceArrowView *_arrowView;
    UILabel *_titleLabel;
    UILabel *_logoLabel;
    UIView *_backgroundCardView;
    SCOperaAppInfoCardViewModel *_viewModel;
    UITapGestureRecognizer *_tapArrowGesture;
    UITapGestureRecognizer *_tapBackgroundCardGesture;
    UIImageView *_appIconView;
    UIButton *_getButton;
    UILabel *_appTitleLabel;
    UILabel *_appAuthorLabel;
    SCLoadingIndicatorView *_loadingIndicatorView;
    _Bool _hideArrowView;
    id <SCOperaAppInfoCardViewDelegate> _delegate;
    id <SCOperaImageProvider> _imageProvider;
}

@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak id <SCOperaAppInfoCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didSingleTap:(id)arg1;
- (struct CGRect)backgroundCardViewFrame;
- (void)setViewModel:(id)arg1;
- (void)hideLoadingIndicator:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

