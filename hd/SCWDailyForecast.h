//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCWWeather;

@interface SCWDailyForecast : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCWWeather *day; // @dynamic day;
@property(nonatomic) _Bool hasDay; // @dynamic hasDay;
@property(nonatomic) _Bool hasNight; // @dynamic hasNight;
@property(retain, nonatomic) SCWWeather *night; // @dynamic night;

@end

