//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SCDisposableObserverLifecycle, SCLazy;

@interface SCDynamicLocaleLogger : NSObject
{
    NSOperationQueue *_logQueue;
    SCLazy *_graphene;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
}

- (void).cxx_destruct;
- (void)_reportLocalizedStringEvent:(id)arg1;
- (void)reportIsDynamicLocaleAvailable:(_Bool)arg1 locale:(id)arg2;
- (void)subscribeLocalizedStringEvent:(id)arg1;
- (id)initWithGraphene:(id)arg1 logQueue:(id)arg2;

@end

