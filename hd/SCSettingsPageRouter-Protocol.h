//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLogout;

@protocol SCSettingsPageRouter <NSObject>
- (void)endSessionWithLogout:(SCLogout *)arg1;
- (void)showFailureOnSyncLogout:(SCLogout *)arg1;
- (void)startSyncLogoutWithDelegate:(id <SCLogoutWorkflowDelegate>)arg1 logoutInfo:(SCLogout *)arg2;
- (void)startLogoutInterceptorsWithDelegate:(id <SCLogoutInterceptorDelegate>)arg1;
- (void)presentBitmojiSettingsWithStatus:(unsigned long long)arg1;
- (void)presentMobileSettingsWithDeepLinkCode:(NSString *)arg1;
- (void)dismissSettingsPage;
- (void)showSettingsPageWithUserActionDelegate:(id <SCSettingsUserActionDelegate>)arg1;
@end

