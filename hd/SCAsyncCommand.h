//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperation, NSRecursiveLock;

@interface SCAsyncCommand : NSObject
{
    NSOperation *_commandFinishedOperation;
    unsigned long long _state;
    NSRecursiveLock *_stateLock;
}

- (void).cxx_destruct;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)beginWaiting;
- (id)asyncCommandCompletedOperation;
- (void)willTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)didTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)endExecutingAsync;
- (void)beginExecutingAsync;
- (void)executeCommand;
- (void)execute;
@property(readonly, nonatomic) unsigned long long state;
- (id)init;

@end

