//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString, SCChatMediaContent, SCChatMessageV3, SCLens, SCReportStoryMetadataParams;

@interface SCReportModel : NSObject
{
    _Bool _isCheetahStory;
    _Bool _isOfficialUser;
    NSString *_reasonId;
    SCChatMessageV3 *_chatMessageV3;
    SCChatMediaContent *_chatMediaContent;
    id <SCReportStoryDataParamsProvider> _storyDataProvider;
    SCReportStoryMetadataParams *_storyMetadataParams;
    SCLens *_lens;
    unsigned long long _storySnapSource;
    NSString *_reportedUserId;
    NSString *_reportedUsername;
    NSString *_reportedDisplayName;
    long long _reportType;
    NSString *_reportedAdId;
    long long _friendType;
    NSNumber *_snapId;
    NSNumber *_editionId;
    NSNumber *_timestampMillis;
    NSString *_snapProProfileId;
    NSString *_snapProProfileTitle;
    NSString *_tileId;
    NSString *_tileImageUrl;
    NSString *_tileHeadline;
    NSNumber *_publisherId;
    NSString *_storyId;
    NSData *_tileMedia;
    NSString *_snapProHighlightId;
    NSString *_snapProHighlightVersion;
    NSString *_snapProHighlightSnapId;
    long long _storyType;
}

+ (id)shared;
@property(nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(copy, nonatomic) NSString *snapProHighlightSnapId; // @synthesize snapProHighlightSnapId=_snapProHighlightSnapId;
@property(copy, nonatomic) NSString *snapProHighlightVersion; // @synthesize snapProHighlightVersion=_snapProHighlightVersion;
@property(copy, nonatomic) NSString *snapProHighlightId; // @synthesize snapProHighlightId=_snapProHighlightId;
@property(nonatomic) _Bool isOfficialUser; // @synthesize isOfficialUser=_isOfficialUser;
@property(copy, nonatomic) NSData *tileMedia; // @synthesize tileMedia=_tileMedia;
@property(copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(copy, nonatomic) NSNumber *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *tileHeadline; // @synthesize tileHeadline=_tileHeadline;
@property(copy, nonatomic) NSString *tileImageUrl; // @synthesize tileImageUrl=_tileImageUrl;
@property(copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
@property(readonly, copy, nonatomic) NSString *snapProProfileTitle; // @synthesize snapProProfileTitle=_snapProProfileTitle;
@property(copy, nonatomic) NSString *snapProProfileId; // @synthesize snapProProfileId=_snapProProfileId;
@property(copy, nonatomic) NSNumber *timestampMillis; // @synthesize timestampMillis=_timestampMillis;
@property(copy, nonatomic) NSNumber *editionId; // @synthesize editionId=_editionId;
@property(copy, nonatomic) NSNumber *snapId; // @synthesize snapId=_snapId;
@property(nonatomic) long long friendType; // @synthesize friendType=_friendType;
@property(copy, nonatomic) NSString *reportedAdId; // @synthesize reportedAdId=_reportedAdId;
@property(nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(copy, nonatomic) NSString *reportedDisplayName; // @synthesize reportedDisplayName=_reportedDisplayName;
@property(copy, nonatomic) NSString *reportedUsername; // @synthesize reportedUsername=_reportedUsername;
@property(copy, nonatomic) NSString *reportedUserId; // @synthesize reportedUserId=_reportedUserId;
@property(nonatomic) unsigned long long storySnapSource; // @synthesize storySnapSource=_storySnapSource;
@property(nonatomic) __weak SCLens *lens; // @synthesize lens=_lens;
@property(retain, nonatomic) SCReportStoryMetadataParams *storyMetadataParams; // @synthesize storyMetadataParams=_storyMetadataParams;
@property(retain, nonatomic) id <SCReportStoryDataParamsProvider> storyDataProvider; // @synthesize storyDataProvider=_storyDataProvider;
@property(retain, nonatomic) SCChatMediaContent *chatMediaContent; // @synthesize chatMediaContent=_chatMediaContent;
@property(retain, nonatomic) SCChatMessageV3 *chatMessageV3; // @synthesize chatMessageV3=_chatMessageV3;
@property(nonatomic) _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
@property(copy, nonatomic) NSString *reasonId; // @synthesize reasonId=_reasonId;
- (void).cxx_destruct;
- (void)resetReport;
- (id)clusterId;
- (id)reportTypeString;
- (void)prepareSnapProHighlightsSnapReportForProfileId:(id)arg1 highlightId:(id)arg2 highlightVersion:(id)arg3 highlightSnapId:(id)arg4;
- (void)prepareSnapProHighlightsTileReportForProfileId:(id)arg1 highlightId:(id)arg2 highlightVersion:(id)arg3;
- (void)prepareLensAndCreatorReportWithLens:(id)arg1;
- (void)prepareLensReport:(id)arg1;
- (void)prepareAdReport:(id)arg1 isCheetahStory:(_Bool)arg2;
- (void)prepareReportingStoryWithMetadata:(id)arg1 source:(unsigned long long)arg2;
- (void)prepareOurStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3;
- (void)prepareSearchStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3;
- (void)prepareMapStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3;
- (void)preparePublicUserStoryReport:(id)arg1 source:(unsigned long long)arg2;
- (void)prepareDiscoverTileReportWithSnapId:(id)arg1 storyId:(id)arg2 tileMedia:(id)arg3 tileHeadline:(id)arg4 timestampMillis:(id)arg5 username:(id)arg6 storyType:(long long)arg7 isOfficialUser:(_Bool)arg8;
- (void)prepareDiscoverPublisherTileReportWithTileId:(id)arg1 storyId:(id)arg2 tileImageUrl:(id)arg3 tileHeadline:(id)arg4 editionId:(id)arg5 timestampMillis:(id)arg6 publisherId:(id)arg7 publisherName:(id)arg8;
- (void)preparePublisherStoryReportWithPublisherId:(id)arg1 publisherName:(id)arg2 editionId:(id)arg3 editionTimestamp:(id)arg4 snapId:(id)arg5;
- (void)prepareStoryReportWithReportStoryDataParams:(id)arg1 source:(unsigned long long)arg2;
- (void)prepareStoryReport:(id)arg1 source:(unsigned long long)arg2;
- (void)prepareChatMessageV3Report:(id)arg1 mediaContent:(id)arg2;
- (void)prepareSnapchatterReportWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3;

@end

