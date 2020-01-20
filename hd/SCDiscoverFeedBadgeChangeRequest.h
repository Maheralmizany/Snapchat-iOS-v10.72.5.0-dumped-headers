//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDocObjectChangeRequest.h"

@class NSData, NSString, SCDiscoverFeedBadgeRenderInfo, SCDiscoverFeedBadgeTapDestination;

@interface SCDiscoverFeedBadgeChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_badgeId;
    long long _badgeType;
    NSData *_badgeMetadata;
    SCDiscoverFeedBadgeRenderInfo *_renderInfo;
    SCDiscoverFeedBadgeTapDestination *_tapDestination;
    double _fetchedTimestampInSec;
    double _serverNextRequestTimestampInSec;
}

+ (id)deletionRequestForDiscoverFeedBadge:(id)arg1;
+ (id)changeRequestForDiscoverFeedBadge:(id)arg1;
+ (id)creationRequestWithDiscoverFeedBadge:(id)arg1;
@property(nonatomic) double serverNextRequestTimestampInSec; // @synthesize serverNextRequestTimestampInSec=_serverNextRequestTimestampInSec;
@property(nonatomic) double fetchedTimestampInSec; // @synthesize fetchedTimestampInSec=_fetchedTimestampInSec;
@property(copy, nonatomic) SCDiscoverFeedBadgeTapDestination *tapDestination; // @synthesize tapDestination=_tapDestination;
@property(copy, nonatomic) SCDiscoverFeedBadgeRenderInfo *renderInfo; // @synthesize renderInfo=_renderInfo;
@property(copy, nonatomic) NSData *badgeMetadata; // @synthesize badgeMetadata=_badgeMetadata;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(copy, nonatomic) NSString *badgeId; // @synthesize badgeId=_badgeId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_discoverFeedBadge;
- (id)initWithRowid:(long long)arg1 badgeId:(id)arg2 badgeType:(long long)arg3 badgeMetadata:(id)arg4 renderInfo:(id)arg5 tapDestination:(id)arg6 fetchedTimestampInSec:(double)arg7 serverNextRequestTimestampInSec:(double)arg8;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
