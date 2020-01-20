//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface LSAWeatherData : NSObject
{
    NSNumber *_celsius;
    NSNumber *_fahrenheit;
    NSString *_locationName;
    NSArray *_hourlyForecast;
}

@property(readonly, copy, nonatomic) NSArray *hourlyForecast; // @synthesize hourlyForecast=_hourlyForecast;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(readonly, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
@property(readonly, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
- (void).cxx_destruct;
- (id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 locationName:(id)arg3 hourlyForecast:(id)arg4;

@end
