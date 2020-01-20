//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, SCHeader, UIActivityIndicatorView, UIColor, UIWebView;

@interface SCMapWebViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, UIWebViewDelegate>
{
    NSURL *_initialURL;
    UIColor *_headerColor;
    NSString *_overrideTitle;
    SCHeader *_header;
    UIActivityIndicatorView *_loadingView;
    UIWebView *_webView;
    id <SCMapWebViewControllerDelegate> _delegate;
}

+ (_Bool)canOpenURL:(id)arg1;
@property(nonatomic) __weak id <SCMapWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)_reloadHeader;
- (void)_dismissSelf;
- (_Bool)_isModallyPresented;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1 headerColor:(id)arg2 overrideTitle:(id)arg3;
- (id)initWithURL:(id)arg1 overrideTitle:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

