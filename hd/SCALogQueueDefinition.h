//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SCALogQueueDefinition : NSObject <NSCopying, NSCoding>
{
    _Bool _fireAndForgetEnabled;
    NSString *_name;
    NSDictionary *_collectorUrls;
    NSNumber *_uploadThreshold;
    NSNumber *_overflowThreshold;
    NSNumber *_uploadInterval;
    NSNumber *_uploadTimeout;
    NSNumber *_initialProcessingDelay;
    NSNumber *_maxInMemoryBufferInterval;
    NSNumber *_burstDebounceInterval;
    NSNumber *_backoffUploadInBackground;
    NSNumber *_backoffUploadOnError;
    NSNumber *_backoffUploadOnUnreachable;
    NSNumber *_backoffUploadOnWWAN;
    NSNumber *_backoffUploadOnPowerSaver;
    unsigned long long _flushOnBackgrounding;
    NSNumber *_uploadBatchMax;
    NSNumber *_eventRemoveBatchSize;
    NSNumber *_eventSaveBatchSize;
    NSArray *_blacklistedEvents;
    NSNumber *_queuePriority;
}

@property(readonly, copy, nonatomic) NSNumber *queuePriority; // @synthesize queuePriority=_queuePriority;
@property(readonly, copy, nonatomic) NSArray *blacklistedEvents; // @synthesize blacklistedEvents=_blacklistedEvents;
@property(readonly, nonatomic) _Bool fireAndForgetEnabled; // @synthesize fireAndForgetEnabled=_fireAndForgetEnabled;
@property(readonly, copy, nonatomic) NSNumber *eventSaveBatchSize; // @synthesize eventSaveBatchSize=_eventSaveBatchSize;
@property(readonly, copy, nonatomic) NSNumber *eventRemoveBatchSize; // @synthesize eventRemoveBatchSize=_eventRemoveBatchSize;
@property(readonly, copy, nonatomic) NSNumber *uploadBatchMax; // @synthesize uploadBatchMax=_uploadBatchMax;
@property(readonly, nonatomic) unsigned long long flushOnBackgrounding; // @synthesize flushOnBackgrounding=_flushOnBackgrounding;
@property(readonly, copy, nonatomic) NSNumber *backoffUploadOnPowerSaver; // @synthesize backoffUploadOnPowerSaver=_backoffUploadOnPowerSaver;
@property(readonly, copy, nonatomic) NSNumber *backoffUploadOnWWAN; // @synthesize backoffUploadOnWWAN=_backoffUploadOnWWAN;
@property(readonly, copy, nonatomic) NSNumber *backoffUploadOnUnreachable; // @synthesize backoffUploadOnUnreachable=_backoffUploadOnUnreachable;
@property(readonly, copy, nonatomic) NSNumber *backoffUploadOnError; // @synthesize backoffUploadOnError=_backoffUploadOnError;
@property(readonly, copy, nonatomic) NSNumber *backoffUploadInBackground; // @synthesize backoffUploadInBackground=_backoffUploadInBackground;
@property(readonly, copy, nonatomic) NSNumber *burstDebounceInterval; // @synthesize burstDebounceInterval=_burstDebounceInterval;
@property(readonly, copy, nonatomic) NSNumber *maxInMemoryBufferInterval; // @synthesize maxInMemoryBufferInterval=_maxInMemoryBufferInterval;
@property(readonly, copy, nonatomic) NSNumber *initialProcessingDelay; // @synthesize initialProcessingDelay=_initialProcessingDelay;
@property(readonly, copy, nonatomic) NSNumber *uploadTimeout; // @synthesize uploadTimeout=_uploadTimeout;
@property(readonly, copy, nonatomic) NSNumber *uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property(readonly, copy, nonatomic) NSNumber *overflowThreshold; // @synthesize overflowThreshold=_overflowThreshold;
@property(readonly, copy, nonatomic) NSNumber *uploadThreshold; // @synthesize uploadThreshold=_uploadThreshold;
@property(readonly, copy, nonatomic) NSDictionary *collectorUrls; // @synthesize collectorUrls=_collectorUrls;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 collectorUrls:(id)arg2 uploadThreshold:(id)arg3 overflowThreshold:(id)arg4 uploadInterval:(id)arg5 uploadTimeout:(id)arg6 initialProcessingDelay:(id)arg7 maxInMemoryBufferInterval:(id)arg8 burstDebounceInterval:(id)arg9 backoffUploadInBackground:(id)arg10 backoffUploadOnError:(id)arg11 backoffUploadOnUnreachable:(id)arg12 backoffUploadOnWWAN:(id)arg13 backoffUploadOnPowerSaver:(id)arg14 flushOnBackgrounding:(unsigned long long)arg15 uploadBatchMax:(id)arg16 eventRemoveBatchSize:(id)arg17 eventSaveBatchSize:(id)arg18 fireAndForgetEnabled:(_Bool)arg19 blacklistedEvents:(id)arg20 queuePriority:(id)arg21;
- (id)initWithCoder:(id)arg1;
- (id)getCollectorUrlForStage:(long long)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)jsonDictionary;

@end

