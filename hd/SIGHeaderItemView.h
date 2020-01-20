//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SIGHeaderEditingTextFieldDelgate.h"

@class NSLayoutConstraint, NSString, SIGHeaderEditingTextField, SIGHeaderItem, SIGLabel, SIGTextField, UITapGestureRecognizer, UITextField, UIViewPropertyAnimator;

@interface SIGHeaderItemView : UIView <SIGHeaderEditingTextFieldDelgate>
{
    UIView *_titleContainer;
    SIGLabel *_titleLabel;
    SIGLabel *_subtitleLabel;
    SIGHeaderEditingTextField *_titleTextField;
    SIGTextField *_searchField;
    UIViewPropertyAnimator *_searchFieldWidthAnimator;
    UITapGestureRecognizer *_titleLabelTapGestureRecognizer;
    NSLayoutConstraint *_heightConstraint;
    SIGHeaderItem *_currentHeaderItem;
    _Bool _showsSectionTitle;
    UIView *_trailingAccessoryView;
    UIView *_leadingAccessoryView;
    _Bool _searchFieldVisible;
    long long _scrollViewVerticalOffset;
    unsigned long long _style;
    _Bool _titleAlwaysCollapsed;
    _Bool _titleCollapsesWhenScrolled;
    id <SIGHeaderItemViewObserver> _observer;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) long long scrollViewVerticalOffset; // @synthesize scrollViewVerticalOffset=_scrollViewVerticalOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) SIGTextField *searchField; // @synthesize searchField=_searchField;
@property(readonly, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak id <SIGHeaderItemViewObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)performAnimatedTransition:(_Bool)arg1 style:(long long)arg2;
- (void)_pressedDismiss;
- (id)_backButton;
- (id)_dismissButton;
- (void)_setSearchFieldSmartInsertDeleteType:(long long)arg1;
- (void)_setSearchFieldSmartDashesType:(long long)arg1;
- (void)_setSearchFieldSmartQuotesType:(long long)arg1;
- (void)_setSearchFieldTextContentType:(id)arg1;
- (void)_setSearchFieldSecureTextEntry:(_Bool)arg1;
- (void)_setSearchFieldEnablesReturnKeyAutomatically:(_Bool)arg1;
- (void)_setSearchFieldReturnKeyType:(long long)arg1;
- (void)_setSearchFieldKeyboardAppearance:(long long)arg1;
- (void)_setSearchFieldKeyboardType:(long long)arg1;
- (void)_setSearchFieldSpellCheckingType:(long long)arg1;
- (void)_setSearchFieldAutocorrectionType:(long long)arg1;
- (void)_setSearchFieldAutocapitalizationType:(long long)arg1;
- (void)_setTitleCollapsesWhenScrolled:(_Bool)arg1;
- (void)_setTitleAlwaysCollapsed:(_Bool)arg1;
- (void)_setStyle:(unsigned long long)arg1;
- (void)_setSearchFieldTrailingView:(id)arg1;
- (void)_setSearchFieldLeadingView:(id)arg1;
- (void)_setPillsDelegate:(id)arg1;
- (void)_setSearchFieldDelegate:(id)arg1;
- (void)_setSearchFieldVisible:(_Bool)arg1;
- (void)_setLeadingAccessoryView:(id)arg1;
- (void)_setTrailingAccessoryView:(id)arg1;
- (void)_setShowsSectionTitle:(_Bool)arg1;
- (void)setDismissalAction:(unsigned long long)arg1;
- (void)_setCustomLeadingAccessoryView:(id)arg1;
- (void)_setPlaceholderText:(id)arg1;
- (void)_setTitleEditable:(_Bool)arg1;
- (void)_setTitleTextAlignment:(long long)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingHeaderItem:(id)arg1;
@property(retain, nonatomic) SIGHeaderItem *currentHeaderItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_layoutTitleContainer;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutSubviewsInternal;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (struct CGRect)_effectiveSearchFieldFrame;
- (struct CGRect)_intrinsicSearchFieldFrame;
- (struct CGRect)_topRowTrailingAccessoryViewFrame;
- (struct CGRect)_topRowLeadingAccessoryViewFrame;
- (struct CGSize)_topRowTrailingAccessoryViewFittedSize;
- (struct CGSize)_topRowLeadingAccessoryViewFittedSize;
- (struct CGRect)_topRowTitleFrameCentered;
- (struct CGRect)_topRowTitleFrame;
- (struct CGRect)_topRowBounds;
- (struct CGSize)_intrinsicContentSize;
@property(readonly, nonatomic) double maximumHeight;
- (double)heightAtFractionalSearchShown:(double)arg1 showingSubheader:(_Bool)arg2;
- (struct CGSize)_intrinsicTotalSize;
- (void)safeAreaInsetsDidChange;
- (_Bool)_isShowingSubheaderRow;
- (_Bool)_isShowingSearchRow;
- (double)_titleOpacity;
- (double)_fractionalSearchShown;
- (struct UIEdgeInsets)_safeInsets;
- (void)_stylize;
- (void)SIGHeaderEditingTextFieldDidResign:(id)arg1;
- (void)_exitTitleEditMode;
- (void)resignTextField;
- (void)_titleTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
