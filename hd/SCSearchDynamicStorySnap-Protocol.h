//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, SCSearchDynamicStorySnapLensData, SCSearchPerson, SCSearchPivotInfo, SCSearchStreamingMediaInfo;

@protocol SCSearchDynamicStorySnap <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *boltOverlay;
@property(readonly, copy, nonatomic) NSString *boltMedia;
@property(readonly, copy, nonatomic) NSString *serializedUnlockablesSnapInfo;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *serializedContextHint;
@property(readonly, nonatomic) _Bool hasLensFilter;
@property(readonly, copy, nonatomic) NSData *audioStitchData;
@property(readonly, copy, nonatomic) SCSearchDynamicStorySnapLensData *lensData;
@property(readonly, copy, nonatomic) SCSearchPivotInfo *pivotInfo;
@property(readonly, copy, nonatomic) SCSearchPerson *storyCreator;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
@property(readonly, copy, nonatomic) NSDate *expirationTime;
@property(readonly, copy, nonatomic) NSDate *creationTime;
@property(readonly, copy, nonatomic) NSString *displayGeoInfo;
@property(readonly, copy, nonatomic) NSArray *subtitles;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, copy, nonatomic) NSString *attachmentUrl;
@property(readonly, nonatomic) _Bool isLastLoopableStorySnap;
@property(readonly, nonatomic) _Bool isInfiniteDuration;
@property(readonly, nonatomic) _Bool isZipped;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long streamingFailureCode;
@property(readonly, copy, nonatomic) SCSearchStreamingMediaInfo *videoStreamingInfo;
@property(readonly, copy, nonatomic) NSString *mediaURL;
@property(readonly, copy, nonatomic) NSString *mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, copy, nonatomic) NSString *sssId;
@property(readonly, copy, nonatomic) NSString *snapId;
@end

