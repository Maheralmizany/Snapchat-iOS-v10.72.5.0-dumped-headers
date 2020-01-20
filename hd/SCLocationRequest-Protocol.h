//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol SCLocationRequest <NSObject, NSCopying>
- (_Bool)wantsActiveLocationMonitoring;
- (NSString *)trackingIdentifier;

@optional
- (NSArray *)wantsBeaconRegionMonitoring;
- (_Bool)wantsBackgroundLocationMonitoring;
- (_Bool)wantsActiveHeadingMonitoring;
- (double)desiredLocationAccuracy;
@end
