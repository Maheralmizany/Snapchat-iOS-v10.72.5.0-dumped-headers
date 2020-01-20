//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFriendStoryInteraction.h"

@class NSNumber, NSString;

@interface SOJUFriendStoryInteraction : NSObject <SOJUFriendStoryInteraction>
{
    NSString *_idValue;
    NSNumber *_totalImpressionTimeMs;
    NSNumber *_latestImpressionTimestamp;
    NSNumber *_numWatches;
    NSNumber *_latestWatchTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *latestWatchTimestamp; // @synthesize latestWatchTimestamp=_latestWatchTimestamp;
@property(readonly, copy, nonatomic) NSNumber *numWatches; // @synthesize numWatches=_numWatches;
@property(readonly, copy, nonatomic) NSNumber *latestImpressionTimestamp; // @synthesize latestImpressionTimestamp=_latestImpressionTimestamp;
@property(readonly, copy, nonatomic) NSNumber *totalImpressionTimeMs; // @synthesize totalImpressionTimeMs=_totalImpressionTimeMs;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 totalImpressionTimeMs:(id)arg2 latestImpressionTimestamp:(id)arg3 numWatches:(id)arg4 latestWatchTimestamp:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)latestWatchTimestampValue;
- (int)numWatchesValue;
- (long long)latestImpressionTimestampValue;
- (int)totalImpressionTimeMsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

