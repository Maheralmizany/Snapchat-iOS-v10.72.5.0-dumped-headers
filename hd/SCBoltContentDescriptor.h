//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, GPBUInt64Array, GPBUInt64Value, NSMutableArray, NSString, SCBoltApplicationVersion;

@interface SCBoltContentDescriptor : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)futureLocationIdContainsId:(long long)arg1;
- (_Bool)readyLocationIdContainsId:(long long)arg1;
- (id)readyLocationIds;
- (id)readyLocationIdsByNow;

// Remaining properties
@property(nonatomic) unsigned int claimId; // @dynamic claimId;
@property(retain, nonatomic) GPBTimestamp *contentDescriptorExpiryTime; // @dynamic contentDescriptorExpiryTime;
@property(retain, nonatomic) GPBTimestamp *contentExpiryTime; // @dynamic contentExpiryTime;
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(retain, nonatomic) GPBUInt64Value *contentLength; // @dynamic contentLength;
@property(retain, nonatomic) NSMutableArray *contentPathPartsArray; // @dynamic contentPathPartsArray;
@property(readonly, nonatomic) unsigned long long contentPathPartsArray_Count; // @dynamic contentPathPartsArray_Count;
@property(retain, nonatomic) GPBUInt64Array *futureLocationIdsArray; // @dynamic futureLocationIdsArray;
@property(readonly, nonatomic) unsigned long long futureLocationIdsArray_Count; // @dynamic futureLocationIdsArray_Count;
@property(retain, nonatomic) GPBTimestamp *futureLocationsReadyTime; // @dynamic futureLocationsReadyTime;
@property(nonatomic) _Bool hasContentDescriptorExpiryTime; // @dynamic hasContentDescriptorExpiryTime;
@property(nonatomic) _Bool hasContentExpiryTime; // @dynamic hasContentExpiryTime;
@property(nonatomic) _Bool hasContentLength; // @dynamic hasContentLength;
@property(nonatomic) _Bool hasFutureLocationsReadyTime; // @dynamic hasFutureLocationsReadyTime;
@property(nonatomic) _Bool hasMinimumSupportedApplicationVersion; // @dynamic hasMinimumSupportedApplicationVersion;
@property(nonatomic) unsigned int hostPatternVersion; // @dynamic hostPatternVersion;
@property(retain, nonatomic) SCBoltApplicationVersion *minimumSupportedApplicationVersion; // @dynamic minimumSupportedApplicationVersion;
@property(retain, nonatomic) GPBUInt64Array *readyLocationIdsArray; // @dynamic readyLocationIdsArray;
@property(readonly, nonatomic) unsigned long long readyLocationIdsArray_Count; // @dynamic readyLocationIdsArray_Count;
@property(nonatomic) unsigned int useCase; // @dynamic useCase;

@end

