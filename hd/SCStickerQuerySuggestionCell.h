//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UILabel;

@interface SCStickerQuerySuggestionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    unsigned long long _style;
    NSString *_title;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_backgroundColorForState:(unsigned long long)arg1;
- (id)_textColorForState:(unsigned long long)arg1;
- (id)_borderColorForState:(unsigned long long)arg1;
- (void)_applyStateStyles:(unsigned long long)arg1;
- (void)applyState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateBordColor:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
