//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaWebLayerViewController.h"

#import "SCOperaLayerViewControllerShareableMediaSource.h"
#import "SCOperaLocalWebJavascriptBridgeInlineVideoListener.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class FBKVOController, NSString, SCOperaLocalWebJavascriptBridge, SCOperaLocalWebLayerView, SCOperaWebSubscribeView;

@interface SCOperaLocalWebLayerViewController : SCOperaWebLayerViewController <UIGestureRecognizerDelegate, UIWebViewDelegate, SCOperaLocalWebJavascriptBridgeInlineVideoListener, UIScrollViewDelegate, SCOperaLayerViewControllerShareableMediaSource>
{
    _Bool _isLayerViewSetup;
    double _maxYOffset;
    SCOperaLocalWebLayerView *_layerView;
    FBKVOController *_kvoController;
    SCOperaLocalWebJavascriptBridge *_javascriptBridge;
    SCOperaWebSubscribeView *_subscribeView;
    NSString *_subscriptionIconKey;
    id <SCOperaLocalWebLayerViewControllerDelegate> _delegate;
}

+ (id)layerViewControllerWithConfiguration:(id)arg1 kvoController:(id)arg2 eventAnnouncer:(id)arg3 sharedResourceManager:(id)arg4 javascriptBridge:(id)arg5;
@property(nonatomic) __weak id <SCOperaLocalWebLayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLayerViewWithHTMLString:(id)arg1;
- (void)javascriptBridge:(id)arg1 didAddInlineVideoWithURL:(id)arg2 parameters:(id)arg3;
- (void)_layoutWebviewAttachments;
- (void)_didTapSubscriptionButton;
- (void)_hideSubscribeView;
- (void)_setupSubscribeView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_setupLayerView;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)scrollView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)teardown;
- (void)clearLayerViewRequest;
- (id)shareableMedia;
- (id)currentViewParameters;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidFullyDisappear;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 eventAnnouncer:(id)arg3 sharedResourceManager:(id)arg4 javascriptBridge:(id)arg5;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

