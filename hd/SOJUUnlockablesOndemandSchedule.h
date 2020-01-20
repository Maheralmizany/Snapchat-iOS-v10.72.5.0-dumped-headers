//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesOndemandSchedule.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandSchedule : NSObject <SOJUUnlockablesOndemandSchedule>
{
    NSNumber *_startTimestamp;
    NSNumber *_endTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, copy, nonatomic) NSNumber *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
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
- (id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)endTimestampValue;
- (long long)startTimestampValue;
- (id)timeRemainingToDate:(id)arg1;
- (id)timeRemaining;
- (_Bool)isGeofilterCompleted;
- (_Bool)isGeofilterGoingLive;
- (_Bool)isGeofilterLive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
