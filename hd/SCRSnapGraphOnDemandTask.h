//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCRSnapGraphOnDemandTask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *ancestorId; // @dynamic ancestorId;
@property(copy, nonatomic) NSString *dedupKey; // @dynamic dedupKey;
@property(copy, nonatomic) NSString *entityType; // @dynamic entityType;
@property(nonatomic) _Bool fetchStoryWithExpandedSnaps; // @dynamic fetchStoryWithExpandedSnaps;
@property(nonatomic) float importance; // @dynamic importance;
@property(nonatomic) float priority; // @dynamic priority;
@property(copy, nonatomic) NSString *reasonForRequest; // @dynamic reasonForRequest;
@property(copy, nonatomic) NSString *storyType; // @dynamic storyType;

@end

