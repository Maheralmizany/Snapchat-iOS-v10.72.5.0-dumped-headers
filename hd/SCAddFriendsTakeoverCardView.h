//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCCardBackgroundView, SCSearchActionButton, SCSnapchatterAvatarContainerView, UIImageView, UILabel;

@interface SCAddFriendsTakeoverCardView : UIView <SCViewModelConfigurable, SCActionable>
{
    SCCardBackgroundView *_backgroundView;
    UIImageView *_backgroundImageView;
    SCSnapchatterAvatarContainerView *_avatarContainerView;
    UILabel *_usernameLabel;
    UILabel *_displayLabel;
    UILabel *_descriptionLabel;
    UILabel *_secondaryDescriptionLabel;
    SCSearchActionButton *_addButton;
    SCSearchActionButton *_doneButton;
    SCSearchActionButton *_ignoreButton;
    id <SCImageDownloading> _imageDownloader;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_handleButtonTap:(id)arg1;
- (void)_setButtonViewModel:(id)arg1 button:(id)arg2;
- (void)layoutSubviews;
- (void)presentWithViewModel:(id)arg1;
- (void)setImageDownloader:(id)arg1;
- (id)initWithBackgroundImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
