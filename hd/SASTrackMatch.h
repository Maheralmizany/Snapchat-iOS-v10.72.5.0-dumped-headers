//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SASTrackMatch : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double matchLength; // @dynamic matchLength;
@property(nonatomic) int matchScore; // @dynamic matchScore;
@property(nonatomic) double matchTime; // @dynamic matchTime;
@property(copy, nonatomic) NSString *submissionId; // @dynamic submissionId;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;

@end

