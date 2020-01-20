//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIColor, UILabel;

@interface SCVenueBorderedStickerView : UIView
{
    UIColor *_color;
    UIView *_containerView;
    UILabel *_venueNameLabel;
    UIView *_separatorView;
    UILabel *_cityLabel;
    UIColor *_shadowColor;
    NSLayoutConstraint *_venueHeightConstraint;
    NSLayoutConstraint *_cityHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *cityHeightConstraint; // @synthesize cityHeightConstraint=_cityHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *venueHeightConstraint; // @synthesize venueHeightConstraint=_venueHeightConstraint;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *venueNameLabel; // @synthesize venueNameLabel=_venueNameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)_cityLabelGlyphRect;
- (struct CGRect)_venueLabelGlyphRect;
- (void)_updateFromViewModel:(id)arg1;
- (void)_addConstraintsForSubviews;
- (void)_configureShadowOnView:(id)arg1;
- (void)_addAndSetupCityLabel;
- (void)_addAndSetupSeparatorView;
- (void)_addAndSetupVenueNameLabel;
- (void)_addAndSetupContainerView;
- (void)_setupSubviews;
- (id)initWithViewModel:(id)arg1;

@end
