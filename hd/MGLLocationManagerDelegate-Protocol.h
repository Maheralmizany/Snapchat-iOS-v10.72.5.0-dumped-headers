//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGLLocationManager, NSArray;

@protocol MGLLocationManagerDelegate <NSObject>

@optional
- (void)locationManagerDidStopLocationUpdates:(MGLLocationManager *)arg1;
- (void)locationManagerBackgroundLocationUpdatesDidAutomaticallyPause:(MGLLocationManager *)arg1;
- (void)locationManagerBackgroundLocationUpdatesDidTimeout:(MGLLocationManager *)arg1;
- (void)locationManagerDidStartLocationUpdates:(MGLLocationManager *)arg1;
- (void)locationManager:(MGLLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
@end

