//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SCPromptView : UIView
{
    UIView *_contentView;
    UIView *_separatorView;
    NSArray *_contentItems;
    NSArray *_actions;
    double _offsetBottomHeight;
}

+ (id)promptViewWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3;
+ (id)createPromptDescriptionView:(id)arg1 hasTitle:(_Bool)arg2 textAlignment:(long long)arg3;
+ (id)createPromptTitleView:(id)arg1 hasSeparator:(_Bool)arg2;
@property(nonatomic) double offsetBottomHeight; // @synthesize offsetBottomHeight=_offsetBottomHeight;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void).cxx_destruct;
- (id)topLeftRightCornerMaskLayer:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSArray *actionViews;
- (void)didSelectActionButton:(id)arg1;
- (double)incrementPromptViewSizeHeightForActions:(id)arg1;
- (void)layoutButtons:(id)arg1 contentItems:(id)arg2 contentView:(id)arg3 textButtonPadding:(double)arg4 standardWidth:(double)arg5;
- (struct CGSize)getContentItemSize:(struct CGSize)arg1 contentItemSize:(struct CGSize)arg2 contentItem:(id)arg3;
- (double)getPromptViewHeight;
- (double)getViewSizeWidth;
- (double)getStandardWidth;
- (void)handleTap:(id)arg1;
- (id)initWithActions:(id)arg1 properties:(id)arg2;

@end

