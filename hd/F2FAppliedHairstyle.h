//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CVMatHolder;

@interface F2FAppliedHairstyle : NSObject
{
    CVMatHolder *_image;
    struct HairAttributes _attributes;
    struct HairstyleSelectionFeatures _features;
}

@property(readonly, nonatomic) struct HairAttributes attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) struct HairstyleSelectionFeatures features; // @synthesize features=_features;
@property(readonly, nonatomic) CVMatHolder *image; // @synthesize image=_image;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getSerializedHairAttributes;
- (id)getSerializedFeatures;
- (id)getImage;
- (id)init:(tuple_f61e8af4)arg1;

@end

