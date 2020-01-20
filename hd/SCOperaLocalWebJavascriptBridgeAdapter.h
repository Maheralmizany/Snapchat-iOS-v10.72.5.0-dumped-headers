//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLocalWebJavascriptBridgeInlineVideoListener.h"
#import "WKScriptMessageHandler.h"

@class NSString, SCOperaLocalWebJavascriptBridge;

@interface SCOperaLocalWebJavascriptBridgeAdapter : NSObject <WKScriptMessageHandler, SCOperaLocalWebJavascriptBridgeInlineVideoListener>
{
    SCOperaLocalWebJavascriptBridge *_bridge;
    CDUnknownBlockType _listener;
}

- (void).cxx_destruct;
- (void)javascriptBridge:(id)arg1 didAddInlineVideoWithURL:(id)arg2 parameters:(id)arg3;
- (void)install:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithListener:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
