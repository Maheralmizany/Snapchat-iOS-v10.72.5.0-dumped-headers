//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@interface Retry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int maxBackoffExponent; // @dynamic maxBackoffExponent;
@property(nonatomic) unsigned int maxRetryCount; // @dynamic maxRetryCount;
@property(nonatomic) unsigned int retryIntervalSec; // @dynamic retryIntervalSec;
@property(nonatomic) int retryType; // @dynamic retryType;

@end
