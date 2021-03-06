//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCAvatarBuilderGenderView, UILabel;

@interface SCAvatarBuilderLiveMirrorGenderPickerView : UIView
{
    UIView *_buttonContainer;
    UILabel *_getStartedLabel;
    SCAvatarBuilderGenderView *_feminineAvatarView;
    SCAvatarBuilderGenderView *_masculineAvatarView;
    id <SCAvatarBuilderLiveMirrorGenderPickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAvatarBuilderLiveMirrorGenderPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionToShowGenderPicker:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAvatarImage:(id)arg1 forGender:(unsigned long long)arg2;
- (_Bool)hasGenderAssets;
- (void)_femaleSelected;
- (void)_maleSelected;
- (void)animateInGenderViews;
- (id)_addAvatarGenderViewWithGender:(unsigned long long)arg1 toView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 downloadableContentManager:(id)arg2;

@end

