//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCCheetahLongImpressionItem : NSObject <NSCopying>
{
    _Bool _isProminent;
    _Bool _hasReplayOverlay;
    NSString *_identifier;
    NSString *_thumbnailId;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    NSString *_triggeringItemId;
    long long _itemPos;
    long long _source;
    NSString *_sectionIdentifier;
    NSString *_pageTypeSpecific;
    long long _pageType;
}

@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(readonly, copy, nonatomic) NSString *pageTypeSpecific; // @synthesize pageTypeSpecific=_pageTypeSpecific;
@property(readonly, nonatomic) _Bool hasReplayOverlay; // @synthesize hasReplayOverlay=_hasReplayOverlay;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isProminent; // @synthesize isProminent=_isProminent;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 thumbnailId:(id)arg2 storyLoggingInfo:(id)arg3 triggeringItemId:(id)arg4 itemPos:(long long)arg5 isProminent:(_Bool)arg6 source:(long long)arg7 sectionIdentifier:(id)arg8 hasReplayOverlay:(_Bool)arg9 pageTypeSpecific:(id)arg10 pageType:(long long)arg11;

@end
