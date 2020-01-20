//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKScriptMessageHandler.h"

@class NSString, WKUserContentController;

@interface SCAdWebViewTopSnapJSBridge : NSObject <WKScriptMessageHandler>
{
    id <SCAdWebViewTopSnapJSBridgeDelegate> _delegate;
    WKUserContentController *_userContentController;
}

@property(readonly, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
@property(nonatomic) __weak id <SCAdWebViewTopSnapJSBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)didUnload:(id)arg1;
- (void)didDisappear:(id)arg1;
- (void)onInteraction:(id)arg1;
- (void)didAppear:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

