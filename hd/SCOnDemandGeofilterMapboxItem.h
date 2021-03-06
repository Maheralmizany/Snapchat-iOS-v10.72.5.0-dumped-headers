//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSString;

@interface SCOnDemandGeofilterMapboxItem : NSObject
{
    CLLocation *_location;
    NSString *_localName;
    NSString *_countyName;
    NSString *_stateName;
    NSString *_countryName;
}

+ (id)parseMapboxItemBasedOnFeatureResponse:(id)arg1;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
@property(copy, nonatomic) NSString *countyName; // @synthesize countyName=_countyName;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;

@end

