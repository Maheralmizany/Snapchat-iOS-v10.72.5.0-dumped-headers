//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCActionModel, SCAvatarViewModel, UIColor;

@interface SCSnapchatterAvatarContainerViewModel : NSObject <NSCopying>
{
    SCAvatarViewModel *_avatarViewModel;
    UIColor *_backgroundColor;
    SCActionModel *_avatarTapActionModel;
    struct CGSize _thumbnailSize;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, copy, nonatomic) SCActionModel *avatarTapActionModel; // @synthesize avatarTapActionModel=_avatarTapActionModel;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAvatarViewModel:(id)arg1 thumbnailSize:(struct CGSize)arg2 contentInsets:(struct UIEdgeInsets)arg3 backgroundColor:(id)arg4 avatarTapActionModel:(id)arg5;

@end

