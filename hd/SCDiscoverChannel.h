//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCAdOwnerProtocol.h"
#import "SCFilterableProtocol.h"
#import "SCMediaOwnerProtocol.h"
#import "SCSubscribableContent.h"

@class NSString, NSURL, SCDiscoverEdition, SCPublisherAdMetadata, UIColor;

@interface SCDiscoverChannel : NSObject <NSCoding, SCAdOwnerProtocol, SCMediaOwnerProtocol, SCFilterableProtocol, SCSubscribableContent>
{
    _Bool _isShow;
    _Bool _isNews;
    _Bool _allowSubscribe;
    _Bool _isOutOfRegionChannel;
    _Bool _rollingNewsEnabled;
    _Bool _isShareable;
    NSString *_displayName;
    NSString *_name;
    NSString *_uniqueName;
    UIColor *_primaryPublisherColor;
    UIColor *_secondaryPublisherColor;
    UIColor *_logoGradientColor;
    NSString *_currentHash;
    NSString *_publisherDescription;
    long long _publisherId;
    long long _editionId;
    NSURL *_filledIconURL;
    NSURL *_searchIconURL;
    NSURL *_horizontalIconURL;
    NSString *_publisherDeepLink;
    SCDiscoverEdition *_archivedEdition;
    SCDiscoverEdition *_currentEdition;
    long long _editionPublishingTimestamp;
    unsigned long long _subscribeState;
    unsigned long long _optInNotificationsState;
    NSString *_showId;
    NSString *_businessId;
    SCPublisherAdMetadata *_adMetadata;
    id <SCImageDownloading> _imageDownloader;
    NSString *_currentTrackingId;
    unsigned long long _filledIconMediaState;
    SCDiscoverEdition *_displayedOutdatedEdition;
}

+ (void)checkIntegrityOfChannel:(id)arg1 withSojuChannel:(id)arg2;
+ (long long)blizzardEnumForViewContext:(unsigned long long)arg1;
+ (id)descriptionForViewContext:(unsigned long long)arg1;
@property(retain, nonatomic) SCDiscoverEdition *displayedOutdatedEdition; // @synthesize displayedOutdatedEdition=_displayedOutdatedEdition;
@property(nonatomic) unsigned long long filledIconMediaState; // @synthesize filledIconMediaState=_filledIconMediaState;
@property(readonly, copy, nonatomic) NSString *currentTrackingId; // @synthesize currentTrackingId=_currentTrackingId;
@property(nonatomic) __weak id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) SCPublisherAdMetadata *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(nonatomic) unsigned long long optInNotificationsState; // @synthesize optInNotificationsState=_optInNotificationsState;
@property(nonatomic) unsigned long long subscribeState; // @synthesize subscribeState=_subscribeState;
@property(readonly, nonatomic) long long editionPublishingTimestamp; // @synthesize editionPublishingTimestamp=_editionPublishingTimestamp;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(retain, nonatomic) SCDiscoverEdition *currentEdition; // @synthesize currentEdition=_currentEdition;
@property(retain, nonatomic) SCDiscoverEdition *archivedEdition; // @synthesize archivedEdition=_archivedEdition;
@property(copy, nonatomic) NSString *publisherDeepLink; // @synthesize publisherDeepLink=_publisherDeepLink;
@property(retain, nonatomic) NSURL *horizontalIconURL; // @synthesize horizontalIconURL=_horizontalIconURL;
@property(retain, nonatomic) NSURL *searchIconURL; // @synthesize searchIconURL=_searchIconURL;
@property(retain, nonatomic) NSURL *filledIconURL; // @synthesize filledIconURL=_filledIconURL;
@property(nonatomic) _Bool rollingNewsEnabled; // @synthesize rollingNewsEnabled=_rollingNewsEnabled;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
@property(readonly, nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, nonatomic) _Bool isOutOfRegionChannel; // @synthesize isOutOfRegionChannel=_isOutOfRegionChannel;
@property(copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
@property(nonatomic) _Bool allowSubscribe; // @synthesize allowSubscribe=_allowSubscribe;
@property(copy, nonatomic) NSString *currentHash; // @synthesize currentHash=_currentHash;
@property(readonly, nonatomic) _Bool isNews; // @synthesize isNews=_isNews;
@property(readonly, nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(readonly, nonatomic) UIColor *logoGradientColor; // @synthesize logoGradientColor=_logoGradientColor;
@property(retain, nonatomic) UIColor *secondaryPublisherColor; // @synthesize secondaryPublisherColor=_secondaryPublisherColor;
@property(retain, nonatomic) UIColor *primaryPublisherColor; // @synthesize primaryPublisherColor=_primaryPublisherColor;
@property(copy, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)recoverMissingFilledIconInChatWithCompletion:(CDUnknownBlockType)arg1;
- (id)iconUrlForKey:(id)arg1;
- (id)tileIdForTileCollection;
- (_Bool)supportsHiding;
- (_Bool)isSubscribed;
- (_Bool)isUnsubscribed;
- (_Bool)supportsSubscription;
- (id)posterName;
- (id)entityType;
- (id)entityId;
- (_Bool)matchesByDisplayName:(id)arg1;
- (id)mediaFileNames;
- (id)cacheMediaIds;
- (id)cacheAdIds;
- (id)requestContexts;
- (id)cacheKeyForIconType:(unsigned long long)arg1;
- (unsigned long long)iconTypeForCacheKey:(id)arg1;
- (void)iconWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchIconMediaIfNecessaryUserInitiated_DEPRECATED:(_Bool)arg1 context:(unsigned long long)arg2;
- (void)_fetchIconWithImageDownloader:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateCurrentEditionCover;
- (void)didFinishViewing;
- (_Bool)updateWithSojuChannel:(id)arg1 chunks:(id)arg2 mediaLoaderGuarantee:(_Bool)arg3;
- (void)updateAdMetedataIsUnskippableAdEnabled:(_Bool)arg1;
- (void)updateEditionId:(long long)arg1;
- (void)updatePublisherId:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)_didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (long long)_getEditionPublishingTimestampWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initOutOfRegionChannelWithName:(id)arg1 displayName:(id)arg2 uniqueName:(id)arg3 publisherDescription:(id)arg4 searchIconURL:(id)arg5 filledIconURL:(id)arg6 horizontalIconURL:(id)arg7 primaryPublisherColor:(id)arg8 secondaryPublisherColor:(id)arg9 logoGradientColor:(id)arg10 publisherDeepLink:(id)arg11 allowSubscribe:(_Bool)arg12 SCSubscribeState:(unsigned long long)arg13 OptInNotificationsState:(unsigned long long)arg14 isRemotePublisher:(_Bool)arg15 isShow:(_Bool)arg16 editionPublishingTimestamp:(long long)arg17 isNews:(_Bool)arg18 publisherId:(long long)arg19 editionId:(long long)arg20 isShareable:(_Bool)arg21 adMetadata:(id)arg22 rollingNewsEnabled:(_Bool)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
