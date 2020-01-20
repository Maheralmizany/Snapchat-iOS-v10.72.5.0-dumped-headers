//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommerceCheckoutDelegate.h"
#import "SCCommerceCheckoutLaunching.h"

@class NSString, SCOptionalScopeExposer;

@interface SCCommerceCheckoutLauncher : NSObject <SCCommerceCheckoutDelegate, SCCommerceCheckoutLaunching>
{
    SCOptionalScopeExposer *_scopeExposer;
    id <SCCommerceCheckoutDelegate> _checkoutDelegate;
}

- (void).cxx_destruct;
- (void)checkoutDidComplete;
- (void)checkoutWillPresent;
- (void)checkoutFailedToLoadWithError:(id)arg1;
- (void)checkoutWillStartPreloading;
- (void)launchCheckoutWithUIContainer:(id)arg1 store:(id)arg2 delegate:(id)arg3;
- (_Bool)isEnabled;
- (id)initWithScopeExposer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
