//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEmpty;

@interface SCMessagingDuration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int displayDurationOneOfCase; // @dynamic displayDurationOneOfCase;
@property(nonatomic) unsigned int durationSeconds; // @dynamic durationSeconds;
@property(retain, nonatomic) GPBEmpty *infinite; // @dynamic infinite;
@property(retain, nonatomic) GPBEmpty *playOnce; // @dynamic playOnce;

@end

