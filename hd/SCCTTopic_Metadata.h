//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCCTTopic_Metadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long createdTime; // @dynamic createdTime;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) long long lastUpdatedTime; // @dynamic lastUpdatedTime;
@property(nonatomic) int priority; // @dynamic priority;
@property(copy, nonatomic) NSString *stickerText; // @dynamic stickerText;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
