//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDeepLinkingUrlInterceptor.h"

@class SCAlertViewCoordinator;

@interface SCKhaleesiUrlInterceptor : SCDeepLinkingUrlInterceptor
{
    SCAlertViewCoordinator *_alertViewCoordinator;
}

- (void).cxx_destruct;
- (_Bool)interceptURL:(id)arg1 isWebViewFullyAppeared:(_Bool)arg2 isWebViewLoadedSuccessfully:(_Bool)arg3 allowAlertView:(_Bool)arg4 allowUniversalDeepLink:(_Bool)arg5 bypassNavigationRestriction:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)shouldInterceptURL:(id)arg1;
- (id)initWithAlertViewCoordinator:(id)arg1 navigationDelegate:(id)arg2;

@end

