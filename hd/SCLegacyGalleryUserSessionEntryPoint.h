//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCMemoriesDataObjectStorageService, SCMemoriesLogoutUserDataScrubber, SCSentinel, SCUserSessionScope;

@interface SCLegacyGalleryUserSessionEntryPoint : SCEntryPoint
{
    SCMemoriesLogoutUserDataScrubber *_logoutUserDataScrubber;
    SCSentinel *_invalidateSentinel;
    SCUserSessionScope *_userSessionScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCMemoriesDataObjectStorageService *_memoriesDataObjectStorageService;
}

@property(nonatomic) __weak SCMemoriesDataObjectStorageService *memoriesDataObjectStorageService; // @synthesize memoriesDataObjectStorageService=_memoriesDataObjectStorageService;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)_restoreDataLossMetricsV1;
- (void)_resetLastSyncTimeForUserId:(id)arg1;
- (void)_runLogoutUserDataScrubberIfNeeded;
- (_Bool)_isInvalidated;
- (id)end;
- (void)begin;

@end
