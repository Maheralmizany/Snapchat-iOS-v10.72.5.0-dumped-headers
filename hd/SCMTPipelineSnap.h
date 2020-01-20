//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, NSMutableArray, NSMutableDictionary, NSString, SASAudioStitch, SCContextContextHint, SCMTLocationFuzzingInfo, SCMTMediaInfo, SCMTOneSnapInfo, SCMTStreamingMediaInfo;

@interface SCMTPipelineSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int abuseMitigationAction; // @dynamic abuseMitigationAction;
@property(nonatomic) double aspectRatio; // @dynamic aspectRatio;
@property(retain, nonatomic) SASAudioStitch *audioStitch; // @dynamic audioStitch;
@property(nonatomic) double biggestHeadRatio; // @dynamic biggestHeadRatio;
@property(nonatomic) double captureTimestamp; // @dynamic captureTimestamp;
@property(retain, nonatomic) NSMutableArray *categoriesArray; // @dynamic categoriesArray;
@property(readonly, nonatomic) unsigned long long categoriesArray_Count; // @dynamic categoriesArray_Count;
@property(nonatomic) _Bool chaperonedMinor; // @dynamic chaperonedMinor;
@property(retain, nonatomic) SCContextContextHint *contextHint; // @dynamic contextHint;
@property(nonatomic) float deviceScore; // @dynamic deviceScore;
@property(nonatomic) _Bool didPostToMyStory; // @dynamic didPostToMyStory;
@property(retain, nonatomic) GPBDoubleArray *exposureHistogramArray; // @dynamic exposureHistogramArray;
@property(readonly, nonatomic) unsigned long long exposureHistogramArray_Count; // @dynamic exposureHistogramArray_Count;
@property(retain, nonatomic) GPBDoubleArray *featureVectorArray; // @dynamic featureVectorArray;
@property(readonly, nonatomic) unsigned long long featureVectorArray_Count; // @dynamic featureVectorArray_Count;
@property(copy, nonatomic) NSString *filterId; // @dynamic filterId;
@property(nonatomic) _Bool frontFacing; // @dynamic frontFacing;
@property(nonatomic) float gradientScore; // @dynamic gradientScore;
@property(nonatomic) _Bool hasAudioStitch; // @dynamic hasAudioStitch;
@property(nonatomic) _Bool hasContextHint; // @dynamic hasContextHint;
@property(nonatomic) _Bool hasLocationFuzzInfo; // @dynamic hasLocationFuzzInfo;
@property(nonatomic) _Bool hasMediaInfo; // @dynamic hasMediaInfo;
@property(nonatomic) _Bool hasSponsoredUnlockables; // @dynamic hasSponsoredUnlockables;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasStreamingSnapInfo; // @dynamic hasStreamingSnapInfo;
@property(nonatomic) int headCount; // @dynamic headCount;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) double interestingnessScore; // @dynamic interestingnessScore;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(nonatomic) _Bool isLocationBlacklisted; // @dynamic isLocationBlacklisted;
@property(nonatomic) _Bool isLowContrast; // @dynamic isLowContrast;
@property(nonatomic) _Bool isOfficialUser; // @dynamic isOfficialUser;
@property(nonatomic) _Bool isPopularUser; // @dynamic isPopularUser;
@property(nonatomic) _Bool isTakenDown; // @dynamic isTakenDown;
@property(nonatomic) double lat; // @dynamic lat;
@property(copy, nonatomic) NSString *lensId; // @dynamic lensId;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableDictionary *localizedAddresses; // @dynamic localizedAddresses;
@property(readonly, nonatomic) unsigned long long localizedAddresses_Count; // @dynamic localizedAddresses_Count;
@property(retain, nonatomic) SCMTLocationFuzzingInfo *locationFuzzInfo; // @dynamic locationFuzzInfo;
@property(retain, nonatomic) SCMTMediaInfo *mediaInfo; // @dynamic mediaInfo;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(nonatomic) _Bool minor; // @dynamic minor;
@property(copy, nonatomic) NSString *multiSnapBundleId; // @dynamic multiSnapBundleId;
@property(nonatomic) int multiSnapSequenceCount; // @dynamic multiSnapSequenceCount;
@property(nonatomic) int multiSnapSequenceId; // @dynamic multiSnapSequenceId;
@property(copy, nonatomic) NSString *multisnapId; // @dynamic multisnapId;
@property(nonatomic) _Bool noise; // @dynamic noise;
@property(nonatomic) double openNsfwScore; // @dynamic openNsfwScore;
@property(nonatomic) int orientation; // @dynamic orientation;
@property(copy, nonatomic) NSString *overlayText; // @dynamic overlayText;
@property(retain, nonatomic) NSMutableArray *overlayTextSensitiveWordsArray; // @dynamic overlayTextSensitiveWordsArray;
@property(readonly, nonatomic) unsigned long long overlayTextSensitiveWordsArray_Count; // @dynamic overlayTextSensitiveWordsArray_Count;
@property(nonatomic) double qualityScore; // @dynamic qualityScore;
@property(copy, nonatomic) NSString *rejectionReason; // @dynamic rejectionReason;
@property(nonatomic) _Bool shouldFuzz; // @dynamic shouldFuzz;
@property(nonatomic) _Bool shouldShowAttribution; // @dynamic shouldShowAttribution;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) SCMTOneSnapInfo *streamingSnapInfo; // @dynamic streamingSnapInfo;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(nonatomic) double timeLength; // @dynamic timeLength;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;
@property(copy, nonatomic) NSString *venueId; // @dynamic venueId;
@property(nonatomic) int videoFramesPerSecond; // @dynamic videoFramesPerSecond;

@end

