//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol SCWeather <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long weatherFilterViewType;
@property(readonly, copy, nonatomic) NSArray *dailyForecasts;
@property(readonly, copy, nonatomic) NSArray *hourlyForecasts;
@property(readonly, copy, nonatomic) NSString *locationName;
@property(readonly, nonatomic) float fahrenheit;
@property(readonly, nonatomic) float celsius;
@end

