//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SCAvatarBuilderGenderView : UIView
{
    UIView *_roundedBackgroundView;
    UIImageView *_avatarImageView;
}

@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)animateIn;
- (void)layoutSubviews;
- (id)initWithGender:(unsigned long long)arg1 backgroundColor:(id)arg2;

@end

