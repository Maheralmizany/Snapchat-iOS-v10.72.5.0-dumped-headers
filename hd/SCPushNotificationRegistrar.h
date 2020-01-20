//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPushNotificationRegistrar : NSObject
{
}

+ (void)updatePushDefaultsIfChanged;
+ (void)didInvalidatePushTokenForType:(id)arg1;
+ (void)didUpdatePushCredentials:(id)arg1 forType:(id)arg2 userAdapter:(id)arg3;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 userAdapter:(id)arg2;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
+ (void)registerTokensWithBackendDirectUserSession:(id)arg1 userAdapter:(id)arg2;
+ (void)registerTokensWithBackend:(id)arg1;
+ (_Bool)hasRegisteredAPNSToken;
+ (void)_didRegisterUserNotificationSettings:(_Bool)arg1;
+ (void)didRegisterUserNotificationSettings:(id)arg1;
+ (id)notificationPermissionSettings;
+ (_Bool)notificationsPermissionNotGranted;
+ (_Bool)isRegisteredForPushNotifications;
+ (void)_legacyUpdateNotificationsSettings;
+ (void)_updateNotificationsSetting:(_Bool)arg1;
+ (void)updateNotificationsSetting:(_Bool)arg1;
+ (void)didShowNotificationPrompt;
+ (void)_legacyRegisterUserNotificationSettings;
+ (void)_registerUserNotificationSettings;
+ (void)registerUserNotificationSettings:(id)arg1;

@end
