//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

@interface LSAExternalImageComponent : LSABaseComponent
{
}

+ (int)_orientationWithUIImageOrientation:(long long)arg1;
- (void)_setExternalImageWithFaceRect:(struct CGRect)arg1 errorCode:(long long)arg2 setImageBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setExternalImage:(id)arg1 faceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setExternalImageWithPath:(id)arg1 faceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;

@end

