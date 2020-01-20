//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFSettings.h"

#import "SPSettings.h"

@class NSArray, NSDictionary, NSNumber, NSString, SPDevice;

@interface SPSettingsImplementation : AIFSettings <SPSettings>
{
    _Bool _sendAutofeedback;
    _Bool _useCompressedPreviewFrames;
    SPDevice *_device;
}

+ (_Bool)isDeviceHighEnd:(id)arg1;
+ (long long)defaultProcessingThreadsForDevice:(id)arg1;
+ (unsigned long long)defaultPerformanceClassForDevice:(id)arg1;
+ (id)lastModifiedDateCategoryTextDescription:(unsigned long long)arg1;
@property(retain, nonatomic) SPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool useCompressedPreviewFrames; // @synthesize useCompressedPreviewFrames=_useCompressedPreviewFrames;
@property(nonatomic) _Bool sendAutofeedback; // @synthesize sendAutofeedback=_sendAutofeedback;
- (void).cxx_destruct;
- (id)configsDirectoryUrlWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *apiVersion;
@property(readonly, nonatomic) unsigned long long dayOfUsage;
- (id)lastModifiedKeyForCategory:(unsigned long long)arg1 urlPath:(id)arg2;
- (void)cleanLastModifiedDateForCategory:(unsigned long long)arg1;
- (id)lastModifiedDateForUrlPath:(id)arg1 forCategory:(unsigned long long)arg2;
- (void)registerLastModifiedDate:(id)arg1 forUrlPath:(id)arg2 forCategory:(unsigned long long)arg3;
@property(readonly, nonatomic) double segmentationImageMaxHeight;
@property(readonly, nonatomic) double segmentationImageMaxWidth;
@property(readonly, nonatomic) double tagretCropMultiplier;
@property(readonly, nonatomic) NSString *performanceClassTitle;
- (id)userDefaults;
@property(readonly, nonatomic) double remoteModelsInitTimeout;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long buildType; // @dynamic buildType;
@property(nonatomic) _Bool clipsEnvironment; // @dynamic clipsEnvironment;
@property(retain, nonatomic) NSDictionary *configLastModifiedMap; // @dynamic configLastModifiedMap;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePersonCache; // @dynamic disablePersonCache;
@property(nonatomic) _Bool disableVideoCache; // @dynamic disableVideoCache;
@property(nonatomic) _Bool enablePreviewsBoomerangMode; // @dynamic enablePreviewsBoomerangMode;
@property(nonatomic) _Bool enableWatermark; // @dynamic enableWatermark;
@property(retain, nonatomic) NSNumber *forcedCropMultiplier; // @dynamic forcedCropMultiplier;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxRecentScenarios; // @dynamic maxRecentScenarios;
@property(nonatomic) unsigned long long performanceClass; // @dynamic performanceClass;
@property(nonatomic) long long processingThreads; // @dynamic processingThreads;
@property(retain, nonatomic) NSString *reenactmentProgressTitle; // @dynamic reenactmentProgressTitle;
@property(nonatomic) _Bool savePhotos; // @dynamic savePhotos;
@property(nonatomic) _Bool showDebugErrorMessages; // @dynamic showDebugErrorMessages;
@property(nonatomic) _Bool showScenariosIdsInFullscreen; // @dynamic showScenariosIdsInFullscreen;
@property(nonatomic) _Bool showScenariosIdsInPreviews; // @dynamic showScenariosIdsInPreviews;
@property(retain, nonatomic) NSArray *shownScenarioIds; // @dynamic shownScenarioIds;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long warpingCacheType; // @dynamic warpingCacheType;

@end

