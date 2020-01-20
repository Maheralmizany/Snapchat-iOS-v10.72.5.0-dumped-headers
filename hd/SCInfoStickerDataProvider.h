//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCUserSession;

@interface SCInfoStickerDataProvider : NSObject
{
    NSMutableDictionary *_storedDictionary;
    SCUserSession *_userSession;
    id <SCStickerPreferenceAdaptor> _stickerPreferenceAdaptor;
    id <SCDownloadableContentManaging> _downloadableManager;
    _Bool _fontIsReady;
    _Bool _enableGroupSticker;
    _Bool _enableStoryInviteSticker;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)requiredFont;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (void).cxx_destruct;
- (void)setFontIsLoaded;
- (void)updateInfoStickerDataFromDataSource:(id)arg1 includeBatterySticker:(_Bool)arg2;
- (_Bool)disableAndRemoveInviteStickers;
- (_Bool)updateVenueSticker:(id)arg1;
- (_Bool)updateAltitudeSticker:(id)arg1;
- (_Bool)updateWeatherSticker:(id)arg1;
- (_Bool)updateSpeedSticker:(id)arg1;
- (id)generateNonInteractiveInfoStickers;
- (id)generateInteractiveInfoStickers;
- (id)generateInfoStickers;
- (id)getTopicsInfo;
- (id)getVenuesInfo;
- (id)getTimeStamp;
- (unsigned long long)getBatteryStatus;
- (id)getAltitude;
- (id)getSpeed;
- (id)getWeather;
- (_Bool)_shouldShowSpeedSticker:(id)arg1;
- (_Bool)_shouldDisplayAltitude:(id)arg1;
- (id)initWithDataSource:(id)arg1 includeBatterySticker:(_Bool)arg2 userSession:(id)arg3 stickerPreferenceAdaptor:(id)arg4 downloadablemanager:(id)arg5;
- (id)initWithWeather:(id)arg1 speed:(id)arg2 altitude:(id)arg3 timestamp:(id)arg4 batteryStatus:(unsigned long long)arg5 stickerPreferenceAdaptor:(id)arg6 downloadablemanager:(id)arg7;

@end

