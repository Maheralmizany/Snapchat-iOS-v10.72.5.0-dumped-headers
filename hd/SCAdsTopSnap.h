//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsMediaTopSnap, SCAdsWebView;

@interface SCAdsTopSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsMediaTopSnap *mediaTopSnap; // @dynamic mediaTopSnap;
@property(copy, nonatomic) NSString *swipeUpArrowText; // @dynamic swipeUpArrowText;
@property(readonly, nonatomic) int topSnapTypeOneOfCase; // @dynamic topSnapTypeOneOfCase;
@property(retain, nonatomic) SCAdsWebView *webviewTopSnap; // @dynamic webviewTopSnap;

@end

