//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ConceptContext, KeywordContext, NSString, UserContext, VenueContext, WeatherContext;

@interface ContextualServiceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ConceptContext *conceptContext; // @dynamic conceptContext;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(nonatomic) _Bool hasConceptContext; // @dynamic hasConceptContext;
@property(nonatomic) _Bool hasKeywordContext; // @dynamic hasKeywordContext;
@property(nonatomic) _Bool hasUserContext; // @dynamic hasUserContext;
@property(nonatomic) _Bool hasVenueContext; // @dynamic hasVenueContext;
@property(nonatomic) _Bool hasWeatherContext; // @dynamic hasWeatherContext;
@property(retain, nonatomic) KeywordContext *keywordContext; // @dynamic keywordContext;
@property(retain, nonatomic) UserContext *userContext; // @dynamic userContext;
@property(retain, nonatomic) VenueContext *venueContext; // @dynamic venueContext;
@property(retain, nonatomic) WeatherContext *weatherContext; // @dynamic weatherContext;

@end

