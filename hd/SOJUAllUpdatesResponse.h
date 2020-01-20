//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAllUpdatesResponse.h"

@class NSArray, NSNumber, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFeatureSettingsResponse, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUMessagingGatewayInfo, SOJUSecuritySecurityInfoResponse, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUStudySettings, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@interface SOJUAllUpdatesResponse : NSObject <SOJUAllUpdatesResponse>
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUMessagingGatewayInfo *_messagingGatewayInfo;
    SOJUUpdatesResponse *_updatesResponse;
    SOJUFriendsResponse *_friendsResponse;
    SOJUStoriesResponse *_storiesResponse;
    SOJUFeedResponseInfo *_feedResponseInfo;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    SOJUConversationsResponseInfo *_conversationsResponseInfo;
    SOJUDiscoverResponse *_discover;
    SOJUIdentityIdentityCheckResponse *_identityCheckResponse;
    SOJUSponsoredSlug *_sponsored;
    SOJUSupportToolsSupportToolsResponse *_supportToolsResponseDeprecated;
    SOJUSecuritySecurityInfoResponse *_secInfo;
    NSString *_backgroundFetchSecretKey;
    SOJUFeedDeltaSyncToken *_feedDeltaSyncToken;
    SOJUStudySettings *_studySettings;
    SOJUFeatureSettingsResponse *_featureSettings;
    NSNumber *_forceFullSyncFeedItems;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *forceFullSyncFeedItems; // @synthesize forceFullSyncFeedItems=_forceFullSyncFeedItems;
@property(readonly, copy, nonatomic) SOJUFeatureSettingsResponse *featureSettings; // @synthesize featureSettings=_featureSettings;
@property(readonly, copy, nonatomic) SOJUStudySettings *studySettings; // @synthesize studySettings=_studySettings;
@property(readonly, copy, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @synthesize feedDeltaSyncToken=_feedDeltaSyncToken;
@property(readonly, copy, nonatomic) NSString *backgroundFetchSecretKey; // @synthesize backgroundFetchSecretKey=_backgroundFetchSecretKey;
@property(readonly, copy, nonatomic) SOJUSecuritySecurityInfoResponse *secInfo; // @synthesize secInfo=_secInfo;
@property(readonly, copy, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponseDeprecated; // @synthesize supportToolsResponseDeprecated=_supportToolsResponseDeprecated;
@property(readonly, copy, nonatomic) SOJUSponsoredSlug *sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, copy, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse; // @synthesize identityCheckResponse=_identityCheckResponse;
@property(readonly, copy, nonatomic) SOJUDiscoverResponse *discover; // @synthesize discover=_discover;
@property(readonly, copy, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @synthesize conversationsResponseInfo=_conversationsResponseInfo;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponseInfo; // @synthesize feedResponseInfo=_feedResponseInfo;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storiesResponse; // @synthesize storiesResponse=_storiesResponse;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *friendsResponse; // @synthesize friendsResponse=_friendsResponse;
@property(readonly, copy, nonatomic) SOJUUpdatesResponse *updatesResponse; // @synthesize updatesResponse=_updatesResponse;
@property(readonly, copy, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @synthesize messagingGatewayInfo=_messagingGatewayInfo;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 storiesResponse:(id)arg5 feedResponseInfo:(id)arg6 mischiefResponse:(id)arg7 conversationsResponse:(id)arg8 conversationsResponseInfo:(id)arg9 discover:(id)arg10 identityCheckResponse:(id)arg11 sponsored:(id)arg12 supportToolsResponseDeprecated:(id)arg13 secInfo:(id)arg14 backgroundFetchSecretKey:(id)arg15 feedDeltaSyncToken:(id)arg16 studySettings:(id)arg17 featureSettings:(id)arg18 forceFullSyncFeedItems:(id)arg19;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)forceFullSyncFeedItemsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

