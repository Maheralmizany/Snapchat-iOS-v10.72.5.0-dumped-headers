//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCDelegateActionable.h"
#import "SCSnapchatterViewModelConfigurable.h"

@class NSString, SCLazy, UIView<SCSnapchatterViewModelConfigurable>;

@interface SCSnapchatterView : UIView <SCSnapchatterViewModelConfigurable, SCDelegateActionable>
{
    SCLazy *_basicInfoView;
    SCLazy *_friendInfoView;
    SCLazy *_chatInfoView;
    SCLazy *_avatarThumbnailView;
    SCLazy *_snapchatterAccessoryView;
    UIView<SCSnapchatterViewModelConfigurable> *_infoView;
    UIView<SCSnapchatterViewModelConfigurable> *_accessoryView;
    UIView<SCSnapchatterViewModelConfigurable> *_thumbnailView;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _infoFetcher;
    id _viewModel;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
}

@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_setInfoView:(id)arg1;
- (void)_updateChatViewWithChatInfoViewModel:(id)arg1;
- (void)_updateInfoViewWithFriendInfoViewModel:(id)arg1;
- (void)_updateInfoViewWithBasicInfoViewModel:(id)arg1;
- (void)_updateThumbanilViewWithThumbanilViewModel:(id)arg1;
- (void)_updateAccessoryViewWithAccessoryViewMode:(id)arg1;
- (void)_updateInfoViewWithInfoViewModel:(id)arg1;
- (void)setInfoFetcher:(id)arg1;
- (void)setImageDownloader:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
