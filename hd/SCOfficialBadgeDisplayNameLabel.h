//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIImageView, UILabel;

@interface SCOfficialBadgeDisplayNameLabel : UIView
{
    UIImageView *_imageView;
    _Bool _badgeVisible;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool badgeVisible; // @synthesize badgeVisible=_badgeVisible;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
