//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSString, SCContextImage, SCContextPoint2f, SCContextSize2i;

@interface SCContextImageQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cameraType; // @dynamic cameraType;
@property(retain, nonatomic) SCContextPoint2f *focalPoint; // @dynamic focalPoint;
@property(nonatomic) _Bool hasFocalPoint; // @dynamic hasFocalPoint;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasImageSize; // @dynamic hasImageSize;
@property(retain, nonatomic) SCContextImage *image; // @dynamic image;
@property(retain, nonatomic) GPBFloatArray *imageFeatureVectorArray; // @dynamic imageFeatureVectorArray;
@property(readonly, nonatomic) unsigned long long imageFeatureVectorArray_Count; // @dynamic imageFeatureVectorArray_Count;
@property(copy, nonatomic) NSString *imageFeatureVectorVersion; // @dynamic imageFeatureVectorVersion;
@property(retain, nonatomic) SCContextSize2i *imageSize; // @dynamic imageSize;

@end

