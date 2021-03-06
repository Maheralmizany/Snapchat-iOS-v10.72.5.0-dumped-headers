//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SPDevice;

@protocol SPSettings <NSObject>
@property(nonatomic) _Bool clipsEnvironment;
@property(nonatomic) _Bool showDebugErrorMessages;
@property(nonatomic) _Bool showScenariosIdsInFullscreen;
@property(nonatomic) _Bool showScenariosIdsInPreviews;
@property(nonatomic) _Bool disableVideoCache;
@property(nonatomic) _Bool disablePersonCache;
@property(retain, nonatomic) NSNumber *forcedCropMultiplier;
@property(readonly, nonatomic) double segmentationImageMaxHeight;
@property(readonly, nonatomic) double segmentationImageMaxWidth;
@property(readonly, nonatomic) NSString *performanceClassTitle;
@property(readonly, nonatomic) double tagretCropMultiplier;
@property(nonatomic) unsigned long long performanceClass;
@property(readonly, nonatomic) NSString *apiVersion;
@property(nonatomic) unsigned long long maxRecentScenarios;
@property(retain, nonatomic) NSArray *shownScenarioIds;
@property(readonly, nonatomic) double remoteModelsInitTimeout;
@property(readonly, nonatomic) _Bool useCompressedPreviewFrames;
@property(nonatomic) long long processingThreads;
@property(nonatomic) _Bool enablePreviewsBoomerangMode;
@property(nonatomic) unsigned long long warpingCacheType;
@property(retain, nonatomic) NSString *reenactmentProgressTitle;
@property(nonatomic) _Bool enableWatermark;
@property(nonatomic) _Bool savePhotos;
@property(nonatomic) _Bool sendAutofeedback;
@property(readonly, nonatomic) unsigned long long dayOfUsage;
@property(readonly, nonatomic) SPDevice *device;
@property(nonatomic) unsigned long long buildType;
- (void)cleanLastModifiedDateForCategory:(unsigned long long)arg1;
- (void)registerLastModifiedDate:(NSString *)arg1 forUrlPath:(NSString *)arg2 forCategory:(unsigned long long)arg3;
- (NSString *)lastModifiedDateForUrlPath:(NSString *)arg1 forCategory:(unsigned long long)arg2;
@end

