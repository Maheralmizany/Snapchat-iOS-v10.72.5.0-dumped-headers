//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCObserver.h"

@class SCObservable;

@interface SCFlatMapProxyObserver : NSObject <SCObserver>
{
    SCObservable *_observable;
    id <SCObserver> _observer;
    id <SCFlatMapProxyObserverDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)complete;
- (void)next:(id)arg1;
- (id)initWithGeneratedObservable:(id)arg1 observer:(id)arg2 delegate:(id)arg3;

@end
