//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UNNotification;

@interface SCNotificationLifecycleEvent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    UNNotification *_openSettingsForNotification_notification;
    NSString *_openAppFromRemoteNotification_notificationType;
}

+ (id)openSettingsForNotificationWithNotification:(id)arg1;
+ (id)openAppFromRemoteNotificationWithNotificationType:(id)arg1;
- (void).cxx_destruct;
- (void)matchOpenSettingsForNotification:(CDUnknownBlockType)arg1 openAppFromRemoteNotification:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

