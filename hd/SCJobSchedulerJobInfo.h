//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface SCJobSchedulerJobInfo : SCDocObject <NSCopying>
{
    unsigned int _state;
    int _attemptCount;
    NSString *_uuid;
    NSString *_type;
    NSString *_identifier;
    double _submittedTimestamp;
    double _scheduledTimestamp;
    NSData *_config;
    NSData *_input;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) int attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, copy, nonatomic) NSData *input; // @synthesize input=_input;
@property(readonly, copy, nonatomic) NSData *config; // @synthesize config=_config;
@property(readonly, nonatomic) double scheduledTimestamp; // @synthesize scheduledTimestamp=_scheduledTimestamp;
@property(readonly, nonatomic) double submittedTimestamp; // @synthesize submittedTimestamp=_submittedTimestamp;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUuid:(id)arg1 type:(id)arg2 identifier:(id)arg3 state:(unsigned int)arg4 submittedTimestamp:(double)arg5 scheduledTimestamp:(double)arg6 config:(id)arg7 input:(id)arg8 attemptCount:(int)arg9;

@end

