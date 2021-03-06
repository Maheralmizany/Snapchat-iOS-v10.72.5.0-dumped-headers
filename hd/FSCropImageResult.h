//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FaceZonesHolder, NSArray, UIImage;

@interface FSCropImageResult : NSObject
{
    UIImage *_image;
    NSArray *_landmarks;
    FaceZonesHolder *_gtFaceZones;
    struct CGRect _faceRect;
    struct CGRect _cropRect;
}

@property(readonly, nonatomic) FaceZonesHolder *gtFaceZones; // @synthesize gtFaceZones=_gtFaceZones;
@property(readonly, nonatomic) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)setGtFaceZones:(id)arg1;
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 landmarks:(id)arg4;

@end

