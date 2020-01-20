//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

@interface SCVenueFetchConstraint : NSObject <NSCopying>
{
    double _radius;
    NSDate *_expirationDate;
    struct CLLocationCoordinate2D _centerCoordinate;
}

+ (id)withSCMECheckinLocationsConstraint:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 expirationDate:(id)arg3;
- (_Bool)allowFetchForCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

