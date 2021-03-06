//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSDictionary, NSString, UIColor, UILabel, UIView;

@interface SCSearchSectionHeaderView : UICollectionReusableView
{
    _Bool _animating;
    NSString *_title;
    UIColor *_styleColor;
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_titleLabel;
    NSDictionary *_textAttributes;
}

@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIColor *styleColor; // @synthesize styleColor=_styleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)animateOut:(_Bool)arg1;
- (void)animateIn;
- (id)animationLayers;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

