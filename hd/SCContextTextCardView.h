//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCContextImage;

@interface SCContextTextCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) unsigned int cutoff; // @dynamic cutoff;
@property(nonatomic) _Bool hasIconImage; // @dynamic hasIconImage;
@property(retain, nonatomic) SCContextImage *iconImage; // @dynamic iconImage;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

