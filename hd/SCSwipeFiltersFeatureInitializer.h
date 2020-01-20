//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCLazy, SCObservable, SCPreviewConfiguration, SCSmartCarouselFilterArranger, SCSnapCommonLoggingParameters, SCUnlockableGeoFilterTracker, SCUserSession, UIView<SCSmartSwipeFilterFocusLocationChangeDelegate>;

@interface SCSwipeFiltersFeatureInitializer : SCFeatureInitializer
{
    SCPreviewConfiguration *_configuration;
    SCUserSession *_userSession;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    id <SCGeoFilterLogger> _geofilterLogger;
    id <SCImageProcessCommandProvider> _imageProcessCommandProvider;
    SCLazy *_cropBackgroundAnimationImages;
    SCLazy *_cropBackgroundAnimationColors;
    UIView<SCSmartSwipeFilterFocusLocationChangeDelegate> *_focusLocationDelegate;
    id <SCVenueFilterTooltipProvider> _venueFilterTooltipProvider;
    id <SCFeatureSnapCrop> _snapCrop;
    id <SCPreviewFeatureDrawing> _drawingFeature;
    id <SCFeatureUcoInMemoriesPreview> _ucoInMemoriesFeature;
    id <SCPreviewFeatureStickerContainer> _stickerContainerFeature;
    struct CGRect _maxMediaAreaFrame;
    SCUnlockableGeoFilterTracker *_unlockableGeoFilterTracker;
    id <SCSwipeFilterHelpProvider> _swipeFilterHelpProvider;
    id <SCPreviewLogging> _previewLogger;
    struct CGSize _multiSnapImagePixelSize;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
    SCObservable *_applicationLifecycleEvents;
}

- (void).cxx_destruct;
- (_Bool)enabled;
- (id)createInstance;
- (id)_videoSwipeFilters;
- (id)_imageSwipeFilters;
- (id)initWithConfiguration:(id)arg1 applicationLifecycleEvents:(id)arg2 filterArranger:(id)arg3 commonLoggingParameters:(id)arg4 geofilterLogger:(id)arg5 userSession:(id)arg6 imageProcessCommandProvider:(id)arg7 cropBackgroundAnimationImages:(id)arg8 cropBackgroundAnimationColors:(id)arg9 focusLocationDelegate:(id)arg10 venueFilterTooltipProvider:(id)arg11 snapCrop:(id)arg12 drawingFeature:(id)arg13 stickerContainerFeature:(id)arg14 maxMediaAreaFrame:(struct CGRect)arg15 unlockableGeoFilterTracker:(id)arg16 swipeFilterHelpProvider:(id)arg17 previewLogger:(id)arg18 multiSnapImagePixelSize:(struct CGSize)arg19 lensLogger:(id)arg20 ucoInMemoriesFeature:(id)arg21;

@end

