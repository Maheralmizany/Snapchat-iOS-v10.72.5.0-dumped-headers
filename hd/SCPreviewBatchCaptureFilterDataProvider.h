//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPreviewContextImageClassificationListener.h"
#import "SCPreviewFilterDataProvider.h"
#import "SCUnlockablesControllerListener.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCAltitude, SCBatchCaptureConfiguration, SCBatchCaptureSegment, SCCarouselGroupConfigParser, SCImageProcessCommandConfiguration, SCLocationServicesDataStore, SCPreviewFilterDataProviderContextData, SCScopedAccess, SCSnapCommonLoggingParameters, SCSpeed, SCTimestampMetadata, SCUnlockableDataStore, SCUnlockablesContextBasedSelector, SCUserSession, SCVenueFilterSelector, SCVenueInfoSticker, SCWeather;

@interface SCPreviewBatchCaptureFilterDataProvider : NSObject <SCPreviewContextImageClassificationListener, SCUnlockablesControllerListener, SCPreviewFilterDataProvider>
{
    _Bool _updating;
    long long _snapSource;
    SCUserSession *_userSession;
    SCLocationServicesDataStore *_locationServicesDataStore;
    SCUnlockableDataStore *_unlockFilterStore;
    NSDate *_initialSpeedCaptureDate;
    NSDate *_initialAltitudeCaptureDate;
    NSMutableDictionary *_activeGeofilters;
    NSMutableDictionary *_geoFilterImages;
    NSMutableDictionary *_geoFilterAppearanceSettings;
    NSMutableSet *_requestedGeoFilterIds;
    NSMutableSet *_requestedGeoFilterImageLoadingKeys;
    SCSpeed *_speed;
    SCWeather *_weather;
    unsigned long long _batteryStatus;
    SCAltitude *_altitude;
    SCTimestampMetadata *_timestamp;
    long long _streakCount;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    NSMutableDictionary *_segmentARGeneratorDict;
    NSMutableDictionary *_segmentGeoFilterImagesFetcherDict;
    SCScopedAccess *_scopedPreferencesProvider;
    _Bool _isVenueFilterSelected;
    _Bool _hasUserUnlockedFilter;
    id <SCPreviewFilterDataProviderDelegate> _delegate;
    SCVenueFilterSelector *_venueFilterSelector;
    NSString *_userUnlockedFilterId;
    SCUnlockablesContextBasedSelector *_geofilterContextBasedSelector;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCPreviewFilterDataProviderContextData *_filterContextData;
    SCCarouselGroupConfigParser *_carouselGroupConfigParser;
    SCImageProcessCommandConfiguration *_selectedCommandConfiguration;
    NSArray *_selectedGeoFilterIds;
    NSString *_selectedGeoFilterId;
    NSArray *_venues;
    SCVenueInfoSticker *_venueInfo;
    id <SCPreviewFeatureContextImageClassifier> _contextImageClassifier;
    NSDictionary *_reverseMotionFilterConfig;
    NSString *_selectedContextFilterId;
    NSString *_selectedSmartFilterName;
    NSString *_selectedSpeedMotionFilterName;
    SCBatchCaptureSegment *_currentSegment;
}

@property(nonatomic) __weak SCBatchCaptureSegment *currentSegment; // @synthesize currentSegment=_currentSegment;
@property(readonly, copy, nonatomic) NSString *selectedSmartFilterName; // @synthesize selectedSmartFilterName=_selectedSmartFilterName;
@property(readonly, copy, nonatomic) NSString *selectedContextFilterId; // @synthesize selectedContextFilterId=_selectedContextFilterId;
@property(readonly, copy, nonatomic) NSDictionary *reverseMotionFilterConfig; // @synthesize reverseMotionFilterConfig=_reverseMotionFilterConfig;
@property(retain, nonatomic) id <SCPreviewFeatureContextImageClassifier> contextImageClassifier; // @synthesize contextImageClassifier=_contextImageClassifier;
@property(readonly, nonatomic) SCVenueInfoSticker *venueInfo; // @synthesize venueInfo=_venueInfo;
@property(readonly, copy, nonatomic) NSArray *venues;
@property(readonly, copy, nonatomic) NSString *selectedGeoFilterId; // @synthesize selectedGeoFilterId=_selectedGeoFilterId;
@property(readonly, copy, nonatomic) NSArray *selectedGeoFilterIds; // @synthesize selectedGeoFilterIds=_selectedGeoFilterIds;
@property(readonly, copy, nonatomic) SCImageProcessCommandConfiguration *selectedCommandConfiguration; // @synthesize selectedCommandConfiguration=_selectedCommandConfiguration;
@property(readonly, nonatomic) SCCarouselGroupConfigParser *carouselGroupConfigParser; // @synthesize carouselGroupConfigParser=_carouselGroupConfigParser;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData; // @synthesize filterContextData=_filterContextData;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(retain, nonatomic) SCUnlockablesContextBasedSelector *geofilterContextBasedSelector; // @synthesize geofilterContextBasedSelector=_geofilterContextBasedSelector;
@property(readonly, nonatomic) _Bool hasUserUnlockedFilter; // @synthesize hasUserUnlockedFilter=_hasUserUnlockedFilter;
@property(readonly, copy, nonatomic) NSString *userUnlockedFilterId; // @synthesize userUnlockedFilterId=_userUnlockedFilterId;
@property(readonly, nonatomic) _Bool isVenueFilterSelected; // @synthesize isVenueFilterSelected=_isVenueFilterSelected;
@property(readonly, nonatomic) SCVenueFilterSelector *venueFilterSelector; // @synthesize venueFilterSelector=_venueFilterSelector;
@property(nonatomic) __weak id <SCPreviewFilterDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startUpdatingVenueStickerData;
@property(readonly, copy, nonatomic) NSArray *visualFilterNames;
- (void)_checkUserUnlockedFilter;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (void)_unlockDataStoreDidUpdate:(id)arg1;
- (void)_startUpdatingWeatherData;
- (void)_updateWeatherDataWithLocation:(id)arg1;
- (void)_startUpdatingVenueFilter;
- (void)_startUpdatingVenueData;
- (void)_onActiveGeoFiltersLoaded:(_Bool)arg1;
- (void)_onFetchedActiveGeoFilterImage:(id)arg1 appearanceSetting:(id)arg2;
- (void)_onFetchedGeoFilterImage:(id)arg1 appearanceSetting:(id)arg2 forSegment:(id)arg3;
- (void)_updateActiveGeofiltersIfNeeded;
- (void)_updateContextGeoFiltersForImageSegment:(id)arg1;
- (void)_updateWithImageSegement:(id)arg1;
- (id)_createNewSegmentFilterState;
@property(readonly, copy, nonatomic) NSArray *unlockFilters;
- (void)didUpdateGeoFilters:(id)arg1;
- (void)didClassifyImage:(id)arg1;
- (void)userDidInteractWithHostView;
- (void)startPreviewContextImageClassification;
- (id)geofilterByFilterId:(id)arg1;
- (_Bool)shouldFilterDataProviderRequestToUseLocation;
- (void)updateWeatherViewType:(id)arg1;
- (void)updateAltitudeType:(id)arg1;
- (void)updateGeoFilter:(id)arg1;
- (void)_generateArSegmentationImageForSegment:(id)arg1 withGeofilterImage:(id)arg2 appearanceSetting:(id)arg3;
- (unsigned long long)_getBatteryStatus;
- (void)stopUpdatingFilterData;
- (void)startUpdatingFilterData;
- (void)startUpdatingInfoStickerData;
@property(readonly, nonatomic) _Bool isStreakFilterSelected;
@property(readonly, nonatomic) _Bool isReverseMotionFilterSelected;
@property(readonly, nonatomic) long long selectedGeoFilterMediaSubType;
@property(readonly, copy, nonatomic) NSString *selectedSpeedMotionFilterName; // @synthesize selectedSpeedMotionFilterName=_selectedSpeedMotionFilterName;
- (id)selectedMotionFilterName;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilterConfigs;
- (_Bool)fromDiscoverShare;
- (void)insertFilter:(id)arg1 appearanceSetting:(id)arg2 geofilterImage:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *geoFilterAppearanceSettingsDictionary;
@property(readonly, copy, nonatomic) NSArray *geoFilterImages;
@property(readonly, copy, nonatomic) NSArray *geoFilters;
@property(readonly, nonatomic) unsigned long long updateMode;
@property(readonly, nonatomic) long long streakCount;
@property(readonly, nonatomic) unsigned long long batteryStatus;
@property(readonly, nonatomic) SCTimestampMetadata *timestamp;
@property(readonly, nonatomic) SCAltitude *altitude;
@property(readonly, nonatomic) SCWeather *weather;
@property(readonly, nonatomic) SCSpeed *speed;
- (void)clear;
- (id)initWithSnapSource:(long long)arg1 unlockableDataStore:(id)arg2 streakCount:(long long)arg3 userSession:(id)arg4 filterContextData:(id)arg5 selectedCommandConfiguration:(id)arg6 batchCaptureConfiguration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

