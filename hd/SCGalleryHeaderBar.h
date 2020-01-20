//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCHovaNavigationBarDataSource.h"
#import "SCSearchViewDelegate.h"
#import "SCSpectaclesButtonItemDelegate.h"
#import "SCTraceEnabled.h"
#import "SIGHeaderItemDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, SCBitmojiProfileView, SCExpandedButton, SCLagunaAppStatusCoordinator, SCMemoriesHovaNavigationBar, SCNavigationBarButtonItem, SCNavigationItem_DEPRECATED, SCPreviewTooltipBalloon, SCSearchView, SCSpectaclesButtonItem, SCUserSession, SIGHeader;

@interface SCGalleryHeaderBar : UIView <SCHovaNavigationBarDataSource, SCSearchViewDelegate, SCSpectaclesButtonItemDelegate, SCTraceEnabled, SIGHeaderItemDelegate, UITextFieldDelegate>
{
    SIGHeader *_sigHeader;
    SCMemoriesHovaNavigationBar *_navigationBar;
    SCNavigationItem_DEPRECATED *_navigationItem;
    SCNavigationBarButtonItem *_selectButtonItem;
    SCSpectaclesButtonItem *_spectaclesButtonItem;
    NSArray *_defaultRightButtonItems;
    SCLagunaAppStatusCoordinator *_lagunaAppStatusCoordinator;
    SCExpandedButton *_selectButton;
    SCUserSession *_userSession;
    SCPreviewTooltipBalloon *_toolTipBalloon;
    _Bool _selectionMode;
    id <SCGalleryHeaderBarDelegate> _delegate;
    unsigned long long _leftButtonMode;
}

@property(nonatomic) unsigned long long leftButtonMode; // @synthesize leftButtonMode=_leftButtonMode;
@property(nonatomic) _Bool selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) __weak id <SCGalleryHeaderBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didSelectDismissalActionWithHeaderItem:(id)arg1;
- (void)spectaclesButtonItemPressed:(id)arg1;
- (_Bool)searchViewShouldBeginEditing:(id)arg1;
- (struct _NSRange)visibleRangeForNavigationBar:(id)arg1;
- (id)navigationBar:(id)arg1 searchPlaceholderForItemAtIndex:(long long)arg2;
- (double)navigationBar:(id)arg1 percentVisibleForItemAtIndex:(long long)arg2;
- (void)didSelectProfileButton:(id)arg1;
- (void)_didPressSelectButton;
- (void)_didPressSelectBackButton;
- (void)_didPressQuestionButton;
@property(readonly, nonatomic) SCBitmojiProfileView *bitmojiProfileView;
@property(readonly, nonatomic) SCSearchView *searchView;
@property(nonatomic) _Bool selectionEnabled;
- (void)_showQuestionMark;
- (void)updateNavigationBarPosition:(double)arg1;
- (void)refreshSpectaclesStatusIcon:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateRightButtonItems;
- (id)initWithNavigationItem:(id)arg1 userSession:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
