//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TTTAttributedLabelDelegate.h"

@class NSAttributedString, NSString, TTTAttributedLabel, UIImage, UIImageView, UILabel, UIStackView;

@interface SCSettingsTextTableViewCell : UITableViewCell <TTTAttributedLabelDelegate>
{
    UIStackView *_horizontalStackView;
    UIStackView *_textVerticalStackView;
    UIImageView *_leadingImageView;
    UILabel *_leadingTextLabel;
    UILabel *_detailTextLabel;
    UILabel *_primaryTextLabel;
    TTTAttributedLabel *_secondaryTextLabel;
    UIImageView *_disclosureImageView;
    UILabel *_callToActionLabel;
    UIImageView *_errorImageView;
    _Bool _checked;
    _Bool _primaryTextEnabled;
    long long _disclosureIndicator;
    id <SCSettingsTextTableViewCellDelegate> _cellDelegate;
    long long _cellState;
    NSString *_detailTextAccessibilityIdentifier;
    UIImage *_leadingImage;
    NSAttributedString *_leadingText;
    NSString *_leadingViewAccessibilityIdentifier;
    NSString *_callToActionText;
    NSString *_callToActionAccessibilityIdentifier;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *callToActionAccessibilityIdentifier; // @synthesize callToActionAccessibilityIdentifier=_callToActionAccessibilityIdentifier;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *leadingViewAccessibilityIdentifier; // @synthesize leadingViewAccessibilityIdentifier=_leadingViewAccessibilityIdentifier;
@property(copy, nonatomic) NSAttributedString *leadingText; // @synthesize leadingText=_leadingText;
@property(copy, nonatomic) UIImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(copy, nonatomic) NSString *detailTextAccessibilityIdentifier; // @synthesize detailTextAccessibilityIdentifier=_detailTextAccessibilityIdentifier;
@property(nonatomic, getter=isPrimaryTextEnabled) _Bool primaryTextEnabled; // @synthesize primaryTextEnabled=_primaryTextEnabled;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(nonatomic) __weak id <SCSettingsTextTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) long long disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)_updateViewColors;
- (id)_currentTintColor;
- (id)_errorViewCreatingIfNecessary:(_Bool)arg1;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *secondaryTextAccessibilityIdentifier;
@property(copy, nonatomic) NSString *secondaryTextAccessibilityLabel;
@property(copy, nonatomic) NSString *secondaryText;
- (void)setPrimaryTextColor:(id)arg1;
- (id)primaryTextColor;
@property(copy, nonatomic) NSString *primaryTextAccessibilityIdentifier;
@property(copy, nonatomic) NSString *primaryTextAccessibilityLabel;
@property(copy, nonatomic) NSString *primaryText;
- (void)prepareForReuse;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

