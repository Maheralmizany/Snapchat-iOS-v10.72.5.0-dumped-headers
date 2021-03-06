//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDisposableObserverLifecycle, SCObservable;

@interface SCAbuseWarningDetector : NSObject
{
    SCObservable *_allUpdates;
    id <SCActiveUserSessionWorkflowDelegate> _delegate;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_checkAllUpdatesForAbuseWarning:(id)arg1;
- (void)startDetectingAbuseWarnings;
- (id)initWithAllUpdates:(id)arg1 delegate:(id)arg2;

@end

