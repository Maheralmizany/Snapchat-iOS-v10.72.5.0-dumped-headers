//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCQueuePerformer;

@interface SCFileIOErrorMonitor : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableArray *_errorMetrics;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)generateReport:(CDUnknownBlockType)arg1;
- (void)logFileWriteWithError:(id)arg1 type:(unsigned long long)arg2;
- (id)_nameForFileIOType:(unsigned long long)arg1;
- (void)_resetErrorMetrics;
- (id)init;

@end
