//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SDMLensCarousel;

@interface SDMCameraAttachment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SDMLensCarousel *carousel; // @dynamic carousel;
@property(nonatomic) _Bool hasCarousel; // @dynamic hasCarousel;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int sendToBehavior; // @dynamic sendToBehavior;

@end
