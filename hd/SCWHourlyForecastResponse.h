//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMapsAddress, SCWTimeZone;

@interface SCWHourlyForecastResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMapsAddress *address; // @dynamic address;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(retain, nonatomic) NSMutableArray *hourlyForecastArray; // @dynamic hourlyForecastArray;
@property(readonly, nonatomic) unsigned long long hourlyForecastArray_Count; // @dynamic hourlyForecastArray_Count;
@property(retain, nonatomic) SCWTimeZone *timeZone; // @dynamic timeZone;

@end
