//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCContentDeliveryServices, SCLazy, SCServicesExposer, SCShakeToReportServices, SCUserSessionScope;

@interface SCBitmojiStickerServicesEntryPoint : SCEntryPoint
{
    SCLazy *_packProvider;
    SCLazy *_searchDatabase;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserSessionScope *_userSessionScope;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCShakeToReportServices *_shakeToReportServices;
    SCServicesExposer *_bitmojiStickerServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *bitmojiStickerServicesExposer; // @synthesize bitmojiStickerServicesExposer=_bitmojiStickerServicesExposer;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void).cxx_destruct;
- (id)_searchFetcher;
- (id)_search;
- (id)_refresher;
- (id)_packFetcher;
- (id)_packProvider;
- (id)_searchDatabase;
- (void)begin;

@end
