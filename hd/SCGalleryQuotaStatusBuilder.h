//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCGalleryQuotaStatusBuilder : NSObject
{
    NSString *_objectID;
    int _lastWarningPercentage;
    int _numOfNoticesLeftForSuccessfulSave;
    int _numOfSuccessSavesAfterFullGallery;
    int _numOfWarningsForFullGallery;
}

+ (id)withGalleryQuotaStatus:(id)arg1;
- (void).cxx_destruct;
- (id)setNumOfWarningsForFullGallery:(int)arg1;
- (id)setNumOfSuccessSavesAfterFullGallery:(int)arg1;
- (id)setNumOfNoticesLeftForSuccessfulSave:(int)arg1;
- (id)setLastWarningPercentage:(int)arg1;
- (id)setObjectID:(id)arg1;
- (id)build;

@end

