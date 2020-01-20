//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSArray, NSString, SCStoriesThumbnailMedia;

@interface SCStoriesSummaryInfo : SCDocObject <NSCopying>
{
    _Bool _hasUnviewedStories;
    _Bool _customStoryCurrentUserCanPost;
    NSString *_identifier;
    long long _type;
    SCStoriesThumbnailMedia *_thumbnail;
    double _expirationDate;
    long long _numActiveStories;
    double _mostRecentStoryTimestamp;
    double _mostRecentUnviewedTimestamp;
    double _mostRecentViewedTimestamp;
    NSArray *_mediaSummaries;
    NSString *_customStoryPublicationId;
    long long _customStoryType;
    NSString *_customStoryDisplayName;
    NSArray *_customStoryPosterUsernames;
    long long _storyContentType;
    NSString *_mostRecentPosterUsername;
    NSString *_userId;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *mostRecentPosterUsername; // @synthesize mostRecentPosterUsername=_mostRecentPosterUsername;
@property(readonly, nonatomic) long long storyContentType; // @synthesize storyContentType=_storyContentType;
@property(readonly, nonatomic) _Bool customStoryCurrentUserCanPost; // @synthesize customStoryCurrentUserCanPost=_customStoryCurrentUserCanPost;
@property(readonly, copy, nonatomic) NSArray *customStoryPosterUsernames; // @synthesize customStoryPosterUsernames=_customStoryPosterUsernames;
@property(readonly, copy, nonatomic) NSString *customStoryDisplayName; // @synthesize customStoryDisplayName=_customStoryDisplayName;
@property(readonly, nonatomic) long long customStoryType; // @synthesize customStoryType=_customStoryType;
@property(readonly, copy, nonatomic) NSString *customStoryPublicationId; // @synthesize customStoryPublicationId=_customStoryPublicationId;
@property(readonly, copy, nonatomic) NSArray *mediaSummaries; // @synthesize mediaSummaries=_mediaSummaries;
@property(readonly, nonatomic) double mostRecentViewedTimestamp; // @synthesize mostRecentViewedTimestamp=_mostRecentViewedTimestamp;
@property(readonly, nonatomic) double mostRecentUnviewedTimestamp; // @synthesize mostRecentUnviewedTimestamp=_mostRecentUnviewedTimestamp;
@property(readonly, nonatomic) double mostRecentStoryTimestamp; // @synthesize mostRecentStoryTimestamp=_mostRecentStoryTimestamp;
@property(readonly, nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(readonly, nonatomic) long long numActiveStories; // @synthesize numActiveStories=_numActiveStories;
@property(readonly, nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) SCStoriesThumbnailMedia *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 thumbnail:(id)arg3 expirationDate:(double)arg4 numActiveStories:(long long)arg5 hasUnviewedStories:(_Bool)arg6 mostRecentStoryTimestamp:(double)arg7 mostRecentUnviewedTimestamp:(double)arg8 mostRecentViewedTimestamp:(double)arg9 mediaSummaries:(id)arg10 customStoryPublicationId:(id)arg11 customStoryType:(long long)arg12 customStoryDisplayName:(id)arg13 customStoryPosterUsernames:(id)arg14 customStoryCurrentUserCanPost:(_Bool)arg15 storyContentType:(long long)arg16 mostRecentPosterUsername:(id)arg17 userId:(id)arg18;

@end

