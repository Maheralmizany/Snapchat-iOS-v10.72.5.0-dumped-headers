//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class JobConstraint, JobTiming, NSString, Retry;

@interface JobConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int existingJobPolicy; // @dynamic existingJobPolicy;
@property(nonatomic) _Bool hasJobConstraint; // @dynamic hasJobConstraint;
@property(nonatomic) _Bool hasJobTiming; // @dynamic hasJobTiming;
@property(nonatomic) _Bool hasRetry; // @dynamic hasRetry;
@property(retain, nonatomic) JobConstraint *jobConstraint; // @dynamic jobConstraint;
@property(nonatomic) int jobPersistence; // @dynamic jobPersistence;
@property(nonatomic) int jobScope; // @dynamic jobScope;
@property(copy, nonatomic) NSString *jobSubtypeIdentifier; // @dynamic jobSubtypeIdentifier;
@property(retain, nonatomic) JobTiming *jobTiming; // @dynamic jobTiming;
@property(nonatomic) unsigned int jobTtl; // @dynamic jobTtl;
@property(copy, nonatomic) NSString *jobTypeIdentifier; // @dynamic jobTypeIdentifier;
@property(retain, nonatomic) Retry *retry; // @dynamic retry;

@end
