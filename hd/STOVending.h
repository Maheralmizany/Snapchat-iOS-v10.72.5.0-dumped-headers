//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface STOVending : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long firstPublishedAtMs; // @dynamic firstPublishedAtMs;
@property(nonatomic) _Bool isLatestStoryForOwner; // @dynamic isLatestStoryForOwner;
@property(nonatomic) long long lastNewsVersionUpdateMs; // @dynamic lastNewsVersionUpdateMs;
@property(nonatomic) long long lastPublishedAtMs; // @dynamic lastPublishedAtMs;
@property(nonatomic) long long newsVersion; // @dynamic newsVersion;
@property(copy, nonatomic) NSString *vendingVersion; // @dynamic vendingVersion;

@end
