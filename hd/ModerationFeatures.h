//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Audience, BrandSafety, ContentQuality;

@interface ModerationFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Audience *audience; // @dynamic audience;
@property(retain, nonatomic) BrandSafety *brandSafety; // @dynamic brandSafety;
@property(retain, nonatomic) ContentQuality *contentQuality; // @dynamic contentQuality;
@property(nonatomic) _Bool hasAudience; // @dynamic hasAudience;
@property(nonatomic) _Bool hasBrandSafety; // @dynamic hasBrandSafety;
@property(nonatomic) _Bool hasContentQuality; // @dynamic hasContentQuality;

@end

