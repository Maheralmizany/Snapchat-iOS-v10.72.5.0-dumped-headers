//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDeepLinkProcessor.h"

@class NSString;

@interface SCMapDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (_Bool)needsNavigationDelegate;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

