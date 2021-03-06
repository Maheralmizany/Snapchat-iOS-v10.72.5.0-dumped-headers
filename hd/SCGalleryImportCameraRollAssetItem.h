//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHAsset;

@interface SCGalleryImportCameraRollAssetItem : NSObject
{
    _Bool _ineligible;
    PHAsset *_asset;
    long long _estimatedSizeInBytes;
    unsigned long long _ineligibleReason;
}

+ (long long)estimateSizeInBytesForAsset:(id)arg1;
@property(nonatomic) unsigned long long ineligibleReason; // @synthesize ineligibleReason=_ineligibleReason;
@property(nonatomic) _Bool ineligible; // @synthesize ineligible=_ineligible;
@property(nonatomic) long long estimatedSizeInBytes; // @synthesize estimatedSizeInBytes=_estimatedSizeInBytes;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (_Bool)isEligibleForImport;

@end

