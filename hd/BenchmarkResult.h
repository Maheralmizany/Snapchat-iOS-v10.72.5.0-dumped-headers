//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class BenchmarkValue;

@interface BenchmarkResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) int name; // @dynamic name;
@property(retain, nonatomic) BenchmarkValue *value; // @dynamic value;

@end

