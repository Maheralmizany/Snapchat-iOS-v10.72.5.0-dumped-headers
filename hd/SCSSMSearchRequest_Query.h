//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREGeoBoundingBox, SCSSMSearchRequest_Query_TimeBounds;

@interface SCSSMSearchRequest_Query : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREGeoBoundingBox *geoBound; // @dynamic geoBound;
@property(nonatomic) _Bool hasGeoBound; // @dynamic hasGeoBound;
@property(nonatomic) _Bool hasTimeBound; // @dynamic hasTimeBound;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) SCSSMSearchRequest_Query_TimeBounds *timeBound; // @dynamic timeBound;

@end

