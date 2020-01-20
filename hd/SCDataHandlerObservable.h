//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCObservable.h"

@class SCDataHandler, SCPublishSubject;

@interface SCDataHandlerObservable : SCObservable
{
    SCDataHandler *_dataHandler;
    SCPublishSubject *_publishSubject;
    unsigned long long _numObservers;
    id <SCCanceling> _dataHandlerObserver;
}

- (void).cxx_destruct;
- (void)unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithDataHandler:(id)arg1;

@end
