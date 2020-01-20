//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSALocationParams : NSObject
{
    int _intervalMillis;
    double _distanceFilterMeters;
    double _desiredAccuracy;
}

@property(readonly, nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(readonly, nonatomic) double distanceFilterMeters; // @synthesize distanceFilterMeters=_distanceFilterMeters;
@property(readonly, nonatomic) int intervalMillis; // @synthesize intervalMillis=_intervalMillis;
- (id)initWithIntervalMillis:(int)arg1 distanceFilterMeters:(double)arg2 desiredAccuracy:(double)arg3;

@end
