//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiSelfieServices, SCContentDeliveryServices, SCServicesExposer, SCStoriesServices, SCUserSessionScope;

@interface SCNetworkImageEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCContentDeliveryServices *_contentDeliveryServices;
    SCStoriesServices *_storiesServices;
    SCServicesExposer *_networkImageServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *networkImageServicesExposer; // @synthesize networkImageServicesExposer=_networkImageServicesExposer;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCContentDeliveryServices *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_imageDownloader;
- (void)begin;

@end

