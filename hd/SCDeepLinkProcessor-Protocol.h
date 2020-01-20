//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCDeepLinkURL, SCUserSession, SOJUIdentityDeepLinkRequest, SOJUIdentityDeepLinkResponse;

@protocol SCDeepLinkProcessor <NSObject>
- (void)handleOpenURL:(SCDeepLinkURL *)arg1 sourceApplication:(NSString *)arg2 additionalInfo:(NSDictionary *)arg3;
- (id)initWithNavigationDelegate:(id <NavigationDelegate>)arg1;

@optional
- (void)handleOpenURL:(SCDeepLinkURL *)arg1 sourceApplication:(NSString *)arg2 additionalInfo:(NSDictionary *)arg3 source:(long long)arg4;
- (NSString *)alertTitleForLogoutUser;
- (_Bool)canProcessForNonLoggedInUser;
- (_Bool)needsNavigationDelegate;
- (_Bool)processDeepLinkResponse:(SOJUIdentityDeepLinkResponse *)arg1 userSession:(SCUserSession *)arg2;
- (SOJUIdentityDeepLinkRequest *)getDeepLinkRequest:(SCDeepLinkURL *)arg1;
@end

