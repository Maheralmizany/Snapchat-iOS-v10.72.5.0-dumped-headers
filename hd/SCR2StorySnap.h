//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString, SCR2MultiSnapExtension, SCR2SnapCreatorInfo, SCR2SnapMediaInfo, SCR2SnapPivotInfo;

@interface SCR2StorySnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachedStoryIdArray; // @dynamic attachedStoryIdArray;
@property(readonly, nonatomic) unsigned long long attachedStoryIdArray_Count; // @dynamic attachedStoryIdArray_Count;
@property(copy, nonatomic) NSString *attachmentURL; // @dynamic attachmentURL;
@property(copy, nonatomic) NSData *audioStitchData; // @dynamic audioStitchData;
@property(nonatomic) long long creationTimestampMs; // @dynamic creationTimestampMs;
@property(retain, nonatomic) SCR2SnapCreatorInfo *creatorInfo; // @dynamic creatorInfo;
@property(retain, nonatomic) NSMutableDictionary *debugMap; // @dynamic debugMap;
@property(readonly, nonatomic) unsigned long long debugMap_Count; // @dynamic debugMap_Count;
@property(nonatomic) long long expirationTimestampMs; // @dynamic expirationTimestampMs;
@property(nonatomic) _Bool hasCreatorInfo; // @dynamic hasCreatorInfo;
@property(nonatomic) _Bool hasLensFilter; // @dynamic hasLensFilter;
@property(nonatomic) _Bool hasMediaInfo; // @dynamic hasMediaInfo;
@property(nonatomic) _Bool hasMultiSnapExtension; // @dynamic hasMultiSnapExtension;
@property(nonatomic) _Bool hasPivotInfo; // @dynamic hasPivotInfo;
@property(nonatomic) _Bool hasSnappablesMetadata; // @dynamic hasSnappablesMetadata;
@property(copy, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) SCR2SnapMediaInfo *mediaInfo; // @dynamic mediaInfo;
@property(retain, nonatomic) SCR2MultiSnapExtension *multiSnapExtension; // @dynamic multiSnapExtension;
@property(retain, nonatomic) SCR2SnapPivotInfo *pivotInfo; // @dynamic pivotInfo;
@property(copy, nonatomic) NSString *rawSnapId; // @dynamic rawSnapId;
@property(copy, nonatomic) NSData *serializedUnlockablesSnapInfo; // @dynamic serializedUnlockablesSnapInfo;
@property(copy, nonatomic) NSString *sharedStorySubmissionId; // @dynamic sharedStorySubmissionId;
@property(copy, nonatomic) NSString *snapSource; // @dynamic snapSource;
@property(retain, nonatomic) NSMutableArray *subTitlesArray; // @dynamic subTitlesArray;
@property(readonly, nonatomic) unsigned long long subTitlesArray_Count; // @dynamic subTitlesArray_Count;
@property(nonatomic) _Bool suppressContext; // @dynamic suppressContext;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

