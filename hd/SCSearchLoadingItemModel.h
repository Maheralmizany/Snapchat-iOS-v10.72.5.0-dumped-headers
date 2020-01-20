//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSearchLoadingAnimationModel, SCSearchRectangleMaskModel, UIColor;

@interface SCSearchLoadingItemModel : NSObject <NSCopying>
{
    SCSearchRectangleMaskModel *_layoutModel;
    SCSearchLoadingAnimationModel *_animationModel;
    UIColor *_backgroundColor;
}

@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) SCSearchLoadingAnimationModel *animationModel; // @synthesize animationModel=_animationModel;
@property(readonly, copy, nonatomic) SCSearchRectangleMaskModel *layoutModel; // @synthesize layoutModel=_layoutModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayoutModel:(id)arg1 animationModel:(id)arg2 backgroundColor:(id)arg3;

@end

