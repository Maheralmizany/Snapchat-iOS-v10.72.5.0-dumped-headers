//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCSearchScrollViewDismissalControllable.h"
#import "SCViewModelConfigurable.h"
#import "UIScrollViewDelegate.h"
#import "WKNavigationDelegate.h"

@class NSString, SCAttachmentsBackButton, SCSafeBrowsingWarningView, SCSearchActionButton, SCWebViewProgressIndicator, WKWebView;

@interface SCSearchAttachmentsWebView : UIView <WKNavigationDelegate, UIScrollViewDelegate, SCViewModelConfigurable, SCSearchScrollViewDismissalControllable>
{
    SCWebViewProgressIndicator *_progressView;
    SCAttachmentsBackButton *_backButton;
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    struct CGRect _currentMaskRect;
    double _originOffsetY;
    _Bool _safeBrowsingViewHidden;
    id _viewModel;
    id <SCSearchAttachmentsWebViewDelegate> _delegate;
    WKWebView *_webView;
    SCSearchActionButton *_attachButton;
    double _progressViewOffset;
    long long _safeBrowsingUrlType;
    struct CGPoint _attachButtonOriginOffset;
    struct UIEdgeInsets _layoutInsets;
}

@property(readonly, nonatomic) long long safeBrowsingUrlType; // @synthesize safeBrowsingUrlType=_safeBrowsingUrlType;
@property(nonatomic) struct CGPoint attachButtonOriginOffset; // @synthesize attachButtonOriginOffset=_attachButtonOriginOffset;
@property(nonatomic, getter=isSafeBrowsingViewHidden) _Bool safeBrowsingViewHidden; // @synthesize safeBrowsingViewHidden=_safeBrowsingViewHidden;
@property(nonatomic) double progressViewOffset; // @synthesize progressViewOffset=_progressViewOffset;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(readonly, nonatomic) SCSearchActionButton *attachButton; // @synthesize attachButton=_attachButton;
@property(readonly, nonatomic) SCWebViewProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <SCSearchAttachmentsWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didTapBackButton:(id)arg1;
- (void)_updateRoundedCornerMaskIfNeeded;
- (void)_handleButtonTap:(id)arg1;
- (void)_layoutButtonsWithEffectiveBounds:(struct CGRect)arg1;
- (_Bool)_attachButtonIsHidden;
- (void)_setAttachButtonDestinationAlpha:(double)arg1 offset:(struct CGPoint)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)applyTranslation:(struct CGPoint)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (double)targetOffsetY;
- (struct CGPoint)contentOffset;
- (_Bool)isAttachButtonHidden;
- (void)setAttachButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isBackButtonHidden) _Bool backButtonHidden;
- (void)setSafeBrowsingViewStateForUrlType:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSafeBrowsingWarningView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

