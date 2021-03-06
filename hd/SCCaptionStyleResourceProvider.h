//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSNumber, NSString, SCCache, SCQueuePerformer, SCUserSession, SOJUCaptionStyles;

@interface SCCaptionStyleResourceProvider : NSObject <NSCoding>
{
    NSNumber *_captionStyleVersion;
    NSDate *_lastCheckingTimestamp;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCCache *_cache;
    NSMutableDictionary *_captionStyleMetadata;
    SOJUCaptionStyles *_downloadedCaptionStyles;
    _Bool _isFetchingRemoteResource;
    _Bool _needToUpdateAvailableCaptionStyles;
    NSMutableSet *_registeredFonts;
    NSString *_locale;
    id <SCCaptionResourceProviderDelegate> _delegate;
    NSArray *_availableCaptionStyles;
    double _currentControllerVersion;
}

@property double currentControllerVersion; // @synthesize currentControllerVersion=_currentControllerVersion;
@property(retain, nonatomic) NSArray *availableCaptionStyles; // @synthesize availableCaptionStyles=_availableCaptionStyles;
@property(nonatomic) __weak id <SCCaptionResourceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetDownloader;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_cacheFontFile:(id)arg1 forKey:(id)arg2;
- (void)_fetchOnDemandTypefaceWithURLString:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_updateLastCheckingTimestamp;
- (_Bool)_isCaptionStyleResourceTTLExpired;
- (long long)countOfDefaultStyle;
- (id)defaultCaptionStyles;
- (void)_fetchCaptionStyleResourceWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_updateAvailableCaptionStylesIfNecessary:(id)arg1 controllerVersion:(double)arg2;
- (void)loadDependencyOfCaptionStyles:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)updateCaptionStylesIfNecessary;
- (void)_registerFont:(id)arg1 collectorBlock:(CDUnknownBlockType)arg2;
- (void)_prepareCaptionStyle:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfStyleInAvailableArray:(id)arg1;
- (id)_userPreferences;
- (id)initWithUserSession:(id)arg1;

@end

