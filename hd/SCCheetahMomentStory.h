//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString, SCPremiumTileBadge, SCSearchStreamingMediaInfo, SCSearchThumbnail;

@interface SCCheetahMomentStory : NSObject <NSCopying, NSCoding>
{
    _Bool _isLive;
    int _pollIntervalSecs;
    NSString *_storyId;
    SCSearchThumbnail *_imageThumbnail;
    NSString *_title;
    NSString *_subTitle;
    NSString *_miniProfileDescription;
    NSString *_miniProfileIconUrl;
    NSString *_miniProfileTitle;
    double _displayTimestampSecs;
    NSString *_chromeSubtitle;
    SCSearchStreamingMediaInfo *_streamingMediaInfo;
    long long _endTimeSecs;
    NSString *_endStreamImageURL;
    NSString *_endStreamDescription;
    NSString *_endStreamOptInButtonText;
    NSDictionary *_authHeaders;
    NSString *_lowLatencyManifestURL;
    SCPremiumTileBadge *_tileBadge;
}

@property(readonly, copy, nonatomic) SCPremiumTileBadge *tileBadge; // @synthesize tileBadge=_tileBadge;
@property(readonly, copy, nonatomic) NSString *lowLatencyManifestURL; // @synthesize lowLatencyManifestURL=_lowLatencyManifestURL;
@property(readonly, copy, nonatomic) NSDictionary *authHeaders; // @synthesize authHeaders=_authHeaders;
@property(readonly, copy, nonatomic) NSString *endStreamOptInButtonText; // @synthesize endStreamOptInButtonText=_endStreamOptInButtonText;
@property(readonly, copy, nonatomic) NSString *endStreamDescription; // @synthesize endStreamDescription=_endStreamDescription;
@property(readonly, copy, nonatomic) NSString *endStreamImageURL; // @synthesize endStreamImageURL=_endStreamImageURL;
@property(readonly, nonatomic) long long endTimeSecs; // @synthesize endTimeSecs=_endTimeSecs;
@property(readonly, nonatomic) int pollIntervalSecs; // @synthesize pollIntervalSecs=_pollIntervalSecs;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *streamingMediaInfo; // @synthesize streamingMediaInfo=_streamingMediaInfo;
@property(readonly, copy, nonatomic) NSString *chromeSubtitle; // @synthesize chromeSubtitle=_chromeSubtitle;
@property(readonly, nonatomic) double displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, copy, nonatomic) NSString *miniProfileTitle; // @synthesize miniProfileTitle=_miniProfileTitle;
@property(readonly, copy, nonatomic) NSString *miniProfileIconUrl; // @synthesize miniProfileIconUrl=_miniProfileIconUrl;
@property(readonly, copy, nonatomic) NSString *miniProfileDescription; // @synthesize miniProfileDescription=_miniProfileDescription;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) SCSearchThumbnail *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryId:(id)arg1 isLive:(_Bool)arg2 imageThumbnail:(id)arg3 title:(id)arg4 subTitle:(id)arg5 miniProfileDescription:(id)arg6 miniProfileIconUrl:(id)arg7 miniProfileTitle:(id)arg8 displayTimestampSecs:(double)arg9 chromeSubtitle:(id)arg10 streamingMediaInfo:(id)arg11 pollIntervalSecs:(int)arg12 endTimeSecs:(long long)arg13 endStreamImageURL:(id)arg14 endStreamDescription:(id)arg15 endStreamOptInButtonText:(id)arg16 authHeaders:(id)arg17 lowLatencyManifestURL:(id)arg18 tileBadge:(id)arg19;
- (id)initWithCoder:(id)arg1;

@end

