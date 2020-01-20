//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCAppNotification, SCDeepLinkURL, UIViewController, UIViewController<SCPageNameLogging>;

@protocol SCMapChatPresenter <NSObject>
- (_Bool)viewControllerIsChatAndHasActiveCall:(UIViewController *)arg1;
- (void)presentGroupCreationOnViewController:(UIViewController<SCPageNameLogging> *)arg1 recipientUserIds:(NSArray *)arg2 source:(long long)arg3;
- (void)presentGroupChatOnViewController:(UIViewController *)arg1 groupId:(NSString *)arg2 deeplinkURL:(SCDeepLinkURL *)arg3 notification:(SCAppNotification *)arg4 source:(long long)arg5 subpageName:(NSString *)arg6;
- (void)presentChatOnViewController:(UIViewController *)arg1 username:(NSString *)arg2 deeplinkURL:(SCDeepLinkURL *)arg3 notification:(SCAppNotification *)arg4 source:(long long)arg5 subpageName:(NSString *)arg6;
@end

