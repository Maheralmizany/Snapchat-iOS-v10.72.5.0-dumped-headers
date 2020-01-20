//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceFileReader.h"

@class NSMutableArray, NSString;

@interface SCTraceFileCatapultJsonReader : NSObject <SCTraceFileReader>
{
    NSMutableArray *_catapultJson;
    struct unordered_map<unsigned long long, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long>>>>> _enclosedTimestamp;
    unsigned long long _minDuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncEventEnd:(id)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 uid:(unsigned int)arg4 tid:(unsigned long long)arg5;
- (void)asyncEventSignal:(id)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 uid:(unsigned int)arg4 tid:(unsigned long long)arg5;
- (void)asyncEventBegin:(id)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 uid:(unsigned int)arg4 tid:(unsigned long long)arg5;
- (void)flowEventEnd:(const char *)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 uid:(unsigned int)arg4 tid:(unsigned long long)arg5;
- (void)flowEventBegin:(const char *)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 uid:(unsigned int)arg4 tid:(unsigned long long)arg5;
- (void)durationEventEndWithCategory:(id)arg1 timestamp:(unsigned long long)arg2 threadtime:(unsigned long long)arg3 tid:(unsigned long long)arg4;
- (void)durationEventSignal:(id)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 threadtime:(unsigned long long)arg4 tid:(unsigned long long)arg5;
- (void)durationEventBegin:(const char *)arg1 category:(id)arg2 timestamp:(unsigned long long)arg3 threadtime:(unsigned long long)arg4 tid:(unsigned long long)arg5;
- (id)catapultJson;
- (id)initWithMinDuration:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

