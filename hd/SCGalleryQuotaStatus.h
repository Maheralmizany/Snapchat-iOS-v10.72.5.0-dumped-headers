//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryQuotaStatus.h"

@class NSString;

@interface SCGalleryQuotaStatus : NSObject <SCGalleryQuotaStatus>
{
    int _lastWarningPercentage;
    int _numOfNoticesLeftForSuccessfulSave;
    int _numOfSuccessSavesAfterFullGallery;
    int _numOfWarningsForFullGallery;
    NSString *_objectID;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)parseManagedObject:(id)arg1;
+ (id)fetchGalleryQuotaStatusForProfile:(id)arg1 options:(id)arg2 dataObjectContext:(id)arg3;
+ (unsigned long long)countOfGalleryQuotaStatusesWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)fetchGalleryQuotaStatusesWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)galleryQuotaStatusWithLastWarningPercentage:(int)arg1 numOfNoticesLeftForSuccessfulSave:(int)arg2 numOfSuccessSavesAfterFullGallery:(int)arg3 numOfWarningsForFullGallery:(int)arg4;
+ (id)allKeys;
+ (id)observe:(id)arg1 dataObjectContext:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) int numOfWarningsForFullGallery; // @synthesize numOfWarningsForFullGallery=_numOfWarningsForFullGallery;
@property(readonly, nonatomic) int numOfSuccessSavesAfterFullGallery; // @synthesize numOfSuccessSavesAfterFullGallery=_numOfSuccessSavesAfterFullGallery;
@property(readonly, nonatomic) int numOfNoticesLeftForSuccessfulSave; // @synthesize numOfNoticesLeftForSuccessfulSave=_numOfNoticesLeftForSuccessfulSave;
@property(readonly, nonatomic) int lastWarningPercentage; // @synthesize lastWarningPercentage=_lastWarningPercentage;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 lastWarningPercentage:(int)arg2 numOfNoticesLeftForSuccessfulSave:(int)arg3 numOfSuccessSavesAfterFullGallery:(int)arg4 numOfWarningsForFullGallery:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

