//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGallerySnapcodeStickerStyle, SOJUGalleryStoryInviteStickerStyle, SOJUGalleryTopicStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@interface SOJUGalleryInfoStickerStyleBuilder : NSObject
{
    SOJUGalleryDateInfoFilter *_date;
    NSString *_weather;
    SOJUGalleryAltitudeInfoFilterStyle *_altitude;
    SOJUGalleryRatingStickerStyle *_rating;
    SOJUGalleryVenueFilterInfoStyle *_venue;
    SOJUGalleryGroupInfoFilterStyle *_group;
    SOJUGalleryMentionStickerStyle *_mention;
    SOJUGalleryRequestStickerStyle *_request;
    SOJUGallerySnapcodeStickerStyle *_snapcode;
    SOJUGalleryTopicStickerStyle *_topic;
    SOJUGalleryStoryInviteStickerStyle *_storyinvite;
}

+ (id)withJUGalleryInfoStickerStyle:(id)arg1;
- (void).cxx_destruct;
- (id)setStoryinvite:(id)arg1;
- (id)setTopic:(id)arg1;
- (id)setSnapcode:(id)arg1;
- (id)setRequest:(id)arg1;
- (id)setMention:(id)arg1;
- (id)setGroup:(id)arg1;
- (id)setVenue:(id)arg1;
- (id)setRating:(id)arg1;
- (id)setAltitude:(id)arg1;
- (id)setWeather:(id)arg1;
- (id)setDate:(id)arg1;
- (id)build;
- (id)setWeatherEnum:(long long)arg1;

@end
