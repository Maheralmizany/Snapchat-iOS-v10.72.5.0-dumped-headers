//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDisposableObserverLifecycle, SCPushNotificationRegistrarHelper, SCRegistrationEventLogger;

@interface SCPreRegistrationWorkflow : NSObject
{
    id <SCPreRegistrationRouter> _router;
    id <SCPreRegistrationDelegate> _delegate;
    SCPushNotificationRegistrarHelper *_pushNotificationRegistrarHelper;
    id <SCRegistrationInterceptorsCheck> _registrationInterceptorsCheck;
    SCDisposableObserverLifecycle *_subscriptions;
    SCRegistrationEventLogger *_registrationEventLogger;
}

- (void).cxx_destruct;
- (void)_handleBlitzPrepromptNotificationAction:(id)arg1;
- (void)_startWorkflowAfterInterceptorsCheck;
- (void)beginWorkflow;
- (id)initWithRouter:(id)arg1 delegate:(id)arg2 pushNotificationRegistrar:(id)arg3 registrationInterceptorsCheck:(id)arg4 registrationEventLogger:(id)arg5;

@end

