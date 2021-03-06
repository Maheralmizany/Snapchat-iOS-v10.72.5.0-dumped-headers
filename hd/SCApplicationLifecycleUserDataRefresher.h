//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDisposableObserverLifecycle, SCObservable, UIApplication;

@interface SCApplicationLifecycleUserDataRefresher : NSObject
{
    id <SCUserDataRefresher> _userDataRefresher;
    UIApplication *_application;
    SCObservable *_applicationLifecycleEvents;
    _Bool _shouldUseUnifiedEndpoint;
    SCDisposableObserverLifecycle *_observerLifecycle;
    _Bool _needsFullRefresh;
}

- (void).cxx_destruct;
- (void)_handleAppWillEnterForeground;
- (void)beginRefreshingWithUserSessionContext:(id)arg1;
- (id)initWithUserDataRefresher:(id)arg1 application:(id)arg2 applicationLifecycleEvents:(id)arg3;

@end

