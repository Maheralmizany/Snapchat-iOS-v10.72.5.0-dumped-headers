//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedActionMenuBaseTableViewCell.h"

#import "SCActionHandlingDelegate.h"
#import "SCActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCSnapchatterAccessoryView, SCSnapchatterAvatarContainerView, SCUnifiedSplitTextView;

@interface SCUnifiedActionMenuAvatarItemTableViewCell : SCUnifiedActionMenuBaseTableViewCell <SCActionHandlingDelegate, SCActionable, SCViewModelConfigurable>
{
    SCSnapchatterAvatarContainerView *_avatarView;
    SCUnifiedSplitTextView *_splitTextSubtitle;
    SCSnapchatterAccessoryView *_snapchatterAccessoryView;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (double)heightWithViewModel:(id)arg1;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (void)_didTap;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

