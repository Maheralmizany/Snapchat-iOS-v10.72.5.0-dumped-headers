//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2StoryViewsAnnotation, SCR2VenueFilterAnnotation;

@interface SCR2PlaceAnnotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStoryViewsAnnotation; // @dynamic hasStoryViewsAnnotation;
@property(nonatomic) _Bool hasVenueFilterAnnotation; // @dynamic hasVenueFilterAnnotation;
@property(retain, nonatomic) SCR2StoryViewsAnnotation *storyViewsAnnotation; // @dynamic storyViewsAnnotation;
@property(retain, nonatomic) SCR2VenueFilterAnnotation *venueFilterAnnotation; // @dynamic venueFilterAnnotation;

@end

