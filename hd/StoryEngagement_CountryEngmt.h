//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, StoryFeedback;

@interface StoryEngagement_CountryEngmt : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) StoryFeedback *engmt; // @dynamic engmt;
@property(nonatomic) _Bool hasEngmt; // @dynamic hasEngmt;

@end
