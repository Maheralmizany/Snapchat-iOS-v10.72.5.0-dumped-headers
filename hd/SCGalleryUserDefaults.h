//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryUserDefaults.h"

@class NSDate, NSString;

@interface SCGalleryUserDefaults : NSObject <SCGalleryUserDefaults>
{
    _Bool _completedImportFromCameraRoll;
    _Bool _didInitialCloudSync;
    _Bool _dismissedImportButtonBelowSnaps;
    _Bool _displayedCameraRollTabIntroPopup;
    _Bool _displayedInitialCreateStoryPopup;
    _Bool _displayedInitialNeedsPhotoAccessPopup;
    _Bool _displayedPostLongVideoToStoryPopup;
    _Bool _displayedSaveOptionPrompt;
    NSString *_objectID;
    NSDate *_latestAckedBackupErrorTime;
    NSString *_readFeaturedStoryIds;
    NSString *_viewedFeaturedStoryIds;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)parseManagedObject:(id)arg1;
+ (id)fetchGalleryUserDefaultsForProfile:(id)arg1 options:(id)arg2 dataObjectContext:(id)arg3;
+ (unsigned long long)countOfGalleryUserDefaultsWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)fetchGalleryUserDefaultsWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)galleryUserDefaultsWithCompletedImportFromCameraRoll:(_Bool)arg1 didInitialCloudSync:(_Bool)arg2 dismissedImportButtonBelowSnaps:(_Bool)arg3 displayedCameraRollTabIntroPopup:(_Bool)arg4 displayedInitialCreateStoryPopup:(_Bool)arg5 displayedInitialNeedsPhotoAccessPopup:(_Bool)arg6 displayedPostLongVideoToStoryPopup:(_Bool)arg7 displayedSaveOptionPrompt:(_Bool)arg8 latestAckedBackupErrorTime:(id)arg9 readFeaturedStoryIds:(id)arg10 viewedFeaturedStoryIds:(id)arg11;
+ (id)allKeys;
+ (id)observe:(id)arg1 dataObjectContext:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *viewedFeaturedStoryIds; // @synthesize viewedFeaturedStoryIds=_viewedFeaturedStoryIds;
@property(readonly, copy, nonatomic) NSString *readFeaturedStoryIds; // @synthesize readFeaturedStoryIds=_readFeaturedStoryIds;
@property(readonly, copy, nonatomic) NSDate *latestAckedBackupErrorTime; // @synthesize latestAckedBackupErrorTime=_latestAckedBackupErrorTime;
@property(readonly, nonatomic) _Bool displayedSaveOptionPrompt; // @synthesize displayedSaveOptionPrompt=_displayedSaveOptionPrompt;
@property(readonly, nonatomic) _Bool displayedPostLongVideoToStoryPopup; // @synthesize displayedPostLongVideoToStoryPopup=_displayedPostLongVideoToStoryPopup;
@property(readonly, nonatomic) _Bool displayedInitialNeedsPhotoAccessPopup; // @synthesize displayedInitialNeedsPhotoAccessPopup=_displayedInitialNeedsPhotoAccessPopup;
@property(readonly, nonatomic) _Bool displayedInitialCreateStoryPopup; // @synthesize displayedInitialCreateStoryPopup=_displayedInitialCreateStoryPopup;
@property(readonly, nonatomic) _Bool displayedCameraRollTabIntroPopup; // @synthesize displayedCameraRollTabIntroPopup=_displayedCameraRollTabIntroPopup;
@property(readonly, nonatomic) _Bool dismissedImportButtonBelowSnaps; // @synthesize dismissedImportButtonBelowSnaps=_dismissedImportButtonBelowSnaps;
@property(readonly, nonatomic) _Bool didInitialCloudSync; // @synthesize didInitialCloudSync=_didInitialCloudSync;
@property(readonly, nonatomic) _Bool completedImportFromCameraRoll; // @synthesize completedImportFromCameraRoll=_completedImportFromCameraRoll;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 completedImportFromCameraRoll:(_Bool)arg2 didInitialCloudSync:(_Bool)arg3 dismissedImportButtonBelowSnaps:(_Bool)arg4 displayedCameraRollTabIntroPopup:(_Bool)arg5 displayedInitialCreateStoryPopup:(_Bool)arg6 displayedInitialNeedsPhotoAccessPopup:(_Bool)arg7 displayedPostLongVideoToStoryPopup:(_Bool)arg8 displayedSaveOptionPrompt:(_Bool)arg9 latestAckedBackupErrorTime:(id)arg10 readFeaturedStoryIds:(id)arg11 viewedFeaturedStoryIds:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

