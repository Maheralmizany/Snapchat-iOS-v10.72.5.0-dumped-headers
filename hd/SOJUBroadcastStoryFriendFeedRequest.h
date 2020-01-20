//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastStoryFriendFeedRequest.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastStoryFriendFeedRequest : NSObject <SOJUBroadcastStoryFriendFeedRequest>
{
    NSString *_checksum;
    NSString *_syncMetadata;
    NSString *_requestType;
    NSArray *_mobStoryTypesToRank;
    NSNumber *_shouldReturnStoryScores;
    NSNumber *_mischiefIdInOrderResp;
    NSString *_checksumMissingReason;
    NSString *_requestSource;
    NSNumber *_friendStoryShouldNotReturnViewStatus;
    NSNumber *_myStoryShouldNotReturnViewerInfo;
    NSNumber *_myStoryShouldNotReturn;
    NSNumber *_friendStoryShouldNotReturn;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *friendStoryShouldNotReturn; // @synthesize friendStoryShouldNotReturn=_friendStoryShouldNotReturn;
@property(readonly, copy, nonatomic) NSNumber *myStoryShouldNotReturn; // @synthesize myStoryShouldNotReturn=_myStoryShouldNotReturn;
@property(readonly, copy, nonatomic) NSNumber *myStoryShouldNotReturnViewerInfo; // @synthesize myStoryShouldNotReturnViewerInfo=_myStoryShouldNotReturnViewerInfo;
@property(readonly, copy, nonatomic) NSNumber *friendStoryShouldNotReturnViewStatus; // @synthesize friendStoryShouldNotReturnViewStatus=_friendStoryShouldNotReturnViewStatus;
@property(readonly, copy, nonatomic) NSString *requestSource; // @synthesize requestSource=_requestSource;
@property(readonly, copy, nonatomic) NSString *checksumMissingReason; // @synthesize checksumMissingReason=_checksumMissingReason;
@property(readonly, copy, nonatomic) NSNumber *mischiefIdInOrderResp; // @synthesize mischiefIdInOrderResp=_mischiefIdInOrderResp;
@property(readonly, copy, nonatomic) NSNumber *shouldReturnStoryScores; // @synthesize shouldReturnStoryScores=_shouldReturnStoryScores;
@property(readonly, copy, nonatomic) NSArray *mobStoryTypesToRank; // @synthesize mobStoryTypesToRank=_mobStoryTypesToRank;
@property(readonly, copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
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
- (id)initWithChecksum:(id)arg1 syncMetadata:(id)arg2 requestType:(id)arg3 mobStoryTypesToRank:(id)arg4 shouldReturnStoryScores:(id)arg5 mischiefIdInOrderResp:(id)arg6 checksumMissingReason:(id)arg7 requestSource:(id)arg8 friendStoryShouldNotReturnViewStatus:(id)arg9 myStoryShouldNotReturnViewerInfo:(id)arg10 myStoryShouldNotReturn:(id)arg11 friendStoryShouldNotReturn:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)friendStoryShouldNotReturnValue;
- (_Bool)myStoryShouldNotReturnValue;
- (_Bool)myStoryShouldNotReturnViewerInfoValue;
- (_Bool)friendStoryShouldNotReturnViewStatusValue;
- (long long)requestSourceEnum;
- (long long)checksumMissingReasonEnum;
- (_Bool)mischiefIdInOrderRespValue;
- (_Bool)shouldReturnStoryScoresValue;
- (long long)requestTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

