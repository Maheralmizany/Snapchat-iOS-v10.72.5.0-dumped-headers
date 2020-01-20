//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolArray, GPBFloatArray, GPBUInt64Array, NSMutableArray, NSMutableDictionary, NSString, SCSCKClientInfo, SCSCKContentEngagementScores, SCSCKFriendStoryViewerEngagementFeatures, SCSUPBasicAttributes;

@interface SCSCKUserFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPBasicAttributes *basicAttributes; // @dynamic basicAttributes;
@property(retain, nonatomic) SCSCKClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) SCSCKContentEngagementScores *contentEngagementScores; // @dynamic contentEngagementScores;
@property(retain, nonatomic) SCSCKFriendStoryViewerEngagementFeatures *friendStoryViewerEngagementFeatures; // @dynamic friendStoryViewerEngagementFeatures;
@property(nonatomic) _Bool hasBasicAttributes; // @dynamic hasBasicAttributes;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasContentEngagementScores; // @dynamic hasContentEngagementScores;
@property(nonatomic) _Bool hasFriendStoryViewerEngagementFeatures; // @dynamic hasFriendStoryViewerEngagementFeatures;
@property(retain, nonatomic) GPBFloatArray *interestTabVecArray; // @dynamic interestTabVecArray;
@property(readonly, nonatomic) unsigned long long interestTabVecArray_Count; // @dynamic interestTabVecArray_Count;
@property(nonatomic) _Bool isNewUser; // @dynamic isNewUser;
@property(retain, nonatomic) GPBUInt64Array *recentWatchesArray; // @dynamic recentWatchesArray;
@property(readonly, nonatomic) unsigned long long recentWatchesArray_Count; // @dynamic recentWatchesArray_Count;
@property(retain, nonatomic) GPBUInt64Array *recentWatchesNoEditionArray; // @dynamic recentWatchesNoEditionArray;
@property(readonly, nonatomic) unsigned long long recentWatchesNoEditionArray_Count; // @dynamic recentWatchesNoEditionArray_Count;
@property(retain, nonatomic) GPBBoolArray *registeredInterestVecArray; // @dynamic registeredInterestVecArray;
@property(readonly, nonatomic) unsigned long long registeredInterestVecArray_Count; // @dynamic registeredInterestVecArray_Count;
@property(nonatomic) long long requestTimestampSecs; // @dynamic requestTimestampSecs;
@property(retain, nonatomic) NSMutableArray *scoredInterestsArray; // @dynamic scoredInterestsArray;
@property(readonly, nonatomic) unsigned long long scoredInterestsArray_Count; // @dynamic scoredInterestsArray_Count;
@property(retain, nonatomic) NSMutableArray *scoredSalientTermsArray; // @dynamic scoredSalientTermsArray;
@property(readonly, nonatomic) unsigned long long scoredSalientTermsArray_Count; // @dynamic scoredSalientTermsArray_Count;
@property(retain, nonatomic) GPBUInt64Array *subscriptionsArray; // @dynamic subscriptionsArray;
@property(readonly, nonatomic) unsigned long long subscriptionsArray_Count; // @dynamic subscriptionsArray_Count;
@property(retain, nonatomic) GPBFloatArray *userDiEmbeddingArray; // @dynamic userDiEmbeddingArray;
@property(readonly, nonatomic) unsigned long long userDiEmbeddingArray_Count; // @dynamic userDiEmbeddingArray_Count;
@property(copy, nonatomic) NSString *userDiEmbeddingVersion; // @dynamic userDiEmbeddingVersion;
@property(retain, nonatomic) NSMutableDictionary *userEmbeddings; // @dynamic userEmbeddings;
@property(readonly, nonatomic) unsigned long long userEmbeddings_Count; // @dynamic userEmbeddings_Count;

@end

