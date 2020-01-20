//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDisposableObserver.h"

@interface SCLatestCombinedObserver : SCDisposableObserver
{
    CDUnknownBlockType _combiner;
    id <SCObserver> _observer;
    struct mutex _mutex;
    id _value1;
    _Bool _value1Complete;
    SCDisposableObserver *_firstObserver;
    id _value2;
    _Bool _value2Complete;
    SCDisposableObserver *_secondObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tryComplete;
- (void)emitNext;
- (void)dispose;
- (id)initWithFirstObservable:(id)arg1 secondObservable:(id)arg2 combiner:(CDUnknownBlockType)arg3 observer:(id)arg4;

@end

