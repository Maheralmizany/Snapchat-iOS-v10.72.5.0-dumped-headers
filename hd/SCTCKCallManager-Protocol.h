//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTCKMetricServices.h"
#import "SCTCallKitServices.h"
#import "SCTV3CallStateListener.h"
#import "SCTV3HeadlessCallServicesDelegate.h"

@class NSString, SCAppNotification;

@protocol SCTCKCallManager <SCTV3HeadlessCallServicesDelegate, SCTCKMetricServices, SCTV3CallStateListener, SCTCallKitServices>
- (_Bool)callActive;
- (_Bool)callKitInUse;
- (void)handleActiveChatForConvoId:(NSString *)arg1;
- (void)handleUserActionOnNotification:(SCAppNotification *)arg1;
- (void)setNavigationHandler:(id <SCApplicationLifecycleNavigationHandler>)arg1;
- (void)reportOutgoingCallToConvoId:(NSString *)arg1 fromPhoneRecentsList:(_Bool)arg2 isVideo:(_Bool)arg3;
- (void)notifyMediaUpdateForConvoId:(NSString *)arg1 isVideo:(_Bool)arg2;
- (void)reportMediaUpdateCallNotification:(SCAppNotification *)arg1 convoId:(NSString *)arg2 media:(unsigned long long)arg3;
- (void)reportIncomingCallNotification:(SCAppNotification *)arg1 convoId:(NSString *)arg2 isVideo:(_Bool)arg3 withCompletionHandler:(void (^)(void))arg4;
@end

