//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, SCSpectaclesAncsNotificationSettings, SCSpectaclesContextNotificationAnimation;

@protocol SCSpectaclesContextNotificationTaskHandler <NSObject>
- (void)savePushMessagePattern:(NSSet *)arg1;
- (void)removeAllAncsNotificationRules;
- (void)addAncsNotificationSettings:(SCSpectaclesAncsNotificationSettings *)arg1;
- (void)requestPeerBondStatus;
- (void)setAncsNotificationsEnabled:(_Bool)arg1;
- (void)sendContextNotificationForSourceId:(NSString *)arg1;
- (void)sendContextNotificationWithAnimation:(SCSpectaclesContextNotificationAnimation *)arg1;
@end

