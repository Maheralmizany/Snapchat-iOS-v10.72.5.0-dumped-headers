//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, StickerFeature;

@interface StickerProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) StickerFeature *features; // @dynamic features;
@property(nonatomic) _Bool hasFeatures; // @dynamic hasFeatures;
@property(copy, nonatomic) NSString *stickerId; // @dynamic stickerId;
@property(nonatomic) int stickerType; // @dynamic stickerType;

@end

