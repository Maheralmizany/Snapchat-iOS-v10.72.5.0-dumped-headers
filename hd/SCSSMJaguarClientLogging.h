//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCSSMJaguarClientLogging : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *actionLoggingExtension; // @dynamic actionLoggingExtension;
@property(copy, nonatomic) NSData *commonLoggingExtension; // @dynamic commonLoggingExtension;
@property(copy, nonatomic) NSData *impressionLoggingExtension; // @dynamic impressionLoggingExtension;
@property(nonatomic) _Bool isBoostedStory; // @dynamic isBoostedStory;
@property(nonatomic) unsigned long long tapStoryKey; // @dynamic tapStoryKey;
@property(copy, nonatomic) NSString *tileLoggingKey; // @dynamic tileLoggingKey;
@property(copy, nonatomic) NSString *variantLoggingKey; // @dynamic variantLoggingKey;
@property(copy, nonatomic) NSData *viewSessionLoggingExtension; // @dynamic viewSessionLoggingExtension;

@end

