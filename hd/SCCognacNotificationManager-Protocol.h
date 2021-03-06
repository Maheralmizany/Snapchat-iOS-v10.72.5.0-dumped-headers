//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, SCAppNotification, UIView;

@protocol SCCognacNotificationManager <NSObject>
- (void)removeInitiateNotification:(SCAppNotification *)arg1;
- (SCAppNotification *)addInitiateNotificationWithUserIds:(NSArray *)arg1 userIdToNameMap:(NSDictionary *)arg2 iconView:(UIView *)arg3 dismissView:(UIView *)arg4 conversationId:(NSString *)arg5;
- (void)sendAbandonInviteNotificationWithAppInstanceId:(NSString *)arg1 invitedUserIds:(NSArray *)arg2;
- (void)sendInviteNotificationWithAppInstanceId:(NSString *)arg1 invitedUserIds:(NSArray *)arg2;

@optional
@property(nonatomic) __weak id <SCCognacNotificationHandling> notificationHandler;
@end

