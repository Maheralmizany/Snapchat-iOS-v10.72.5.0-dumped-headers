//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserSessionScope;

@interface SCGalleryBackgroundPrefetchEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_galleryBackgroundPrefetchServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *galleryBackgroundPrefetchServicesExposer; // @synthesize galleryBackgroundPrefetchServicesExposer=_galleryBackgroundPrefetchServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

