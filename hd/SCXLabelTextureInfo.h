//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCXGLTextureInfo;

@interface SCXLabelTextureInfo : NSObject
{
    float _againstPOISize;
    SCXGLTextureInfo *_texture;
    struct CGSize _labelSize;
}

@property float againstPOISize; // @synthesize againstPOISize=_againstPOISize;
@property struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(retain) SCXGLTextureInfo *texture; // @synthesize texture=_texture;
- (void).cxx_destruct;
- (id)description;

@end

