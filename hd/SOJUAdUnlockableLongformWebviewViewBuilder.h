//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUAdUnlockableLongformWebviewViewBuilder : NSObject
{
    NSNumber *_viewTimeSec;
    NSNumber *_renderedTimestampMs;
    NSNumber *_loadedOnEntry;
    NSNumber *_loadedOnExit;
    NSNumber *_openTimestampMs;
    NSNumber *_pixelCookieSet;
}

+ (id)withJUAdUnlockableLongformWebviewView:(id)arg1;
- (void).cxx_destruct;
- (id)setPixelCookieSet:(id)arg1;
- (id)setOpenTimestampMs:(id)arg1;
- (id)setLoadedOnExit:(id)arg1;
- (id)setLoadedOnEntry:(id)arg1;
- (id)setRenderedTimestampMs:(id)arg1;
- (id)setViewTimeSec:(id)arg1;
- (id)build;
- (id)setPixelCookieSetValue:(_Bool)arg1;
- (id)setOpenTimestampMsValue:(long long)arg1;
- (id)setLoadedOnExitValue:(_Bool)arg1;
- (id)setLoadedOnEntryValue:(_Bool)arg1;
- (id)setRenderedTimestampMsValue:(long long)arg1;
- (id)setViewTimeSecValue:(float)arg1;

@end

