//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCAdsWebView;

@interface SCAdsWebViewAttachment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowAutoFill; // @dynamic allowAutoFill;
@property(nonatomic) _Bool blockWebviewPreloading; // @dynamic blockWebviewPreloading;
@property(nonatomic) _Bool hasWebview; // @dynamic hasWebview;
@property(retain, nonatomic) SCAdsWebView *webview; // @dynamic webview;

@end

