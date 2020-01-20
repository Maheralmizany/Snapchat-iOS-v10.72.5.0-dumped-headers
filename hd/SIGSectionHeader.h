//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, SIGBadgeView, SIGLabel;

@interface SIGSectionHeader : UIView
{
    SIGLabel *_titleLabel;
    SIGLabel *_subtitleLabel;
    SIGBadgeView *_badgeView;
    NSArray *_labelConstraints;
    NSArray *_trailingAccesoryViewConstraints;
    UIView *_trailingAccessoryView;
    struct UIEdgeInsets _contentInsets;
}

+ (double)heightWithSubtitle:(_Bool)arg1;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(retain, nonatomic) SIGBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)_rebuildTrailingAccessoryViewConstraints;
- (id)_rebuildLabelConstraints;
- (void)_activateNewConstraints;
- (void)_deactivateExistingConstraints;
- (void)setButtonAccessoryWithText:(id)arg1 icon:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)setActionAccessoryWithText:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

