//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCOREUUID;

@interface SCCTTopicSticker : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTopicId; // @dynamic hasTopicId;
@property(copy, nonatomic) NSString *stickerText; // @dynamic stickerText;
@property(retain, nonatomic) SCCOREUUID *topicId; // @dynamic topicId;

@end

