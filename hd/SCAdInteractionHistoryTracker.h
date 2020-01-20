//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCAdInteractionHistoryTracker : NSObject
{
    NSMutableDictionary *_adIdentifierToViewngStatusMap;
    double _audioOutputVolume;
    double _screenWidth;
    double _screenHeight;
}

- (void).cxx_destruct;
- (id)_generateAdViewingStatusFromAdResponseV2:(id)arg1;
- (void)_onSnapHide:(id)arg1 snapIndex:(long long)arg2 skipEvent:(id)arg3 adPanel:(long long)arg4;
- (void)_onHide:(id)arg1 snapIndex:(long long)arg2 viewContext:(id)arg3 isUnskippableAd:(_Bool)arg4;
- (void)_onUnobstructed:(id)arg1;
- (void)_onObstructed:(id)arg1;
- (void)_onTopSnapVideoViewed:(id)arg1;
- (void)_onLongformVideoViewed:(id)arg1;
- (id)adViewingStatusForAdIdentifier:(id)arg1;
- (void)swipedToVideoBoxHalfOpenWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 isPixelCookieAvailable:(_Bool)arg3;
- (void)onPanelChangedInteractionUpdate:(id)arg1;
- (void)onAdHiddenInteractionUpdate:(id)arg1;
- (void)onAudioChangeInteractionUpdate:(id)arg1;
- (void)onWindowFocusChangedInteractionUpdate:(id)arg1;
- (void)onLongPressInteractionUpdate:(id)arg1;
- (void)onScreenshotInteractionUpdate:(id)arg1;
- (void)onSwipedUpToCardInteractionUpdate:(id)arg1;
- (void)onRemoteWebViewInteractionUpdate:(id)arg1;
- (void)onDeepLinkedInteractionUpdate:(id)arg1;
- (void)onTopSnapImageViewedInteractionUpdate:(id)arg1;
- (void)onVideoViewedInteractionUpdate:(id)arg1;
- (void)onAdShownInteractionUpdate:(id)arg1 adResponseV2:(id)arg2;
- (void)updateAudioOutputVolume:(double)arg1;
- (id)initWithAudioOutputVolume:(double)arg1;

@end
