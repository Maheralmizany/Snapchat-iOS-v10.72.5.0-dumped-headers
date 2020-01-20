//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSADepthMetadata, NSData;

@interface SCLensSnap3DAssetMetadata : NSObject
{
    LSADepthMetadata *_depthMetadata;
    NSData *_lensMetadata;
}

+ (id)_createFromMetadata:(struct CGImageMetadata *)arg1 lensMetadata:(id)arg2;
+ (id)createWithImageData:(id)arg1 lensMetadata:(id)arg2;
+ (id)lensMetadataFromString:(id)arg1;
+ (id)lensMetadataStringFromData:(id)arg1;
@property(readonly, nonatomic) NSData *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, nonatomic) LSADepthMetadata *depthMetadata; // @synthesize depthMetadata=_depthMetadata;
- (void).cxx_destruct;
- (id)imageDataWithMetadataAndJPEGData:(id)arg1;
- (struct CGImageMetadata *)_createImageMetadata;
- (_Bool)isValidForViewing;
- (_Bool)isValidForSaving;
- (id)initWithDepthMetadata:(id)arg1 lensMetadata:(id)arg2;

@end

