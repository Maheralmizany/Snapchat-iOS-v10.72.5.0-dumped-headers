//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCR2GeoLocation;

@interface SCR2GetCandidateStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *existingSubtextHintArray; // @dynamic existingSubtextHintArray;
@property(readonly, nonatomic) unsigned long long existingSubtextHintArray_Count; // @dynamic existingSubtextHintArray_Count;
@property(nonatomic) _Bool hasUserLocation; // @dynamic hasUserLocation;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(retain, nonatomic) SCR2GeoLocation *userLocation; // @dynamic userLocation;

@end

