//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBRange, NSData, NSString;

@interface MLBLogData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBRange *actualRange; // @dynamic actualRange;
@property(copy, nonatomic) NSData *data_p; // @dynamic data_p;
@property(nonatomic) _Bool hasActualRange; // @dynamic hasActualRange;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasRequestedRange; // @dynamic hasRequestedRange;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) MLBRange *requestedRange; // @dynamic requestedRange;

@end

