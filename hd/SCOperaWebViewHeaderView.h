//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class FBShimmeringView, NSString, NSURL, SCExpandedButton, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SCOperaWebViewHeaderView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_urlBarContentView;
    UIView *_dividerBar;
    UIImageView *_httpsLockIcon;
    UIImageView *_favicon;
    UILabel *_webPageTitle;
    id <SCOperaWebViewFaviconProvider> _faviconProvider;
    NSURL *_currentUrl;
    UILongPressGestureRecognizer *_exitButtonLongPressRecognizer;
    double _exitButtonX;
    double _exitButtonY;
    UITapGestureRecognizer *_tapGesture;
    FBShimmeringView *_headerShimmeringView;
    _Bool _useWebviewStandardization;
    UIButton *_actionMenuButton;
    FBShimmeringView *_urlBarView;
    SCExpandedButton *_exitButton;
    id <SCOperaWebViewHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaWebViewHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCExpandedButton *exitButton; // @synthesize exitButton=_exitButton;
@property(readonly, nonatomic) FBShimmeringView *urlBarView; // @synthesize urlBarView=_urlBarView;
- (void).cxx_destruct;
- (void)showActionMenuButton;
- (void)hideActionMenuButton;
- (void)setShimmering:(_Bool)arg1;
- (void)didTap:(id)arg1;
- (void)didLongPressExitButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setFaviconProvider:(id)arg1;
- (void)setUrlBarLoadingText:(id)arg1;
- (void)updateUrl:(id)arg1;
- (void)setFaviconForURL:(id)arg1;
- (void)layoutSubviews;
- (void)operaWebViewHeaderViewDidPressActionMenuButton;
- (id)initWithFrame:(struct CGRect)arg1 faviconProvider:(id)arg2 useWebviewStandardization:(_Bool)arg3 enableActionMenuButton:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
