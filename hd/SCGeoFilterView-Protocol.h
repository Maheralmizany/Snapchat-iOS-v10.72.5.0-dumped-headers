//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, SCGeoFilterLoadingMetaData, SOJUUnlockableTrackInfo;

@protocol SCGeoFilterView <NSObject>
@property(readonly, nonatomic) SOJUUnlockableTrackInfo *unlockableTrackInfo;
@property(readonly, nonatomic) long long eligibility;
@property(readonly, nonatomic) long long unlockableContentType;
@property(readonly, nonatomic) SCGeoFilterLoadingMetaData *geoFilterLoadingMetaData;
@property(readonly, copy, nonatomic) NSDictionary *filterPrompt;
@property(readonly, copy, nonatomic) NSString *dynamicFilterUpdatingMessage;
@property(readonly, copy, nonatomic) NSString *dynamicFilterRefreshHint;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *filterId;
@property(readonly, copy, nonatomic) NSData *overlayPngData;
@property(readonly, nonatomic) _Bool isFriendFilter;
@property(readonly, nonatomic) _Bool isBitmoji;
@property(readonly, nonatomic) _Bool isActionmoji;
@property(readonly, nonatomic) _Bool isFrameFilter;
@property(readonly, nonatomic) _Bool isSponsored;
@property(readonly, nonatomic) long long updateAttemptCount;
@property(nonatomic) __weak id <SCGeoFilterViewDelegate> delegate;
- (void)resumeAnimatedFilterIfNecessary;
- (void)stopAnimatedFilterIfNecessary;
- (void)resetUpdateAttemptCount;
@end

