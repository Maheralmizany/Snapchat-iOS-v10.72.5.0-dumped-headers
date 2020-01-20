//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, SCQueuePerformer;

@interface SCFailedAttemptRecovery : NSObject <NSCoding>
{
    SCQueuePerformer *_performer;
    unsigned long long _retriesCount;
    double _attemptTimeout;
    unsigned long long _maxRetriesCount;
    double _sleepTimeout;
    NSDate *_lastMaxAttemptsTimestamp;
}

@property(retain, nonatomic) NSDate *lastMaxAttemptsTimestamp; // @synthesize lastMaxAttemptsTimestamp=_lastMaxAttemptsTimestamp;
@property(readonly) double sleepTimeout; // @synthesize sleepTimeout=_sleepTimeout;
@property(readonly) unsigned long long maxRetriesCount; // @synthesize maxRetriesCount=_maxRetriesCount;
@property(readonly) double attemptTimeout; // @synthesize attemptTimeout=_attemptTimeout;
- (void).cxx_destruct;
- (void)failWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createPerformer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttemptTimeout:(double)arg1 maxRetriesCount:(unsigned long long)arg2 sleepTimeout:(double)arg3;

@end
