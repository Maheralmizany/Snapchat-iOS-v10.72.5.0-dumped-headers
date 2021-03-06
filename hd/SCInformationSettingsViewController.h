//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, NSURLRequest, UIActivityIndicatorView, UIWebView;

@interface SCInformationSettingsViewController : SCGenericSettingsViewController <UIWebViewDelegate, SCPageNameLogging>
{
    id <SCInformationSettingsViewControllerDelegate> _delegate;
    NSString *_overrideTitle;
    UIWebView *_webView;
    NSURL *_url;
    UIActivityIndicatorView *_activityIndicatorView;
    NSURLRequest *_request;
    NSString *_implicitTitle;
}

@property(retain, nonatomic) NSString *implicitTitle; // @synthesize implicitTitle=_implicitTitle;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *overrideTitle; // @synthesize overrideTitle=_overrideTitle;
@property(nonatomic) __weak id <SCInformationSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)leftButtonPressed;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)pageViewName;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

