//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTActionSticker;

@interface SCMTUpdateActionStickerRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTActionSticker *actionSticker; // @dynamic actionSticker;
@property(copy, nonatomic) NSString *ghostId; // @dynamic ghostId;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;

@end

