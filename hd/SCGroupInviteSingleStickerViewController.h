//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCGroupInviteViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, SCEventStickerView, SCGroupInvite, UILabel, UIScrollView;

@interface SCGroupInviteSingleStickerViewController : UIViewController <UIScrollViewDelegate, SCGroupInviteViewDelegate>
{
    SCGroupInvite *_invite;
    _Bool _editable;
    id <SCGroupInviteVenueSearchProvider> _venueSearchProvider;
    UIScrollView *_stickerScroller;
    UILabel *_hintLabel;
    SCEventStickerView *_stickerView;
    double _topInsets;
    double _bottomInsets;
    id <SCGroupInviteSingleStickerViewControllerDelegate> _delegate;
}

+ (double)preferredWidth;
@property(nonatomic) __weak id <SCGroupInviteSingleStickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_expandFromHybridModeToFullMode;
- (void)groupStickerViewDidEditSticker:(id)arg1;
- (void)resignFocus;
- (void)beginEnteringTime;
- (void)beginEnteringLocation;
- (void)focusTitleField;
- (_Bool)shouldShowTimeAndLocationButtons;
- (void)updateTopInsets:(double)arg1 bottomInsets:(double)arg2;
- (void)viewDidLayoutSubviews;
- (id)invite;
- (void)viewDidLoad;
- (id)initWithInvite:(id)arg1 venueSearchProvider:(id)arg2 editingEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

