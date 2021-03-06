//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCCDGalleryQuotaStatus, SCObjectPlaceholder;

@interface SCGalleryQuotaStatusChangeRequest : NSObject
{
    SCCDGalleryQuotaStatus *_galleryQuotaStatus;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (void)deleteAllGalleryQuotaStatuses;
+ (void)deleteGalleryQuotaStatuses:(id)arg1;
+ (id)creationRequestWithGalleryQuotaStatus:(id)arg1;
+ (id)changeRequestForGalleryQuotaStatus:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int numOfWarningsForFullGallery;
@property(nonatomic) int numOfSuccessSavesAfterFullGallery;
@property(nonatomic) int numOfNoticesLeftForSuccessfulSave;
@property(nonatomic) int lastWarningPercentage;
- (void)setWithGalleryQuotaStatus:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedGalleryQuotaStatus;
- (void)setProfile:(id)arg1;
- (id)initWithGalleryQuotaStatus:(id)arg1;

@end

