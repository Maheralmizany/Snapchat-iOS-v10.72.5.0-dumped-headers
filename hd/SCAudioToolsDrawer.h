//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, NSTimer, SCAudioFilterView, SCAudioToolsButton, SCPreviewTooltipBalloon, UILabel, UIVisualEffectView;

@interface SCAudioToolsDrawer : UIView
{
    UIView *_drawerView;
    UIView *_popUpBackgroundView;
    SCAudioToolsButton *_soundToolButton;
    SCAudioFilterView *_filterOverlay;
    NSArray *_innerButtons;
    NSArray *_audioFilterStyleIds;
    NSArray *_overlayImageNames;
    NSArray *_unselectedImageNames;
    NSArray *_selectedImageNames;
    NSArray *_mainIconImageNames;
    long long _selectedInnerButton;
    _Bool _doNotDeselect;
    double _topOfSoundToolButtonY;
    _Bool _highlighted;
    _Bool _transitioning;
    _Bool _samePressAsWhenExpanded;
    _Bool _muteJustToggled;
    _Bool _contractAfterExpanded;
    long long _selectionWhenContracted;
    _Bool _overrideToMute;
    SCPreviewTooltipBalloon *_tooltip;
    UILabel *_label;
    NSTimer *_muteToggleTimer;
    long long _numButtons;
    long long _drawerHeight;
    _Bool _enabled;
    _Bool _selected;
    _Bool _shouldChangeForMultiSnapIndexChange;
    id <SCAudioToolsDrawerDelegate> _delegate;
    struct CGRect _containerFrame;
}

@property(readonly, nonatomic) _Bool shouldChangeForMultiSnapIndexChange; // @synthesize shouldChangeForMultiSnapIndexChange=_shouldChangeForMultiSnapIndexChange;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <SCAudioToolsDrawerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_contractAnimationCompleted;
- (void)_expandAnimationCompleted:(_Bool)arg1;
- (void)silentlyChangeSelectionToStyleId:(id)arg1 audioEnabled:(_Bool)arg2;
@property(readonly, nonatomic) _Bool audioEnabled;
@property(readonly, nonatomic) NSString *audioFilterStyleId;
@property(readonly, nonatomic) UIVisualEffectView *popUpBackgroundView;
@property(readonly, nonatomic) UIView *drawerView;
- (id)_selectedImageNameForIndex:(long long)arg1;
- (id)_unselectedImageNameForIndex:(long long)arg1;
- (id)_overlayImageNameForIndex:(long long)arg1;
- (void)_unSelectAndUnHighlightAllInnerButtons;
- (void)_setHighlighted:(_Bool)arg1 forInnerButton:(long long)arg2;
- (void)_setSelected:(_Bool)arg1 forInnerButton:(long long)arg2;
@property(readonly, nonatomic) NSArray *innerButtons;
- (long long)_indexOfButtonForTouchAtPoint:(struct CGPoint)arg1;
- (void)_hideFilterOverlay;
- (void)_updateFilterOverlay;
- (void)_changeMainButtonImageForInnerButtonIndex:(long long)arg1;
- (void)_selectButtonWhenTouchMoved:(struct CGPoint)arg1;
- (_Bool)_selectButtonAtStartOfTouch:(struct CGPoint)arg1;
- (struct CGRect)_labelFrame;
- (void)configureLabelWithText:(id)arg1;
- (void)_removeTooltip;
- (void)displayTooltip;
- (void)contract;
- (void)_expand;
- (void)_toggleMute;
- (void)viewLongPressed:(id)arg1;
- (void)viewTapped:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 selectedAudioFilterStyleId:(id)arg2 audioEnabled:(_Bool)arg3;

@end

