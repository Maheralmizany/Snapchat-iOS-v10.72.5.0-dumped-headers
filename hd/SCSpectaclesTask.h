//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSpectaclesTask : NSObject
{
    long long _failureCount;
}

@property(readonly, nonatomic) long long failureCount; // @synthesize failureCount=_failureCount;
- (double)requiredDelay;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (_Bool)allowsTransferChannel:(long long)arg1;
- (long long)increaseAndGetFailureCount;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (_Bool)isFinished;
- (unsigned long long)type;

@end

