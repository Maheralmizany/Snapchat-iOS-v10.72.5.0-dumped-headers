//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTPointOfInterest;

@interface SCMTPipelinePointOfInterest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPoi; // @dynamic hasPoi;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool isPopupStory; // @dynamic isPopupStory;
@property(nonatomic) int leadSourceMask; // @dynamic leadSourceMask;
@property(nonatomic) float minAllowedZoom; // @dynamic minAllowedZoom;
@property(retain, nonatomic) SCMTPointOfInterest *poi; // @dynamic poi;

@end

