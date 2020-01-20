//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString, SCDataObjectContext, SCGalleryUserDefaults, SCGalleryUserDefaultsManagerListenerAnnouncer, SCUserSession;

@interface SCGalleryUserDefaultsManager : NSObject
{
    SCUserSession *_userSession;
    SCDataObjectContext *_dataObjectContext;
    SCGalleryUserDefaultsManagerListenerAnnouncer *_announcer;
    SCGalleryUserDefaults *_userDefaults;
    id <SCObserving> _observeContext;
    long long _onceToken;
    NSData *_myEyesOnlyFingerprintHash;
}

@property(retain, nonatomic) NSData *myEyesOnlyFingerprintHash; // @synthesize myEyesOnlyFingerprintHash=_myEyesOnlyFingerprintHash;
- (void).cxx_destruct;
- (void)_announceUpdateWithOldUserDefaults:(id)arg1 newUserDefaults:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) NSString *readFeaturedStoryIds;
@property(retain, nonatomic) NSString *viewedFeaturedStoryIds;
@property(retain, nonatomic) NSDate *latestAckedBackupErrorTime;
@property(nonatomic) _Bool displayedSaveOptionPrompt;
@property(nonatomic) _Bool displayedPostLongVideoToStoryPopup;
@property(nonatomic) _Bool displayedInitialNeedsPhotoAccessPopup;
@property(nonatomic) _Bool displayedInitialCreateStoryPopup;
@property(nonatomic) _Bool displayedCameraRollTabIntroPopup;
@property(nonatomic) _Bool dismissedImportButtonBelowSnaps;
@property(nonatomic) _Bool didInitialCloudSync;
@property(nonatomic) _Bool completedImportFromCameraRoll;
- (void)dealloc;
- (void)_setupUserDefaultsIfNeeded;
- (id)initWithUserSession:(id)arg1;

@end

