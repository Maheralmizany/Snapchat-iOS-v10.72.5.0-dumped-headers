//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCBandwidthAccuracyRecord : NSObject
{
    double _recordStartTime;
    unsigned long long _zippedBytesTransmittedWhenRequestStart;
    long long _estimatedBandwidthWhenRequestStart;
}

@property(nonatomic) long long estimatedBandwidthWhenRequestStart; // @synthesize estimatedBandwidthWhenRequestStart=_estimatedBandwidthWhenRequestStart;
@property(nonatomic) unsigned long long zippedBytesTransmittedWhenRequestStart; // @synthesize zippedBytesTransmittedWhenRequestStart=_zippedBytesTransmittedWhenRequestStart;
@property(nonatomic) double recordStartTime; // @synthesize recordStartTime=_recordStartTime;
- (id)initWithZippedBytesTransmittedWhenRequestStart:(unsigned long long)arg1 estimatedBandwidthWhenRequestStart:(long long)arg2;

@end

